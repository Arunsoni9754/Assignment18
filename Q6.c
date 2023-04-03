#include<stdio.h>
#include<string.h>
int alpha(char []);
int main()
{
    int i;
    char s[20];
    printf("Enter any string");
    fgets(s,20,stdin);
    i=alpha(s);
    if(i==1)
    {
        printf("The string is alpha numeric");
    }
    else
    printf("The string is not alpha numeric");
}
int alpha(char s[20])
{
    int i=0;
    while(s[i]!='\0')
    {
        if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')&&(s[i]>='0'&&s[i]<='9')))
    {
        int p=1;
        return p;
        }
            i++;
    }
}
