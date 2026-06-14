#include<stdio.h>
int main()
{
    int a[1000],i, sum=0;
    printf("Enter the Number : ");
    i=0;
    while(1)
    {
    scanf("%d",&a[i]);
    if(a[i]==0)
    {
    break;
    }
    sum =sum +a[i];
    i++;
    }
    printf("\nTotal Numbers entered : %d",i);
    printf("\nSum of Numbers : %d ",sum);
}