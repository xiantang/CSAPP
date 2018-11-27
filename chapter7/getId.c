#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void exit(int status);
pid_t getpid(void);
pid_t getppid(void);
pid_t fork(void); // 父亲进程调用fork的时候，子进程可以读取父进程的任何文件

int main(int argc, char const *argv[])
{
    /* code */
    pid_t pid;
    int x = 1;
    pid = fork();
    if(pid == 0){
        printf("child :x = %d\n",++x);
        exit(0);
    }
    printf("parent: x = %d\n",--x);
    exit(0);
    return 0;
}
