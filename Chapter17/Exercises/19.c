#include <string.h>
#include <stdio.h>

struct {
    char *cmd_name;
    void (*cmd_pointer) (void);
} file_cmd[] = {
    {"new", new_cmd},
    {"open", open_cmd},
    {"close", close_cmd},
    {"close all", close_all_cmd},
    {"save", save_cmd},
    {"save as", save_as_cmd},
    {"save all", save_all_cmd},
    {"print", print_cmd},
    {"exit", exit_cmd},
};

void search_cmd(const char *str)
{
    int i;

    for (
            i = 0; 
            i < 9 && strcmp(str, file_cmd[i].cmd_name) != 0; 
            i++)
        ;
    if (i != 9) 
        file_cmd[i].cmd_pointer();
    else
        printf("%s is not a cmd.\n", str);
}

