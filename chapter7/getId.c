#include "csapp.h"

void exit(int status);
pid_t getpid(void);
pid_t getppid(void);
pid_t fork(void); // 父亲进程调用fork的时候，子进程可以读取父进程的任何文件
pid_t waitpid(pid_t pid,int *statusp,int options);
int main(int argc, char const *argv[])
{
    /* code */
    // pid_t pid;
    // int x = 1;
    // pid = fork();
    // if(pid == 0){
    //     printf("child :x = %d\n",++x);
    //     exit(0);
    // }
    // printf("parent: x = %d\n",--x);
    // exit(0);
    // return 0;
    // fork();
    // fork();
    // printf("ge\n");
    // exit(0);
    int x = 1;
    if(fork()==0)
        printf("p1: x=%d\n",++x);
    printf("p2: x=%d\n",--x);
    exit(0);
    
}

