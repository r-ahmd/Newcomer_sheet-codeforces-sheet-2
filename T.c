#include <stdio.h>
 
int main()
{
    int lines;
  scanf("%d", &lines); //4
  int blankspaces = lines-1; //3
  for(int i=1; i<=lines; i++)
    {
      for(int j=1; j<=blankspaces; j++) //j=1; j<2
        printf(" ");
      for(int k=1; k<i*2; k++) //k=1 ; k<6; k= 1 2 3 4 5
        printf("*");
      
      blankspaces--;
      printf("\n");
    }
 
    return 0;
}
