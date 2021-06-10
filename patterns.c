#include <stdio.h>
#include <cs50.h>

int main(void)   {

   int pattern=get_int("Enter type of pattern (1 or 2) ");
   
   if(pattern==1)  {
   int row=get_int("Number of rows ");
   
   for(int i=row;i>=1;i--)  {
      for(int col=1;col<=i;col++){
      printf("#");
      }
      printf("\n");
   }
  }
   else if (pattern==2) {
   int row=get_int("Number of rows ");
   
   
   for(int i=row;i>=1;i--)  {
      for(int col=1;col<=row;col++)  {
      if(col>i-1) {
      printf("#");
      }else {
      printf (" ");
      }
    
      
      
      
      }
      printf("\n");
   }
   
   }
  
}  
