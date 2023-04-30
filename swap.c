#include<stdio.h>
 void swap(int* m,int* n)
 {
   int a=*m,b=*n;

    //  printf("%d %d \n",a,b);
    // *a=*a+*b;
    // *b=*a-*b;
    // *a=*a-*b;
  // printf("%d %d \n",a,b);
    a=a+b;
    b=a-b;
   a=a-b;
   //printf("%d %d",a,b);
   return;
 }
int main()
{
    int x,y;
    printf("enter a number of x is : ");
    scanf("%d",&x);
    printf("enter a number of y is : ");
    scanf("%d",&y);
  swap(&x,&y);
    printf("%d %d",x,y);
    
    return 0;
}