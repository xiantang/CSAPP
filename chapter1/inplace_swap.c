#include <stdio.h>
void inplace_swap(int* x,int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
    printf("%d\n",*y);
    printf("%d\n",*x);
}

int main(int argc, char const *argv[])
{
    /* code */
    int a = 4,b=3;
    int *x = &a;
    int *y = &b;
    inplace_swap(x,y);
    return 0;
}
