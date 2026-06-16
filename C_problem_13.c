#include<stdio.h>
int main()
{
    int a[1000],i;
    printf("Enter the Number : ");
    i=0;
    while(1)
    {
    scanf("%d",&a[i]);
    if(a[i]==0)
    {
    break;
    }
    i++;
    }
    if(i==4 && a[0]==a[3])
    {
    printf("Success");
    }
    else
    {
    printf("Failure");
    }
}