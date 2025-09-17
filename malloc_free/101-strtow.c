#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;

		if (str[i] == '\0')
			break;

		count++;

		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}
	return (count);
}

/**
 * copy_word - creates a word from str[start...end-1]
 * @str: source string
 * @start: starting index
 * @end: ending index (exclusive)
 *
 * Return: pointer to the new word, or NULL on failure
 */
char *copy_word(char *str, int start, int end)
{
	int j, word_len = end - start;
	char *word = malloc(sizeof(char) * (word_len + 1));

	if (word == NULL)
		return (NULL);

	for (j = 0; j < word_len; j++)
		word[j] = str[start + j];
	word[j] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, k = 0, start, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break;

		start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;

		words[k] = copy_word(str, start, i);
		if (words[k] == NULL)
		{
			while (k > 0)
				free(words[--k]);
			free(words);
			return (NULL);
		}
		k++;
	}
	words[k] = NULL;
	return (words);
}

