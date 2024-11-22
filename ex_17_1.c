#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* my_malloc(size_t n){
   int* p = malloc(sizeof(int) * n);
   if(!p) { printf("Error: malloc failed in my_alloc\n"); exit(EXIT_FAILURE); }
   return p;
}

char *duplicate(const char* s1){
    char *s2 = malloc(strlen(s1)+1);
    if(!s1) {printf("Error: malloc failed in my_copy\n"); return NULL;}
    strcpy(s2,s1);
    return s2;
}

int *create_array(int n, int initial_value){
    int* arr = malloc(sizeof(int) * n);
    for(int i=0; i<n; i++)
        arr[i] = initial_value;
    return arr;
}

struct point {int x, y;};
struct rectangle {struct point upper_left, lower_right;};

struct node {
    int value;
    struct node *next;
};

int main(){
    int* i = my_malloc(1);
    char *s = "Suresh";  
    char* s1; 
    s1 = duplicate(s);
    printf("%s\n", s1);
    int *arr1 = create_array(10,5);
    struct point *p = malloc(sizeof(struct point));
    struct point *q = malloc(sizeof(struct point));
    p->x = 10; p->y = 25;
    q->x = 20; q->y = 15;
    printf("%d", (p)->x);
    printf("%d", (*p).x);
    struct rectangle *r = malloc(sizeof(struct rectangle));
    r->upper_left = *p;
    r->lower_right = *q;

    struct node *first = NULL;
    first = malloc(sizeof(struct node));
    first->value = 10;
    
    
    struct node *second = NULL;
    second = malloc(sizeof(struct node));
    second->value = 11;

    first->next = second;

    return 0;
}