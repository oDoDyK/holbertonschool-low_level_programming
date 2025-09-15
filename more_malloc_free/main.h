#ifndef MAIN_H
#define MAIN_H

/* 0-malloc_checked.c */
void *malloc_checked(unsigned int b);

/* 1-string_nconcat.c */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* 2-calloc.c */
void *_calloc(unsigned int nmemb, unsigned int size);

/* 3-array_range.c */
int *array_range(int min, int max);

/* 100-realloc.c */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* 101-mul.c */
int _putchar(char c);
int _isdigit(char *s);
int _strlen(char *s);
void errors(void);
void multiply(char *num1, char *num2);

#endif /* MAIN_H */