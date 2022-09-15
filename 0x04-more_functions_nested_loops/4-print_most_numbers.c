#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int i=0;
        while(i<10)
        {
                while(i==2 || i==4)
                {
                        i++;
			_putchar(i);
                        continue;
                }
                _putchar("\n");
                i++;
        }

}
