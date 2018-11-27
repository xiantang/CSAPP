#include "csapp.h" 

unsigned int snooze(unsigned int secs){
    unsigned int rc= sleep(secs);
    printf("Slept %d of %d",secs-rc,secs);
    return rc;
}