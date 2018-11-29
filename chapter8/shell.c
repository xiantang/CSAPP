#include "csapp.h"
#define MAXARGS 128
// 解析以空格为分割的命令行参数   构造传给argv向量
void eval(char *cmdline){
    char *argv[MAXARGS]; //执行的参数
    char buf[MAXLINE];
    int bg;
    int pid;
    strcpy(buf,cmdline);// 拷贝cmdline
    bg = parseline(buf,argv);
    if(argv[0] == NULL){
        return;
    }
    if(!builtin_command(argv)){ // 不是内建命令
        if((pid = fork())==0){ // 子进程来运行用户的工作
            if(execve(argv[0],argv,environ)<0){
                printf("%s: Command not find.\n",argv[0]);
                exit(0);
            }
        }
        if(!bg){
            int status;
            // if(waitpid(pid,&status,0)<0)
            //     unix_error("waitfg: waitpid error");
        }
        else{
            printf("%d %s",pid,cmdline);
        }
    }
    return;


}
// 解析
int parseline(char *buf,char **argv){
    char *delim; 
    int argc;    // arg的数目
    int bg;      // 后台
    buf[strlen(buf)-1] = ' ';  // 删除最后面的\n
    while(*buf && (*buf == ' ')) // 省略开头的空格
        buf++;

    argc = 0;
    while((delim= strchr(buf,' '))){ // 找出首次出现空格的位置
        argv[argc++] = buf;
        *delim = '\0';
        buf = delim +1;
        while(*buf && (*buf == ' ')){
            buf++;
        }
    }
    argv[argc] = NULL;
    if(argc == 0){
        return 1;
    }
    if ((bg = (*argv[argc-1]== '&'))!=0)
        argv[--argc] = NULL;
    return bg;
}
// 检查第一个命令行参数是不是内置shell
int builtin_command(char **argv){
    if(!strcmp(argv[0],"quit")) // 退出命令 返回0 ！
        exit(0);
    if (!strcmp(argv[0],"&")) // 后台运行
        return 1;
    return 0;
} 

int main()
{   
    char cmdline[MAXARGS]; // 命令行
    while(1){
        printf("> ");
        fgets(cmdline,MAXLINE,stdin);
        if(feof(stdin))
            exit(0);
        eval(cmdline);
    }
        /* code */
    return 0;
}
