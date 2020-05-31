//program to replace any word in a sentence
#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "India is great";
    char str1[20];
    char str2[20];
    char *temp;
    char *p,*q;
    int found=0,len,count=0,pos=0;

    len = strlen(str)-1;
    printf("eneter the string to replace\n");
    scanf("%s",str1);
    printf("Enter the string to be replaced with\n");
    scanf("%s",str2);
    temp =str;

    while(*temp != '\0')
    {
        while(*temp != ' ')
        {
             
 
    
