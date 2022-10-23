/* C program that takes 2 numbers, ?? and ?? as input and return the minimum between them */

#include <stdio.h>
int main ()
{
	int n1, n2;
	printf ("Enter any two numbers :");
	scanf ("%d %d", &n1, &n2);
	if (n1 > n2) {
		printf ("The minimun number is = %d", n2);
	} else {
		printf ("The minimum number is = %d", n1);
	}
	return 0;
}
