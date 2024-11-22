#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int count_occurences(struct node *list, int n){
    struct node *temp = list;
    int count = 0;
    for(temp=list; temp != NULL; temp = temp->next){
        if(temp->value == n)
            count += 1;
    }
    return count;
}

struct node *find_last(struct node *list, int n){
    struct node *temp = list;
    struct node *prev = NULL;
    for(temp=list; temp != NULL; temp = temp->next){
        if(temp->value == n)
            prev = temp;
    }
    return prev;
}

int main(){
    struct node *first = malloc(sizeof(struct node));
    first->value = 10;

    struct node *second = malloc(sizeof(struct node));
    second->value = 20;
    first->next = second;

    struct node *third = malloc(sizeof(struct node));
    third->value = 10;
    second->next = third;
    third->next = NULL;

    int count = count_occurences(first,10);
    printf("%d\n", count);

    struct node *last = find_last(first, 20);
    printf("%d\n", last->value);

    return 0;
}