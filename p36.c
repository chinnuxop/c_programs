//Find all the factors of a natural number
#include<stdio.h>
int main()
{
 int num,i;
 printf("Enter number: ");
 scanf("%d",&num);
 printf("factor of natural number is:");
 for ( i = 1; i <= num; i++)
 {
    if (num%i==0)
    {
        printf("%d,",i);
    }
    
 }
 
return 0;
}