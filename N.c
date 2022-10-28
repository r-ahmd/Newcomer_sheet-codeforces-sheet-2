#include <stdio.h>
int main()
{
   int n,x,i,j;
   char symble;
   scanf("%c",&symble);
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
    {
       scanf("%d ",&x);
       for(j=1;j<=x;j++)
         printf("%c",symble);
       printf("\n");
    }
   
   return 0;
}
