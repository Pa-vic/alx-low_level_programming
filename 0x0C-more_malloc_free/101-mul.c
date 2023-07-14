#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_digits - Checks if a string consists only of digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string consists only of digits, 0 otherwise.
 */
int check_digits(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: A dynamically allocated string containing the product of num1 and num2.
 */
char *multiply(const char *num1, const char *num2)
{
    int len1 = 0, len2 = 0, len = 0, carry = 0, i, j, k;
    char *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;
    
    len = len1 + len2;
    result = malloc(sizeof(char) * (len + 1));
    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (i = len - 1; i >= 0; i--)
    {
        result[i] = carry;
        carry = 0;
        k = i;

        for (j = len2 - 1; j >= 0; j--, k--)
        {
            if (k < len1)
                result[i] += (num1[k] - '0') * (num2[j] - '0');
            
            if (result[i] > 9)
            {
                carry = result[i] / 10;
                result[i] %= 10;
            }
        }
    }

    if (carry != 0)
        printf("Warning: Overflow occurred during multiplication.\n");

    result[len] = '\0';
    return result;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!check_digits(argv[1]) || !check_digits(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    char *product = multiply(num1, num2);
    printf("%s\n", product);
    free(product);

    return 0;
}

