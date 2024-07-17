#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
/**
 * check_num - checks if a string contains only digits
 * @str: input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
	int check_num(char *str)
	{
		/*Declaring variables*/
		unsigned int count;


		count = 0;
		while (count < strlen(str)) /*count string*/


		{
			if (!isdigit(str[count])) /*check if str there are digit*/
			{
				return (0);
			}


			count++;
		}
		return (1);
	}
/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if there are non-digit characters in the input
 */
	int main(int argc, char *argv[])


	{


		/*Declaring variables*/
		int count;
		int str_to_int;
		int sum = 0;


		count = 1;
		while (count < argc) /*Goes through the whole array*/
		{
			if (check_num(argv[count]))


			{
				str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
				sum += str_to_int;
			}


			/*Condition if one of the number contains symbols that are not digits*/
			else
			{
				printf("Error\n");
				return (1);
			}


			count++;
		}


		printf("%d\n", sum); /*print sum*/
		return (0);
	}
