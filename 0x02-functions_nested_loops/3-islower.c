#include "main.h"
/**
 * _islower - function that checks for lowercase char
 *@c: the letter to be checked
 * Return: 1 for lowercase
 * 0 therwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
