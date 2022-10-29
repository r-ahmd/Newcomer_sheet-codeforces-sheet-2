#include <stdio.h>
 
int main()
{
   int n,a,b; //range = a,b
  scanf("%d %d %d", &n, &a, &b) ;
  int sum=0;
  for( int i=1;i<=n;i++)
  {
    int  temp;
    int m, s=0;
    temp = i;
    while(temp!=0)
    {
      m = temp%10;
      s = s+m;
      temp= temp/10;
    }
    if(s>=a && s<=b)
    {
      sum +=i;
    }
  }
 
  printf("%d\n", sum);
 
    return 0;
}
