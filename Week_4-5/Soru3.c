#include <stdio.h>

int fun(int n)
{
 if (n == 4)
 return n;
 else 
 return 2*fun(n+1);
}

// n=2 için ; 2*fun(3) => 2*2*fun(4) =>2*2*4 =16




 int main()
{
 printf("%d ", fun(2));
 return 0;
}

