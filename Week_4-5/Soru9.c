#include<stdio.h>
char f1(int b);
main()
{
 char a;
 a=f1(10);
 printf("%c",a);
}

char f1(int b) //1. b=10 2.b=9 3.b=a => INFINITIVE
{
printf("a"); 
 if(b<=8)
 return 'a';
 else
 {
 printf("a");
 f1(b--); //1. b=9 2. b=8
 }
}
