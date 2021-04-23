
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
        int i;
        char command[20];
        char input[11];
        int int1;
        int int2;
        int length;
        int result;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("Hello! I am Josiah's Computational Calcutron. \nI am capable of a few strange mathematical operations involving integers. \n");
        printf("Type \"help\" for a list of commands, or type a command to get started! Type \"quit\"  to exit the program \n");

        do{
                printf("Enter your command");
		fgets(command, 10, stdin);
                printf("you entered %s\n", command);
                printf("enter integers \n", command);
                printf("command index 1 %c \n", command[5]);

                fgets(input, 10, stdin);
                printf(" you entered %s \n", input);
                input[10] = '\0';
//		length = strlen(&input);
//		printf("length of input is %d", length);
                int1 = getints(*input, 10);

        } while (command[0] != 'q');
}

