#include <stdio.hd>
/**
 * main - prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	char d;
	int e;
	long int l;
	long long int m;
	float n;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));
return (0);
}
