#include<stdio.h>
int main()
{ 
     int i,number,even_sum = 0,odd_sum = 0;
     printf("enter the maximum value");
     scanf("%d",&number);
     for(i=0;i<=number;i++)
     {
        if(i%2==0)
        {
            even_sum = even_sum + i;
        }
        else 
        {
            odd_sum = odd_sum + i;
        }
     }
     printf("\n the sum of even number upto %d = %d",number,even_sum);
     printf("\n the sum of odd number upto %d = %d",number,odd_sum);
}