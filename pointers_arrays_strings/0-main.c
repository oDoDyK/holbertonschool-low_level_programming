#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)  /* كل 10 عناصر نحط مسافة */
        {
            printf(" ");
        }
        if (!(i % 10) && i) /* كل 10 عناصر ننزل سطر */
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]); /* نطبع القيمة بالهيكس */
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for _memset
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00}; /* مصفوفة حجمها 98 كلها مبدئياً 0x00 */

    /* طباعة المصفوفة قبل */
    simple_print_buffer(buffer, 98);

    /* استدعاء _memset لتغيير أول 95 بايت إلى 0x01 */
    _memset(buffer, 0x01, 95);

    printf("-------------------------------------------------\n");

    /* طباعة المصفوفة بعد */
    simple_print_buffer(buffer, 98);

    return (0);
}
