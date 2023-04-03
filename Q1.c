#include<stdio.h>
#include<string.h>
void length(char []);
int main()
{
    char s[20];
    printf("Enter the string ");
    fgets(s,20,stdin);
    fflush;
    length(s);
}
void length(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    printf("%d",i-1);
    
    
}
