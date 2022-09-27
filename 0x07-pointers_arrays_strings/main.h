main.h.txt

Who has access

A

System properties

Type

Text

Size

511 bytes

Storage used

511 bytes

Location

0x07. C - Even more pointers, arrays and strings

Owner

Antony Bahati

Modified

26 Sept 2022 by Antony Bahati

Opened

00:07 by me

Created

27 Sept 2022

No description

Viewers can download

#ifndef MAIN_H

#define MAIN_H



/**

* void prototypes()

* int prototypes()

*/



int _putchar(char);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);



#endif /*MAIN_H*/
