#include<stdio.h>
int main()
{
    int i, n;
  scanf("%d", &n);
  
  int t1 = 0, t2 = 1;
  if(n==1)
    printf("%d\n", t1);
  else if(n==2)
    printf("%d %d\n", t1, t2);
  else
    printf("%d %d ", t1, t2);
  
  
  for(i=2; i<n; i++)
  {
    int nextTerm = t1 + t2;
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
  }
 
   return 0;
}
