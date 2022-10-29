#include<stdio.h>
int main()
{
   int s, e;
  scanf("%d %d", &s, &e);
  int count=0;
  for(int i=0; i<=s; i++)
    {
      for(int j=0; j<=s; j++)
        {
          if(e-i-j>=0 && e-i-j <=s)
            count++;
        }
    }
  printf("%d\n", count);
 
   return 0;
}
