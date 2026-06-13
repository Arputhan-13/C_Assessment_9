#include<stdio.h>
int main()
{
    int a[5];
    float y, f;
    printf("Enter the 5 Numbers : ");
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    scanf("%d",&a[3]);
    scanf("%d",&a[4]);
    y=a[0]+a[1]+a[2]+a[3]+a[4];
    f=y/5;
    printf("Average = %f",f);
}