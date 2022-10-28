#include <stdio.h>
 
int main() 
{
	int n, a, r, sum=0;
  scanf("%d", &n);
  a = n;
  
  while(a!=0)
  {
    r = a % 10;
    sum = sum * 10 + r;
    a = a / 10;
  }
  if(n==sum)
  {
    printf("%d\n",sum);
    printf("YES\n");
  }
  else
  {
    printf("%d\n", sum);
    printf("NO\n");
 
  }
	
 
	return 0;
}
