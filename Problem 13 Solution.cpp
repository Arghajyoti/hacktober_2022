/* C program that takes 3 angles, ð¼, ð½ and ð¾ as input and check whether they correspond in forming a triangle and returns the string âYESâ or âNOâ without quotes accordingly */

#include <stdio.h>
int main ()
{
	int a, b, c;
	printf ("Enter three angles :");
	scanf ("%d %d %d", &a, &b, &c);
	if (a>0 && a<180 && b>0 && b<180 && c>0 && c<180 && a+b+c==180)
	printf ("YES");
	else
	printf ("NO");
	return 0;
}
