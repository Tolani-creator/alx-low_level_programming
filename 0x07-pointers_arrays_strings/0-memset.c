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

#include "main.h"



/**

 * _memset - fills a memory block with a constant byte

 * @s: address to memory block

 * @b: char to be used

 * @n: number of bytes to be used

 *

 * Return: pointer to the memory block

 */



char *_memset(char *s, char b, unsigned int n)

{

	while (n)

	{

		s[n - 1] = b;

		n--;

	}

	return (s);

}
