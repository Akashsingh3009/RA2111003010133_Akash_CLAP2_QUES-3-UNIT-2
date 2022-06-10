#include <stdio.h>

int main() {
  int n,k=1,d;
  printf("enter n\n");
  scanf("%d",&n);
  while(n>0)
    {
    d=n%10;
      if(d==0)
        k=0;
      n/=10;
    }
  if(k==1)
  printf("good number");
  else
    printf("bad number");
  return 0;
}
