#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 0;
	int target_sum = 2772; /* Assumed target sum for 101-crackme */
	int len = 15; /* Arbitrary length, adjustable */
	char password[16]; /* Buffer for password + null terminator */
	int tmp;

	/* Seed random number generator */
	srand(time(NULL));

	/* Generate random characters until close to target sum */
	for (i = 0; i < len - 1; i++)
	{
		password[i] = 33 + (rand() % 94); /* Printable ASCII: 33 to 126 */
		sum += password[i];
	}

	/* Adjust last character to meet target sum */
	tmp = target_sum - sum;
	if (tmp >= 33 && tmp <= 126)
	{
		password[i] = tmp;
	}
	else
	{
		/* If last char is out of range, adjust earlier char */
		password[i - 1] -= (tmp - 126);
		password[i] = 126; /* Use max ASCII value */
	}
	password[len] = '\0';

	/* Print the password */
	printf("%s", password);

	return (0);
}
