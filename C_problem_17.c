#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the First 50 digit Number : ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=4;i>0;i--)
    {
    a[i-1]=a[i-1]+a[i]/10;
    a[i]= a[i]%10;
    }
    printf("\nResult : ");
    for(i=0;i<5;i++)
    {
    printf("%d",a[i]);
    }
    return 0;
}