#include "csapp.h"

void sigint_handler(int sig)
{
    printf("Caught SIGINT!\n");
    exit(0);
}

int main(int argc, char const *argv[])
{
    if (signal(SIGINT,sigint_handler)==SIG_ERR)
        printf("signal error");
    pause();
    return 0;
}
