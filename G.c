#include<stdio.h>
 
int main()
{
   int x;
    scanf("%d", &x);
    while(x--)
    {
      long long int fact=1;
      int n,i;
      scanf("%d", &n);

      for(i=1;i<=n;i++)
      {
        fact=fact*i;
      }
      printf("%lld\n", fact); 
    }
   
   return 0;
}
