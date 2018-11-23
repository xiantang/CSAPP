#include <stdio.h>
struct rect{

    long llx;
    long lly;
    unsigned long width;
    unsigned long height;
    unsigned color;
};
struct rec{
    int i;
    int j;
    int a[2];
    int *p;
}
void area(struct rect rp){
    
    rp.width = 100;
}
void rotate_left(struct rect *rp){
    long t = rp->height;
    rp->height = rp.width;
    rp->width = t;
    rp->llx -= t;
}
int main(int argc, char const *argv[])
{
    // struct rect r;
    // r.llx = r.lly = 0;
    // r.color = 0xFF00FF;
    // r.width = 10;
    // r.height = 20;
    struct rect r= {0,0,10,20,0xFF00FF};
    area(r);
    printf("%d\n",r.width);
    /* code */
    return 0;
}
