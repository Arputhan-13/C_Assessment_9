#include<stdio.h>
int main()
{
    int a[50], b[50],c, d, e, f[51],i;
    printf("Enter the First 50 digit Number : ");
    for(i=0;i<50;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nEnter the Second 50 digit Number : ");
    for(i=0;i<50;i++)
    {
    scanf("%d",&b[i]);
    }
    c=0;
    for(i=49;i>=0;i--)
    {
    e=a[i]+b[i]+c;
    f[i+1]=e%10;
    c=e/10;
    }
    f[0]=c;
    printf("\nResult : ");
    for(i=0;i<51;i++)
    {
    printf("%d",f[i]);
    }
    return 0;
}