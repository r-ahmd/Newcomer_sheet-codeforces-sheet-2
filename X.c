#include<stdio.h>
#include<math.h>
     
int main()
{
   int n, i;
  scanf("%d", &n);
  int num;
  
  for(i=0; i<n; i++)
    {
      scanf("%d", &num);
      int ones = 0;
      while(num>0)
        {
          if(num%2==1)
            ones++;
          num /=2;
        }
      int sum=0;
      for(int j=0; j<ones; j++)
        sum +=1 * pow(2,j);
      printf("%d\n", sum);
    }
   
   
   return 0;
}
