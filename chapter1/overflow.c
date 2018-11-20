#include <stdio.h>
int ok(int x,int y){
    int sum = x+y;
    int neg_over = x< 0 && y < 0 && sum >=0;
    int pos_over = x>= 0 && y>=0 && sum < 0;
    return !neg_over && !pos_over;
}
// int tsub_ok(int x,int y){
//     return tadd_ok(x,-y);

// }
int tmult_ok(int x,int y){
    int p = x*y;
}
main(int argc, char const *argv[])
{
    
    
    return 0;
}
