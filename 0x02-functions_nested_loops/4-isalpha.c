#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is a character lower case or upper case and returns 0 if not.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
