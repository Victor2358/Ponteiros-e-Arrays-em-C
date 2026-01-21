#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    const char *hello = "print(\"hello world\")";
    
    FILE *f = fopen("hello.py", "w");
    fprintf(f, "%s", hello);
    fclose(f);
    
    return 0;
}

