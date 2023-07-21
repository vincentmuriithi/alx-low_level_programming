/**
 * _isupper - Check if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    // ASCII values for uppercase letters range from 65 ('A') to 90 ('Z')
    // Check if the ASCII value of c falls within the uppercase range
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

