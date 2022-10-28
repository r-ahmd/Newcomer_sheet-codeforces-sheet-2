#include <stdio.h>
 
int main() 
{
	int n, i, x, a=0;
  scanf("%d",&n);
  
  for(i=0; i<n; i++)
  {
    scanf("%d",&x);
    if(a<x)
      a=x;
  }
  printf("%d", a);
	
 
	return 0;
}
