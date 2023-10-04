#ifndef _MAIN_H_
#define _MAIN_H_


/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with?
 * Return: char value
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str);

/**
 * helper - helps function
 * @word: wordcount
 * @len: length
 * @str: string to go through
 * @s: array you are assigning
 * Return: char value
 */
char **helper(int word, int len, char *str, char **s);


#endif
