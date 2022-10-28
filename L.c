#include<stdio.h>
int main()
{
   int n1,n2;
    int rem,gcd;
    scanf("%d %d", &n1, &n2);
 
    while(n2!=0)
    {
       rem = n1%n2;
       n1 = n2; // n1 is equal to n2
       n2 = rem; // n2 is equal to remaining
    }
    gcd=n1; // n1 is equal to remaining
    printf("%d\n", gcd);
 
   
   return 0;
}
