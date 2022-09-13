#include <stdio.h>
/**
 * main: start of a program that  prints the size of various types on the computer 
 * Description:  prints the size of various types on the computer it is compiled
  and run on.
  returns 0 
  */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));	     printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
