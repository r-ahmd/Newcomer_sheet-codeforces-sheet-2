#include<stdio.h>
     
    int main()
    {
       int lines;
  scanf("%d", &lines); 
  int spaces = lines-1; 
  for(int i=1; i<=lines; i++)
    {
      for(int j=1; j<=spaces; j++) 
        printf(" ");
      for(int k=1; k<i*2; k++) 
        printf("*");
      printf("\n");
      spaces--;
    }
  spaces = 1;
  for(int i=lines; i>=1; i--)
    { 
      for(int j=1; j<spaces; j++) 
        printf(" ");
      for(int k=i*2; k>1; k--) 
        printf("*");
      printf("\n");
      spaces++;
    }
     
     
        return 0;
     
    }
