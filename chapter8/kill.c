#include "csapp.h"

int main(int argc, char const *argv[])
{
    pid_t pid;
    if((pid = fork())==0){
        pause();
        printf("never reach here!\n");
          exit(0);
    }
    kill(pid,SIGKILL);
    exit(0);
    return 0;
}
