#include<stdio.h>
void display(char[],char[]);
void main()
{
    char str1[]="jenny";
    char str2[]="khatri";
    display(str1,str2);
}
void display(char str1[],char str2[])
{   
    int i,length=0;
    for(i=0;i<5;i++)
    {
       length=length+1;
    }
    printf("length of string is %d\n",length);
    str2[1]='k';
    printf("%s %s",str1,str2);
} 