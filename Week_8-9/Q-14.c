#include <stdio.h>

typedef struct complex{
	float real;
	float image;
}complex;

complex funk(complex sayi1, complex sayi2){
	complex temp;
	temp.real = sayi1.real + sayi2.real;
	temp.image = sayi1.image + sayi2.image;
	return temp;
}

int main(void){

	complex s1, s2, value;
	
	printf("Ilk Komplex sayinin Real ve Image Bölümü : \n ");
   	scanf("%f %f", &s1.real, &s2.image);
   	printf("Ikinci Komplex sayinin Real ve Image Bölümü : \n ");
   	scanf("%f %f", &s2.real, &s2.image);
   	value= funk(s1, s2);
   	printf("Sonuç = %f + %f", value.real, value.image);
   	return 0;
	
	return 0;
}

