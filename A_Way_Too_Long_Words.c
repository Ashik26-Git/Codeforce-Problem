#include<stdio.h>
#include<string.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      char s[100];
      int len;
      scanf("%s",s);
      len=strlen(s);
      if(len>10)
      {
         printf("%c%d%c\n",s[0],len-2,s[len-1]);
      }
      else
      printf("%s\n",s);
      
   }
   
 
}