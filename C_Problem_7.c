#include <stdio.h>
int main()
{
    int a[5];
    int i,j, m;
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
    for(i=0;i<5;i++)
    {
    for(j=i+1;j<5;j++)
    {
    if(a[i]>a[j])
    {
    m=a[i];
    a[i]=a[j];
    a[j]=m;
    }
    }
    }
    printf("\nDescending order : ");
    for(i=4;i>=0;i--)
    {
    printf("%d",a[i]);
    }
}