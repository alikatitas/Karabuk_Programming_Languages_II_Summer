#include <string.h>
#include <stdlib.h> 
#include <stdio.h>

int fact(int n){
  if(n==0)
    return 1;
  else
    return fact(n-1)*n;
}
int fibo(int n){
if (n == 0 || n == 1)
return n;
else
return fibo(n - 1) + fibo(n - 2);
}
int power(int x,int y){
  if(y==0){
    return 1;
  }
  else{
    return x*power(x,y-1);
  }
}
void hanoi(int i,int a,int d){
  if(a==0){
    }
  else{
    if(a==d){
    a=1;
    }
    hanoi(i+1,a-1,d);
   printf("\n");
  }
  if(a==1){
    a=0;
    i=0;
  }
  for(int b=0;b<i;b++){
    printf(" ");
  }
  for(int c=1;c<=a;c++){
    printf("-");
  }
  for(int c=1;c<=a;c++){
    printf("-");
  }
  for(int b=0;b<i;b++){
    printf(" ");
  }
}

float sum(float n){
  if(n==1){
    return 1;
  }
  else{
    return 1/n+sum(n-1);
  }
}
float sum2(float n){
  if(n==1){
    return 1;
  }
  else{
    return n/(n+1)+sum(n-1);
  }
}
void printrev(char *p)
{
if(*p!='\0')
printrev(p+1);
  
printf("%c",*p);   
}
  
int max(int arr[],int n){
  int x;
  if(n==1)
    return arr[0];
  else
    x=max(arr,n-1);
    if(x>arr[n-1])
      return x;
    else 
      return arr[n-1];
}
void reverseDisplay(int value)
{

  if(value!=0)
  {
    printf("%d",value%10);
    reverseDisplay(value/10);
  }
}



int main(void) {
int f=6;
int c=3;
float n=4;
int dizi[]={4,8,2,5};
int num=27213564;
char s[]="2134";
char per[]="abc";
int factr=fact(f);
  printf("%d\n",factr);
  printf("%d\n",fibo(f));
  printf("%d\n",power(f,3));
  printf("%.2f\n",sum(n));
  printf("%.2f\n",sum2(n));
  printrev(s);
  printf("\n");
  reverseDisplay(num);
  printf("\n");
  int maximum=max(dizi,4);
  printf("the biggest number in the array is: %d\n",maximum);
  int i=0,a=6,d=3;
  f=d;
  while(f!=0){
  for(int b=1;b<=6;b++){
    printf(" ");
  }
  printf("|\n");
  f--;
}
hanoi(i,a,d);

  
  return 0;
}

