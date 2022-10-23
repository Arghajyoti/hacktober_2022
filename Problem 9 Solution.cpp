/* C program that takes your name as input prints “Hello ” followed by your name */

#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name :");
    scanf("%s", name); //input of name
    printf("\n Hello %s",name); 
    return 0;
}
