#include <stdio.h>
typedef int * int_pointer; // 指向int的指针 

int main(int argc, char const *argv[])
{
    int_pointer ip;
    int a = 1;
    ip = &a;
    // 取出值
    printf("%d\n",*ip);
    // 找到ip 存储的var的地址
   printf("%p\n", ip );
    /* code */
    return 0;
}
