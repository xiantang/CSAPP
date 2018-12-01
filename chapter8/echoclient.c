#include "csapp.h"
int Open_clientfd(char *hostname, char *port) ;
int main(int argc, char const *argv[])
{
    int clientfd;
    char *host,*port,buf[MAXLINE];
    rio_t rio;
    host = argv[1];
    port = argv[2];
    clientfd = Open_clientfd(host,port);
    Rio_readinitb(&rio,clientfd);
    return 0;
}
