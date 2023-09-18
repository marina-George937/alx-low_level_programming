#ifndef _MAIN_H_
#define _MAIN_H_


void reset_to_98(int *n);


/**
 * swap_int - swap two integers
 *
 * @a , b: two pointers to int
 */





void swap_int(int *a, int *b);

/**
 * _strlen - return the length of string
 *
 * @s: string to check
 */




int _strlen(char *s);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

void _puts(char *str);


/**
 * print_rev - print str in rev order
 *
 * @s: strint to rev
 */



void print_rev(char *s);


/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 */






void rev_string(char *s);

/**
 * puts2 - print characters of string
 *
 * @str: string
 */


void puts2(char *str);

void puts_half(char *str);

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src);










#endif
