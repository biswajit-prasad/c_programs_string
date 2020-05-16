//program to reverse all words in a sentence at its place.

#include<stdio.h>
#include<string.h>

void rev(char**s, char**e, int len)
{
    char c;
    int i;
    for(i=0; i <len/2;i++)
    {
        c = **s;
        **s = **e;
        **e = c;
        (*s)++;
        (*e)--;
    }
}

void main()
{
    char str[20] = "India is great";
    int count=0;
    char ch, *temp,*temp1,*temp2;
    temp = str;

    while(*temp != '\0')
    {
        count=0;
        temp1 = temp;
        while((*temp != '\0') &&(*temp != ' '))
        {
             count++;
             temp++;
        }
        temp2 = temp-1;
        rev(&temp1,&temp2,count);
        if(*temp != '\0')
            temp++;
   }
   printf("final string = %s\n",str);
}
