#include <stdio.h>
#include "header.h"
int main(void){

	char command[3];
	int int1;
	int int2;
	int result;

	printf("\n\nHello! I am Josiah's Computational Calcutron. \nI am capable of a few strange mathematical operations involving integers. Try me! \n");
	printf("Type \"help\" for a list of commands, or type a command to get started! Type \"quit\"  to exit the program \n");
	scanf("%s", command);

	if('a' == command[0]){					//addition
		printf("add which two integers together?");
		scanf("%d%d", &int1,&int2);
		int result = (addition(int1,int2));
		printf("%d plus %d is %d\n", int1, int2, result);

	}else if ('m' == command [0]){				//multiplication
		printf("Multiply which two integers?");
		int result =(multiply(int1,int2));
		printf("%d multiplied by %d is %d \n", int1,int2, result);

	} else if ('e' == command [0]){				//exponent
                printf("What is the base?\n");
                scanf("%d", &int1);
		printf("What is the exponent?\n");
                scanf("%d",&int2);
                int result =(exponent(int1,int2));
                printf("%d raised to the power of  %d is %d \n", int1,int2, result);

        } else if ('d' == command [0]){				// divide
                printf("Divide which two integers?\n");
                scanf("%d%d", &int1,&int2);
                int result =(divide(int1,int2));
                printf("%d divided by %d is %d (after truncation)\n", int1,int2, result);

        } else if ('s' == command [0]){

		if('m' == command [2]){			//Sum (sigma)
        	        printf("Sum together all of the integers between which two integers?\n");
               		scanf("%d%d", &int1,&int2);
			if(int1 > int2){
	                	int result =(sum(int1,int2));
			}else{
				int result = (sum(int2,int1));
			}
                	printf("The numbers between %d and %d inclusive add to equal %d\n", int1,int2, result);

		} else if('b' == command [2]){		//subtract
			printf("Enter the larger integer to subtract from, then the amount to subtract\n");
			scanf("%d%d", &int1, &int2);
			if (int1 > int2){
				int result = (subtract(int1, int2));
				printf("%d minus %d equals %d\n",int1,int2,result);
			} else {
				int result = (subtract(int2, int1));
				printf("%d minus %d is negative. We don't do those here, but %d minus %d is %d\n",int1,int2, int2, int1,result);
			}
		}

	}else if('f' == command[0]){			//factorial
		printf("Compute which factorial?\n");
                scanf("%d", &int1);
                int result =(factorial(int1));
                printf("%d factorial is\n", int1, result);

	}else if ('b' == command[0]){			// bitcount
		printf("How many set bits in which integer?\n");
		scanf("%d", &int1);
		int result = (bitcount(int1));
		printf("There are %d set bits in %d\n", result, int1);



	} else if ('i' == command [0]){				//info
		printf("prompt user for another command, then output answer");

	}else if ('h' == command[0]){					//help
		printf("\n List of commands with basic description.  \n\n");
		printf("help 		- this is what you typed to get this list\n");
		printf("info		- If you want more information about a command use command info, then enter the command\n");
		printf("quit 		- exit the program\n");
		printf("add 		- add the next two digits\n");
		printf("subtract 	- subtract the next two integers\n");
		printf("multiply 	- multiply the next two integers\n");
		printf("exponent 	- raises the first integer to the power of the second integer\n");
		printf("divide		- divides the first integer by the second integer, then truncates the result\n");
		printf("bitcount 	- returns the number of set bits in the binary representation of the integer\n");
		printf("sum 		- sums all numbers between the two integer entered (inclusive)\n");
		printf("factorial	- computes the factorial of the integer\n\n");
	}else{
		printf("I tried my best, but I don't know what you meant. Please try again! (or type quit to quit)");
	}


return 0;
}
