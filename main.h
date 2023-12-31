#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT_LENGTH 100

void display_prompt(void);
int read_command(char *command);
int execute_command(char *command);
int tokenize_command(char *command, char *args[]);
void print_environment(void);

#endif /* MAIN_H */
