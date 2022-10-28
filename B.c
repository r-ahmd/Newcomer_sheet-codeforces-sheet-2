#include<stdio.h>
int main()
{
    int a,i,n=0;
    scanf("%d",&a);
  
    for(i=1;i<=a;i++)
    {
      if(i%2==0)
      {
        printf("%d\n",i);
        n++;
      }
    }
    if(n==0)
    {
      printf("-1\n");
    }
 
   
   return 0;
}
