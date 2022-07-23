/*
Output:
deneme1.c gid degisken degeri : 287
deneme2.c gid degisken degeri : 287
*/
//deneme1.c
#include <stdio.h>

void fonk(void);

int gid = 287; // global int degisken tanımlamasi

int main(void) {
	printf("deneme1.c gid degisken degeri : %d\n", gid); // gid global degiskenini okur

	fonk(); // fonksiyonda tanimli deneme2.c her ne kadar extern olsa da gid global degisken degerini deneme2.c dosyasina atar
	return 0;
}

//deneme2.c
extern int gid; 

void fonk(void) {
	printf("deneme2.c gid degisken degeri : %d", gid);
}
