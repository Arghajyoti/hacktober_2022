/* C program that checks whether the given number π is even or not and returns the string βYESβ or βNOβ without quotes accordingly */

#include <stdio.h>
int main ()
{
	int n;
	printf ("Enter a number, n:");
	scanf ("%d", &n);
	if (n>=0 && n<=1000)
	{
		if (n%2==0)
		printf ("YES");
		else
		printf ("NO");
	}
	else
	printf ("Out of range");
	return 0;
}