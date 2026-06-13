#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the Number : ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nThe Same Number : ");
    for(i=0;i<5;i++)
    {
    printf("%d",a[i]);
    }
    printf("\nAfter Removing Odd Number : ");
    for(i=0;i<5;i++)
    {
    if(a[i]%2==0)
    {
    printf("%d",a[i]);
    }
    }
}    