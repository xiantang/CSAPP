#include <stdio.h>
long exchange(long *xp,long y){
    long x = *xp; // 找到x所指代的值   
    *xp = y; 
    printf("%d\n",*xp);
    return x;
}
int main(int argc, char const *argv[])
{
    long a = 4;
    long b = exchange(&a,3);
    printf("a = %ld ,b = %ld\n",a,b);
    /* code */
    return 0;
}
