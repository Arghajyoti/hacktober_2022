/* . Write a program that checks whether the given number π is divisible by the smallest prime or not and returns
the string βYESβ or βNOβ, without quotes(ββ) accordingly */

#include <stdio.h>
int main ()
{
	int a;
	scanf("%d" , &a);
	if(a%2 == 0){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}