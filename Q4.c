#include<stdio.h>
void upper(char[]);
int main()
{
    char s[20];
    printf("Enter the string ");
    fgets(s,20,stdin);
    upper(s);
}
void upper(char s[20])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {s[i]=s[i]-32;}
    }
    printf("%s",s);
}
