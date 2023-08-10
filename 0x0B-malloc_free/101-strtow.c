#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int word_count(char *str)
{
    int count = 0;
    bool in_word = false;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            in_word = false;
        }
        else if (!in_word)
        {
            in_word = true;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int total_words = word_count(str);
    
    if (total_words == 0)
        return NULL;

    char **words = (char **)malloc((total_words + 1) * sizeof(char *));
    
    if (words == NULL)
        return NULL;

    int word_index = 0;
    bool in_word = false;
    char *start = str;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            if (in_word)
            {
                int word_length = str - start;
                
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                
		if (words[word_index] == NULL)
                {
                    for (int i = 0; i < word_index; i++)
                        free(words[i]);
                    free(words);
                    return NULL;
                }

                for (int i = 0; i < word_length; i++)
                    words[word_index][i] = start[i];
                words[word_index][word_length] = '\0';

                in_word = false;
                word_index++;
            }
        }
        else if (!in_word)
        {
            in_word = true;
            start = str;
        }
        str++;
    }

    if (in_word)
    {
        int word_length = str - start;

        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        
	if (words[word_index] == NULL)
        {
            for (int i = 0; i <= word_index; i++)
                free(words[i]);
            free(words);
            return NULL;
        }

        for (int i = 0; i < word_length; i++)
            words[word_index][i] = start[i];
        words[word_index][word_length] = '\0';

        word_index++;
    }

    words[word_index] = NULL;

    return words;
}
