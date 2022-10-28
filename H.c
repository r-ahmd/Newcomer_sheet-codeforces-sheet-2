#include <stdio.h>
 
int main()
{
	  int x,i,a=0;
    scanf("%d", &x);
    for(i=2;i<x;i++)
    {
	   if(x%i==0)
	   {
	     a++;
	   }
	 }
	 if(a==0)
	 {
	   printf("YES\n");
	 }
	 else
	 {
	   printf("NO\n");
	 }
	
 
	return 0;
}
