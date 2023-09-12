#ifndef _MAIN_H_
#define _MAIN_H_



/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * print_alphabet - prints alphabet
 *
 * Return: nothing
 *
 */

void print_alphabet(void);


/**
 *
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

void print_alphabet_x10(void);

/**
 *
 * _islower - checks if character is lower
 *
 *
 *@c: character to check
 *
 * Return: 0 or 1
 *
 */

int _islower(int c);

/**
 *
 * isalpha - checks is c is a letter
 *
 *@c: input to check
 *
 * Return: 0 or 1
 *
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of the number
 *
 * @n: the number to check
 *
 * Return: 0 or 1 or -1
 */

 int print_sign(int n);


 /**
 * _abs - returns the absolute value
 *
 * @n: the number to get the absolute value to it
 *
 * Return: 0 or positive number
 */

int _abs(int);
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */

int print_last_digit(int n);

/**
 * jack_bauer - main thing
 *
 */
void jack_bauer(void);

/**
 * times_table - times table function
 *
 */
void times_table(void);


/**
 * add - adding it up
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of both integers
 */
int add(int a, int b);



#endif

