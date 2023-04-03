#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count(char []);
int count(char s[])
{
    int i,c=0;
    int j;
    j=strlen(s);
    for(i=0;i<j;i++)
    {        
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);


}
int main()
{
    char s[50];
    printf("Enter the string");
gets(s);
    count(s);
}
