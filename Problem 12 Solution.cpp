/* C program that takes 3 numbers, ??, ?? and ?? as input and return the maximum amongst them */

#include <stdio.h>
int main ()
{
	int n1, n2, n3, max;
	printf ("Enter the number :");
	scanf ("%d %d %d", &n1, &n2, &n3);
	if (n1>=0 && n1<=100000 && n2>=0 && n2<=100000 && n3>=0 && n3<=100000)
	{
		max=((n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3)));
		printf ("%d", max);
	}
	else
	printf ("Out of range");
	return 0;
}
