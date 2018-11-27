#include "csapp.h"
#define N 2

int  main(int argc, char const *argv[])
{
    int status,i;
    pid_t pid[N],retpid;
    for(i = 0;i<N;i++)
        if((pid[i] = fork())==0) // 子进程
            exit(100+i);
    
    // while((pid = waitpid(-1,&status,0))>0){
    //     if(WIFEXITED(status))
    //         printf("child %d terminated normally with exit status=%d\n",pid,WEXITSTATUS(status));
    //     else
    //         printf("child %d terminated abnormally\n",pid);
    // }
    i = 0;
     while((retpid = waitpid(pid[i++],&status,0))>0){
        if(WIFEXITED(status))
            printf("child %d terminated normally with exit status=%d\n",retpid,WEXITSTATUS(status));
        else
            printf("child %d terminated abnormally\n",retpid);
    }
    // if(errno !=ECHILD)
    //     unix_error("waitpid error");
    exit(0);
}
