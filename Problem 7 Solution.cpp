 /* C program that inputs a character š from the keyboard and then outputs a large block letter āCā composed of that character */

#include <stdio.h>
int main ()
{
	char c;
	int i;
	printf ("Enter a character:");
	scanf ("%c", &c);
	if (c>= 'A' && c<= 'z')
	{
		printf (" %c %c %c", c, c, c);
		printf ("\n%c     %c", c, c);
		printf ("\n");
		for (i=1; i<=5; i++)
		{
			printf ("%c\n", c);
		}
		printf ("%c     %c", c, c);
		printf ("\n %c %c %c", c, c, c);
	}
	else
	printf("Out of range");
	return 0;
}
