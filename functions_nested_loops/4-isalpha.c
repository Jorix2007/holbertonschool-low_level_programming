#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
    /* Проверяем диапазон маленьких букв ИЛИ больших букв */
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    
    return (0);
}
