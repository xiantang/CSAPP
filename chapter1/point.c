#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int  var = 20;   /* 实际变量的声明 */
   int  *ip;        /* 指针变量的声明 */
 
   ip = &var;  /* 在指针变量中存储 var 的地址 */
    //  找到var所对应的指
   printf("Address of var variable: %p\n", &var  );
   // 找到ip 存储的var的地址
   printf("Address stored in ip variable: %p\n", ip );
   // 找到访问ip存储的var的对应的值
    printf("Address of *ip variable: %d\n",*ip);
    return 0;
}
