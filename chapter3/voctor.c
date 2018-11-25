#include <stdio.h> 
#include <stdlib.h> 
#define IDENT 1
#define OP +

typedef struct{
    long len;
    int *data;
// vec_ptr 作为vec_rec的指针
}vec_rec,*vec_ptr;


// 创建一个向量 并且明确长度
vec_ptr new_vec(long len){
    // 申请空间
    vec_ptr result = (vec_ptr) malloc(sizeof(vec_rec));
    int *data = NULL;
    if(!result)
        return NULL; // 无法申请空间  
    result->len = len; // 明确长度   
    if(len>0){
        // 分配所需的内存空间，并返回一个指向它的指针
        data = (int *) calloc (len,sizeof(int));
        if(!data){  
            free((void *)result); // 回收空间
            return NULL;
        }
    }
    result->data = data;
    return result;
}

int get_vec_element(vec_ptr v, long index, int *dest){
    // 边界检查
    
    if(index<0 || index >= v->len){
        return 0;
    }
    *dest = v->data[index];
    
    return 1;
}

long vec_length(vec_ptr v){
    return v->len;
}

void combine1(vec_ptr v,int *dest){
    long i;
    *dest = IDENT;
    for(i = 0;i<vec_length(v);i++){

        int val;
        get_vec_element(v,i,&val);
        *dest = *dest OP val;        
    }
}
void combine2(vec_ptr v,int *dest){
    long i;
    long length = vec_length(v);
    *dest = IDENT;
    for(i = 0;i<length;i++){
        int val;
        get_vec_element(v,i,&val);
        // printf("%d\n",val)
        *dest = *dest OP val;

    }
}

int * get_vet_start(vec_ptr v){
    return v->data;
}

int main(int argc, char const *argv[])
{
    /* code */
    vec_ptr first = new_vec(2);
    // printf("%d\n",1111);
    int  aa[] = {1,2};
    first->data = &aa;
    int * comp;
    // 初始化指针
    comp = &aa;
    get_vec_element(first,1,comp);
    printf("%d\n",*comp);
    // return 0;
    // combine2(first,comp);
    int * qqq= get_vet_start(first);
    printf("%d\n",*qqq);
}

