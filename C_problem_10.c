#include <stdio.h>
int main()
{
    int a[5],i,b, j;
    printf("Enter the 5 Numbers : ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nThe Original Number : ");
    for(i=0;i<5;i++)
    {
    printf("%d",a[i]);
    }
    printf("\nAfter Removing Prime Numbers : ");
    for(i=0;i<5;i++)
    {
    b=0;
    for(j=1;j<=a[i];j++)
    {
    if(a[i]%j==0)
    {
    b=b+1;
    }
    }
    if(b!=2)
    {
    printf("%d",a[i]);
    }
    }
    return 0;
}