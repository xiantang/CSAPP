#include "struct.h"
#include <stdio.h>

// 将数据类型定义为指向'unsigned char'的指针
void show_bytes(byte_pointer start,size_t len){
    size_t i ;
    
    for(i=0;i<len;i++){
        printf("%.2x",start[i]); // 至少2位的16进制输出
    }
    printf("\n");
}
void show_int(int x){
    // sizeof 来确定对象使用的字节数目
    show_bytes((byte_pointer)&x,sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer)&x,sizeof(float));
}
void show_pointer(void *x){
    show_bytes((byte_pointer)&x,sizeof(void *));
}
void test_show_bytes(int val){
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    // linux 64 使用了8字节地址表示指针
    show_pointer(pval);

}
int compare(int x,int y){
    return !(x^y);
}
int main(int argc, char const *argv[])
{
    /* code */
    // int c = 5231;
    // show_int(c);
    // float a = 123.12;
    // show_float(a);
    // void * b = show_float;
    // show_pointer(b);
    // return 0;
    // test_show_bytes(12345);
    // int val = 0x87654321;
    // byte_pointer valp = (byte_pointer)&val; // & 是取地址 创建一个指针
    // show_bytes(valp,1);
    // show_bytes(valp,2);
    // show_bytes(valp,3);
    // const char *s = "abcdef";
    // show_bytes((byte_pointer)s,6);
    // short x = 12345;
    // short mx = -x;
    // show_bytes((byte_pointer)&x,sizeof(short));
    //  show_bytes((byte_pointer)&mx,sizeof(short));
    // short int v = -12345;
    // unsigned short uv =(unsigned short)v;
    // printf("v = %d, uv= %u\n",v,uv);
    // unsigned u = 4294967295u;
    // int tu = (int) u;
    // printf("u = %u, tu=%d\n",u,tu);
    // int x = 0x66;
    // int y = 0x39;
    // printf("%x\n",x&!y);
    // int a = compare(5,5);
    
    // short x= 12345;
    // short mx = -x;
    // show_bytes((byte_pointer)&x,sizeof(short));
    // show_bytes((byte_pointer)&mx,sizeof(short));
    // short int v = -12345;
    // show_bytes((byte_pointer)&v,sizeof(short));
    // unsigned short uv = (unsigned short) v;
    // printf("v=%d,uv=%u\n",v,uv);
    
    /* code */
    return 0;
}
