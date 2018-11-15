#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 使用指针访问数组
    int p[] = {1,2,3};
    int *c;
    c  = p;
    for(int i = 0;i<3;i++){
           printf("%d\n",*(c+i)); 
    }
    /* code */
    return 0;
}
