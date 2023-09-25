#ifndef _MAIN_H_
#define _MAIN_H_



/**
 * _memset: set memory
 *
 * @s: pointer to vhar
 * @b: char
 * @n: int number
 *
 * Return: pointer to char
 */


char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: n amount of times
 * Return: return the string value
 */




char *_memcpy(char *dest, char *src, unsigned int n);

#include "main.h"
/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_strchr(char *s, char c);

/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept);


/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle);

#endif
