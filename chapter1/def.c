#include <stdio.h>
// 将数据类型定义为指向'unsigned char'的指针
typedef unsigned char * byte_pointer;

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
    test_show_bytes(12345);
}
