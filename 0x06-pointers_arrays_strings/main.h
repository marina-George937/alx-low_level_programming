#ifndef _MAIN_H_
#define _MAIN_H_



/**
 * _strcat - string concatenate
 *
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to char
 */



char *_strcat(char *dest, char *src);


/**
 * _strncat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - string copy
 *
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: pointer to char
 */


char *_strncpy(char *dest, char *src, int n);


/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2);

/**
 * string_toupper - uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s);
#endif
