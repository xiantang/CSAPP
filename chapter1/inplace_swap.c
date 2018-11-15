#include <stdio.h>
void inplace_swap(int* x,int *y){
    *y = *x ^ *y;
    printf("%d\n",*y);
    printf("%d\n",*x);
    *x = *x ^ *y;
    *y = *x ^ *y;
    
}
void reverse_array(int a[],int cnt){
    int first,last;
    for(first =0,last=cnt-1;first<=last;first++,last--){
        // printf("%d,%d\n",a[last],a[first]);
        inplace_swap(&a[first],&a[last]);
    }
    int *c = a;
    for(int i= 0;i<cnt;i++){
        printf("%d\n",*(c+i));
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    // int a = 4,b=3;
    // int *x = &a;
    // int *y = &b;
    // inplace_swap(x,y);
    // return 0;
    int a [5] = {1,2,3,4,5};
    reverse_array(a,5);
}
