#include "main.h"

/**
 * _isalpha - checks for alpabetic character
 * @c: the characterto to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
