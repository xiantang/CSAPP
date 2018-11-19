#include <stdio.h>
float sum_elements(float a[],int length){
    int i;
    float result = 0;
    printf("%.1f\n",result);
    for(i=0;i<=length;i++ ){
        result += a[i];
        
    }
    
    return result;


}
int main(int argc, char const *argv[])
{
    /* code */
    float a[] ={};
    float v = sum_elements(a,0);
    printf("%.1f\n",v);
    return 0;
}
 