#include <stdio.h>

// complex isimli struct tanmlandi, real ve imag field lari var
typedef struct Complex{
	float real;
	float imag;
}complex;

//addNumbers fonksiyonunda c1 ce c2 nin real alanlari ile imag alanlari result degiskeninin real ve imag alanlarina atandi
void addNumbers(complex c1, complex c2, complex *result){ //1.2 + 3.4 = 4.6 (real = 4.0 ve imag=6.0) gibi bir sonuc bekleniyor
	result->real =c1.real + c2.real;
	result->imag =c1.imag + c2.imag;
}
int main(void){
	
	complex c1,c2,result; //c1, c2 ve result struct degiskenleri olusturuldu
	
	printf("For first number \n");
	printf("Enter real part : ");
	scanf("%f",&c1.real); // c1 in real alani alindi
	
	printf("Enter imaginary part :");
	scanf("%f",&c1.imag); // c1 in imag alani alindi
	
	printf("For second number \n");
	printf("Enter real part : ");
	scanf("%f",&c2.real); // c2 nin real alani alindi
	
	printf("Enter imaginary part :");
	scanf("%f",&c2.imag); //// c2 nin imag alani alindi
	
	addNumbers(c1,c2,&result); // fonksiyona parametre olarak gonderildi
	printf("\nresult real = %.1f\n",result.real);
	printf("result.imag = %.1f",result.imag);
	
/*For first number
Enter real part : 1
Enter imaginary part :2
For second number
Enter real part : 3
Enter imaginary part :4

result real = 4.0
result.imag = 6.0*/

	return 0;
}
