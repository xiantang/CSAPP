#include "csapp.h"


int main(int argc, char *argv[] ,char *envp[])
{
    /* code */
    int i;
    printf("argments:\n");
    for(i = 0;argv[i]!=NULL ;i++){
        printf("argv[%2d]:%s\n",i,argv[i]);
    }
    // return 0;
    printf("variables:\n");
    for(i=0;envp[i]!=NULL;i++){
        printf("envp[%d]:%s\n",i,envp[i]);

    }
}
