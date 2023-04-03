#include<stdio.h>
#include<string.h>
void reverse(char []);
int main()
{
    char s[20];
    printf("Enter the string ");
    fgets(s,20,stdin);
    fflush;
    reverse(s);
}
void reverse(char s[20])
{ int j=strlen(s);
    int i;
    for(i=j-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
