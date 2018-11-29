#include "csapp.h"

int main(int argc, char const *argv[])
{
    if (fork()==0){
        printf("a");fflush(stdout);
    }else{
        printf("b");fflush(stdout);
        waitpid(-1,NULL,0); // 等待他的子进程停止
    }
    printf("c");fflush(stdout);
    exit(0);
    return 0;
}
