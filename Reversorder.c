#include<stdio.h>
void printreverse(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printreverse( n);
    return 0;

}
void printreverse(int n)
{
    for(int i=n;i>0;i--)
    printf("%d",i );

}
