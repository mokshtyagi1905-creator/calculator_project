#include <stdio.h>

int main(){
    int x,y;
    char op;

    printf("type the first number");
    scanf("%d", &x);
    
    printf("type the second number");
    scanf("%d", &y);

    printf("type the operation from +,-,*,/");
    scanf(" %c", &op);

    switch(op){
       case'+':
          printf("sum is %d", x+y);
          break;
        
       case'-':
          printf("substraction is %d", x-y);
          break;
          
       case'*':
          printf("multiplication is %d", x*y);
          break;  
          
       case'/':
          if(y!=0)
           printf("division is %d", x/y);
          else
           printf("cannot be divided by zero");
          break;
          
       default:
        printf("wrong operator choosen");    
    }

    return 0;

}