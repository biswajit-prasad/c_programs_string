//Program to insert new digit to a number in such way that the resulted number is the largest number possible

#include<stdio.h>

void main()
{
    long int num = 61234;
    int dg = 0;
    int rem = 0,count = 1;
    long int temp,temp1=0,temp2;
    temp = num;

    printf("enter the digit you want to enter\n");
    scanf("%d",&dg);
    printf("entered number and digit are %ld and %d\n",num,dg);
 
    while(temp)
    {
        rem = temp%10;
        count = count*10;
        temp = temp/10;
    }
    temp = num;

    while(1)
    {
        if((temp == 0) || (temp/(count/10)) < dg)
        {
            temp = (dg*count)+temp;
            temp1 = temp1+temp; 
            break;
        }
        else
        {
            temp2 = (temp/(count/10));
            temp1 += temp2*count;
            temp = temp%(count/10);
            count = count/10;            
        }
    }
        printf("resulted number = %ld \n",temp1);
}
        


