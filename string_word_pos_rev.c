//Program to reverse the position of each word in a sentense

#include<stdio.h>
#include<string.h>

void main()
{
    char str[20] = " India is Great";
    char dest[20];
    char c, *temp,*temp1,*tp,*tp1;
    int count = 0, len,i;
    temp = str;
    temp1 = dest;
    len = strlen(temp) -1;
    tp = temp +len;
    while((len-1) > 0)
    {
        count = 0;
        while(*tp != ' ')
        {
            tp--;
            count++;
            len--;
        }
        tp1 = tp + 1;
        for(i =0; i<count;i++)
        {
            *temp1 = *tp1;
            tp1++;
            temp1++;
        }
        *temp1 = ' ';
        temp1++;
        if(len >= 0)
        {
            len --;
            tp--;
        }
    }
    *temp1 = '\0';
    printf("output =%s\n",dest);
}
    
    

    
