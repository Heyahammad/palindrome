#include<stdio.h>

int main()

{
    int n, sum, remainder, temporary;

    printf("Enter a number : ");
    scanf("%d", &n);
     
    sum = 0;
    temporary = n;

    while(temporary!=0)
    {
        remainder=temporary%10;
        sum= sum*10 + remainder;
        temporary = temporary/10;
    }

    if(sum==n)
    {
        printf("%d number is a palindrome.", n);
    }
    else
    {
        printf("%d number isn't a palindrome.", n);
    }
    return 0;
}