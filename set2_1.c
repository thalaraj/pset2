#include <stdio.h>

int main() 
{
  char a[20];
  scanf("%c",a);
  if(a[0]=='s' || a[0]=='S')
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
return 0;
}
