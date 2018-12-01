#include "csapp.h"

int main(int argc, char const *argv[])
{
    
    int n ;
    rio_t rio;
    char buf[MAXLINE];
    Rio_readinitb(&rio,STDERR_FILENO);
    while((n = Rio_readinitb(&rio,buf,MAXLINE))!=0)
        Rio_writen(STDOUT_FILENO,buf,n);
    return 0;
}
