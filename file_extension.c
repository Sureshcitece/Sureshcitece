#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension){
    while(*file_name++ != '\0')
        if(*file_name == '.'){
            strcpy(extension,file_name);
            return;
        }
    extension[0] =  '\0';        
}

int main(void){
    char ext[6];
    get_extension("suresh", ext);
    printf("%s\n", ext);
    get_extension("suresh.txt", ext);
    printf("%s\n", ext);
    get_extension("ramesh.cpp", ext);
    printf("%s\n", ext);
    get_extension("hello.c", ext);
    printf("%s\n", ext);
    return 0;
}