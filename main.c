#include <stdio.h>
#include <stdlib.h>
int  mult (int *x);
int main()
{
int num ;
    printf("Enter number ");
    scanf("%d",&num);
    printf("%d",mult(&num));
    return 0;
}
int mult (int *x){
   int z= *x * 2;
   return z;
}
