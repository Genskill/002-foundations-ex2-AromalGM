#include <stdio.h>
#include <cs50.h>

int main(void)  {

   int a=get_int("Side 1 ");
   int b=get_int("Side 2 ");
   int c=get_int("Side 3 ");
   int largest;
   int A;
   int B;
   if(a>b) {
     if(a>c) {
     largest=a;
     A=b;
     B=c;
     }else if (c>a){
     largest=c;
     A=a;
     B=b;
     } 
    }else if(b>a){
         if(b>c) {
         largest=b;
         A=a;
         B=c;
         }else if(c>b) {
    largest=c;
    A=a;
    B=b;
    }
  }  
    int x=A*A;
    int y=B*B;
 
   
    if(x+y ==(largest*largest)){
    printf("Yes\n");
   }else {
    printf("No\n");
   }
  
}
