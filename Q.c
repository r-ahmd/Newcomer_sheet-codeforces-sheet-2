#include<stdio.h>
#include<stdlib.h>
 
int main()
{
   int n,m,i,testCase;
    int x;
    scanf("%d",&testCase);
    for(i=0;i<testCase;i++)
    {
      scanf("%d",&x);
      n = x;
      if(n/1==0)
      {
        printf("%d",x);
         printf("\n");
      }
      else
      {
          while(n!=0)
          {
          m=n%10;
          n=n/10;
          printf("%d ",m);
          }
 
        printf("\n");
      }
    }
 
 
    return 0;
}
