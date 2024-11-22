#include <stdio.h>
#include <string.h>

void remove_filename(char* url){
    for(int i = 0; url[i] != '\0'; i++)
        if(url[i] == '.' && url[i+1] == 'c' && url[i+2] == 'o' && url[i+3] == 'm'){
            url[i+4] = '\0';
            break;
        }
}

int main(void){
    char url[] = "http://www.knking.com/index.html";
    char *p = url;
    remove_filename(p);
    puts(p);
    return 0;
}