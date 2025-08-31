#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    int i, sum = 0, n;
    char password[100]; /* Array to hold the generated password */

    srand(time(NULL));

    /* Generate random characters until sum reaches 2772 */
    for (i = 0; sum < 2772 - 122; i++)
    {
        n = 33 + rand() % 94; /* Printable ASCII characters (33 to 126) */
        password[i] = n;
        sum += n;
    }

    /* Fill the last character to reach exact sum 2772 */
    password[i] = 2772 - sum;
    password[i + 1] = '\0'; /* Null-terminate the string */

    printf("%s", password);

    return (0);
}
