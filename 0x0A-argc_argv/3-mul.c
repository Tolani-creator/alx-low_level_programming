#include <stdio.h>
#include <stdio.h>
/**
* main - program that prints its name, followed by a new line
* @argc: argument that count argument input
* @argv: argument that stores the strings in an array of char* (strings)
* Return: always 0
*/
int main(int argc, char *argv[])
{
int num_1, num_2, mul;

if (argc != 3)
printf("Error\n");
else 
{
num_1 = atoi(argv[1]);
num_2 = atoi(argv[2]);
mul = num_1 * num_2;
print ("%d\n", mul)
}
return (0);
}
