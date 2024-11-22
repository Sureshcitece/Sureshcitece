#include <stdio.h>

void new_cmd();
void open_cmd();

void print_error(const char *message){
    static int n = 1;
    printf("Error %d:%s\n", n++, message);
}

struct {
    char *cmd_name;
    void (*cmd_pointer) (void);
} file_cmd[] = {
    {"new", new_cmd},
    {"open", open_cmd}
};

void new_cmd(){
    printf("new cmd\n");
}

void open_cmd(){
    printf("open cmd\n");
}

int main(void){
    file_cmd[0].cmd_pointer();
    for(int i = 0; i<5; i++)
        print_error("suresh");
}