/* C program that takes 3 lengths, π, π and π as input and check whether they correspond in forming a
triangle and returns the string βYESβ or βNOβ without quotes accordingly */

#include <stdio.h>
int main ()
{
	int a, b, c;
	printf ("Enter three lengths:");
	scanf ("%d %d %d", &a, &b, &c);
	if (a>=0 && a<=100000 && b>=0 && b<=100000 && c>=0 && c<=100000)
	{
		if (a+b>c && a+c>b && b+c>a)
		printf ("YES");
		else
		printf ("NO");
	}
	else
	printf ("Out of range");
	return 0;
}