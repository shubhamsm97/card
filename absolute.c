#include <stdio.h>
int main()
{
    int x;
printf("enter the value");
scanf("%d", &x);
if(x<0)
{
    x= (-1)*x;
    printf("the value of this is: %d",x);

}
else{

        printf("the absolute value of this is: %d",x);

}
    return 0;
}