#include <stdio.h>  

void swap(long *xp,long *yp){
    *xp = *xp+*yp;
    *yp = *xp-*yp;
    printf("%ld\n",*yp);



}
int main(int argc, char const *argv[])
{
    /* code */
    long a = 1000;
    long b = 2000;
    // 指针都指向一个地方所以会变为0
    swap(&a,&a);
    return 0;
}
