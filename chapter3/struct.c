#include <stdio.h>
struct rect{

    long llx;
    long lly;
    unsigned long width;
    unsigned long height;
    unsigned color;
};
long area(struct rect *rp){
    return rp->width * rp->height;
}
int main(int argc, char const *argv[])
{
    // struct rect r;
    // r.llx = r.lly = 0;
    // r.color = 0xFF00FF;
    // r.width = 10;
    // r.height = 20;
    struct rect r= {0,0,10,20,0xFF00FF};
    long leng = area(&r);
    printf("%d\n",leng);
    /* code */
    return 0;
}
