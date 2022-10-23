/* C program that takes, ?? and ?? as input from the user, and gives the depth of descent as output */

#include <stdio.h>
int main ()
{
	int v, g, h;
	printf ("Enter the gravity, g :");
	scanf ("%d", &g);
	printf ("Enter the velocity, v :");
	scanf ("%d", &v);
	if (v>=1000 && v<=3000 && g>=1 && g<=10 && (v*v)%g==0)
	{
		h=(v*v)/(2*g);
		printf ("%d", h);
	}
	else
	printf ("Out of range");
	return 0;
}
