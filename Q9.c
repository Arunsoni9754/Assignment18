#include<stdio.h>
#include<string.h>
int reverse(char []);
int reverse(char s[])
{int i,j,temp;
  int n=strlen(s)-1;
  for(i=n;i>=0;i--)
  {
    if(s[i-1]==' '||i==0)
    {
printf("%d",i);
      for(j=i;j<n+1;j++)
      {
        if(s[j]!=' '||j!=temp&&s[j]!='\0')
        {printf("%d%c",j,s[j]);}
      }
      printf(" ");
      temp=i;
    }
  }
  return 0;
}
int main()
{
  char s[50];
  printf("Enter the string");
  gets(s);
  reverse(s);
}
