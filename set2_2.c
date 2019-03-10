#include <stdio.h>
#include<string.h> 
int main()
{
  int i,l;
  char a[100];
  scanf("%s",a);
  l=strlen(a);
  for(i=l-1;i>=0;i--)
  {
    if(a[i]!='a' && a[i]!='A' && a[i]!='e' && a[i]!='E' && a[i]!='i' && a[i]!='I' && a[i]!='o' && a[i]!='O' && a[i]!='u' && a[i]!='U')
    {
      printf("%c",a[i]);
    }
  }
  return 0;
}
