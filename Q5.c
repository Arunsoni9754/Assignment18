#include<stdio.h>
void lower(char[]);
int main()
{
    char s[20];
    printf("Enter the string ");
    fgets(s,20,stdin);
    lower(s);
}
void lower(char s[20])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&& s[i]<='Z')
        {s[i]=s[i]+32;}
    }
    printf("%s",s);
}
