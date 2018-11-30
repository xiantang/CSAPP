#include "csapp.h" 
unsigned int snooze(unsigned int secs){
    unsigned int rc= sleep(secs);
    printf("Slept %d of %d",secs-rc,secs);
    return rc;
}

void handler(int sig){

    return;
}

int main(int argc, char  *argv[])
{   
    if (signal(SIGINT,handler)==SIG_ERR)
        printf("signal error");
    (void)snooze(argv[1]);
    exit(0);


}
