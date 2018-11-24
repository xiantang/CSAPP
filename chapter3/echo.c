#include <stdio.h> 
char * gets(char *s){
    int c;
    char *dest = s;
    while((c=getchar())!='\n')
        *dest ++ = c;
    if (c==EOF&& dest == s)
        return NULL
    *dest++ = '\0'
    return s;
}

int main(int argc, char const *argv[])
{
    char buf[8];
    gets(buf);
    return 0;
}
