#include <stdio.h>
#include "header.h"
int main(void){

	char command[3];
	int int1;
	int int2;
	int result;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Hello! I am Josiah's Computational Calcutron. \nI am capable of a few strange mathematical operations involving integers. \n");
	printf("Type \"help\" for a list of commands, or type a command to get started! Type \"quit\"  to exit the program \n");
do{
        scanf("%s", command);
	if('a' == command[0]){								//addition
		printf("add which two integers together?\n");
		scanf("%d%d", &int1,&int2);
	                int result = (addition(int1,int2));
			if (result == -1){
				printf("sorry, the result needs to be less than 2,147,483,648\n");
			}else {
				printf("%d plus %d is %d\n", int1, int2, result);
			}
	} else if ('m' == command [0]){							//multiplication
		printf("Multiply which two integers?\n");
		scanf("%d%d", &int1, &int2);
		int result =(multiply(int1,int2));
                if (result == -1){
       	                printf("sorry, the result needs to be less than 2,147,483,648\n");
               	}else {
			printf("%d multiplied by %d is %d \n", int1,int2, result);
		}

	} else if ('e' == command [0]){							//exponent
                printf("What is the base?\n");
                scanf("%d", &int1);
		printf("What is the exponent?\n");
                scanf("%d",&int2);
                int result =(exponent(int1,int2));
     	         	if (result == -1){
	                	 printf("sorry, the result needs to be less than 2,147,483,648\n");
       	        }else {
		                printf("%d raised to the power of  %d is %d \n", int1,int2, result);
		}

        } else if ('d' == command [0]){							// divide
                printf("Divide which two integers?\n");
                scanf("%d%d", &int1,&int2);
                int result =(divide(int1,int2));
                printf("%d divided by %d is %d (after truncation)\n", int1,int2, result);
        } else if ('s' == command [0]){
		if('g' == command [2]){							//Sum (sigma)
        	        printf("Sum together all of the integers between which two integers?\n");
               		scanf("%d%d", &int1,&int2);
			if (int1 > int2){
	                	int result =(sum(int1,int2));
	                        if (result == -1){
	                                printf("sorry, the result needs to be less than 2,147,483,648\n");
        	                }else {
                	                printf("The numbers between %d and %d inclusive add to equal %d", int1, int2, result);
                        	}
			} else{
				int result = (sum(int2,int1));
	                        if (result == -1){
	                                printf("sorry, the result needs to be less than 2,147,483,648\n");
                	        }else {
	                                printf("The numbers between %d and %d inclusive add to equal %d",int2, int1, result);
        	                }
			}
		} else if('b' == command [2]){						//subtract
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
	} else if('f' == command[0]){							//factorial
		printf("Compute which factorial?\n");
                scanf("%d", &int1);
		if (int1 > 12){
			printf("sorry, the result needs to be less than 2,147,483,648\n");
		}else {
                	int result =(factorial(int1));
               		printf("%d factorial is %d \n", int1, result);
		}

	} else if ('b' == command[0]){							// bitcount
		printf("How many set bits in which integer?\n");
		scanf("%d", &int1);
		int result = (bitcount(int1));
		if (result == 1){
	                printf("There is only one set bit in %d\n", int1);
		}else{
			printf("There are %d set bits in %d\n", result, int1);
		}
        } else if ('h' == command[0]){                                                  //help
                printf("\n Here is a list of commands, each with a basic description.\n For a detailed description of a command, enter \"info\" then the command.\n\n");
                printf("help            - this is what you typed to get this list\n");
                printf("info            - If you want more information about a command use command info, then enter the command\n");
                printf("quit            - exit the program\n");
                printf("add             - add the next two digits\n");
                printf("subtract        - subtract the next two integers\n");
                printf("multiply        - multiply the next two integers\n");
                printf("exponent        - raises the first integer to the power of the second integer\n");
                printf("divide          - divides the first integer by the second integer, then truncates the result\n");
                printf("bitcount        - returns the number of set bits in the binary representation of the integer\n");
                printf("sigma           - sums all numbers between the two integer entered (inclusive)\n");
                printf("factorial       - computes the factorial of the integer\n\n");

	} else if ('i' == command [0]){
		printf("Which command do you want more information about?\n");
		scanf("%s", command);
		printf("\n\n\nThe inputs and the result of any calculation must be a positive integer less than 2,147,483,648\n");
		printf("Input can be done on one line \" subtract 10 4\" or can be spit onto multiple lines. Values entered must be integers. Floating points are not supported.\n");

		if ('a' == command[0]){
			printf("Addition. Takes two values and adds them together. \n Input:\n Two integers, any order\n");

		}else if ('m' == command[0]){
                        printf("Multiplication. Takes two values and multiplies them. \n Input:\n Two integers, any order\n");

                }else if ('e' == command[0]){
                        printf("Exponent. The first value entered is the base. The second value entered is the exponent that that base is raised to.  \n Input:\n Two integers. Base then exponent.\n");

                }else if ('d' == command[0]){
                        printf("Performs integer division. No floating point values. The operation is floored, meaning the result is always rounded down. \n Input:\n Two integers. Dividend then divisor.\n");

                }else if ('b' == command[0]){
                        printf("Bitcounting. This counts the number of 1's or \"set\" bits in the binary representation of the input \n Input:\n One integer\n");

                }else if ('f' == command[0]){
                        printf("Factorial. Calculates the factorial of the input. \n Input:\n One integer\n");

                }else if ('s' == command[0]){
			if('m' == command[2]){
                        	printf("Sigma. Totals the sum of each two integers and the values between the two given.  \n Input:\n Two integers. No order required\n");

			}else if ('b' == command[2]){
				printf("Subtract. Subtracts one integer from the other. The first number given should be the largest, but it will rearrange them for you if you forgot. It will also notify you.");
				printf("\n Input: \n Two integers. Preferably minuend then subtrahend. \nRemember: No negatives are allowed\n");
			}
		}


	} else if ('q' == command[0]){
                printf("Bye Bye now! Hope you have a wonderful day :)\n");
		return 0;
	} else {
		 printf("I tried my best, but I don't know what you meant by \"%s\". Please try again! (or type quit to quit)\n", command);
	}

	printf("\n\nAre there any other commands you would like to run? Type help for a list of commands or quit to quit\n");

} while ('q' != command[0]);

return 0;
}
