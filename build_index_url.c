#include <stdio.h>
#include <string.h>

void build_index_url(const char* domain_name, char* index_url){
    strcpy(index_url,"http://www.");
    strcat(index_url, domain_name);
    strcat(index_url, "/index.html");
    return;
}

int f(char* s, char *t){
    char *p1, *p2;
    for(p1 = s; *p1; p1++){
        for(p2 = t; *p2; p2++)
            if(*p1 == *p2) break;
        if(*p2 == '\0') break;
    }
    return p1-s; 
}

int main(void){
    const char domain[] = "knking.com";
    char index_url[70];
    build_index_url(domain, index_url);
    puts(index_url);

    char s[] = "Hsjodi", *p;
    for(p = s; *p; p++)
        --*p;
    puts(s);

    printf("%d\n", f("abcd", "babc"));
    printf("%d\n", f("abcd", "bcd"));

    return 0;
}