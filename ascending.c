#include <stdio.h>
 
int main()
{
  int n,i,b[10];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&b[i]);
      if(b[i]!=i)
      {
          printf("%d",i);
      }
  }
   return 0;
}
