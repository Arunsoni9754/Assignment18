#include<stdio.h>
#include<string.h>
void compare(char [],char []);
int main()
{
    char s[20],a[20];
    printf("Enter the string ");
    fgets(s,20,stdin);
    fgets(a,20,stdin);

    fflush;
    compare(s,a);
}
void compare(char s[20],char a[20])
{
    int i=0,l=1;
    while(s[i]!='\0'||a[i]!='\0')
    {
        if(s[i]!=a[i])
        {l=0;
        break;}
        i++;
    }
    if(l==1)
    printf("The strings are  equal");
    else 
    {
        printf("The strings are  not equal");
    }
}
