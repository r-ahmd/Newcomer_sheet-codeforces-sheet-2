#include<stdio.h>
int main()
{
   int n,i,E,O,P,N,x;
  E = O = P = N = 0//(zero);
  scanf("%d",&n);
  
  for(i=0; i<n; i++)
  {
      scanf("%d",&x);
      if(x%2==0)
      {
        E++;
      } 
      if(x%2!=0)
      {
        O++;
      }
      if(x>0)
      {
        P++;
      }
      if(x<0)
      {
        N++;
      }
  }
  printf("Even: %d\n", E);
  printf("Odd: %d\n", O);
  printf("Positive: %d\n", P);
  printf("Negative: %d\n", N);
   
   return 0;
}
