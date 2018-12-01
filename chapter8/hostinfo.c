#include "csapp.h"

int main(int argc, char const *argv[])
{
    struct addrinfo *p,*listp,hints;
    char buf[MAXLINE];
    int rc,flags;
    // if(argc != 2){
    //     fprintf()
    // }
    memset(&hints,0,sizeof(struct addrinfo));
    hints.ai_family = AF_INET; //默认返回IPV4
    hints.ai_socktype = SOCK_STREAM; 
    if((rc = getaddrinfo(argv[1],NULL,&hints,&listp))!=0){
        fprintf(stderr,"getaddrerror");
        exit(1);
    }
    flags = NI_NUMERICHOST;
    for(p = listp;p;p=p->ai_next){
        getnameinfo(p->ai_addr,p->ai_addrlen,buf,MAXLINE,NULL,0,flags);
        printf("%s\n",buf);
    }
    freeaddrinfo(listp);
    return 0;
}
