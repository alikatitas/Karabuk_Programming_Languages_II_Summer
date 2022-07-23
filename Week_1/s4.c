/*
Output:
fonk() id degisken degeri : 1
fonk() id degisken degeri : 22
fonk_sta() id degisken degeri : 1
fonk_sta() id degisken degeri : 22

fonk() id degisken degeri : 1
fonk() id degisken degeri : 22
fonk_sta() id degisken degeri : 22
fonk_sta() id degisken degeri : 43

*/

#include <stdio.h>

void fonk(void);
void fonk_sta(void);

int main(void) {
	fonk(); /*
			fonk() id degisken degeri : 1
			fonk() id degisken degeri : 22
			*/
	fonk_sta(); /*
					 fonk_sta() id degisken degeri : 1
					 fonk_sta() id degisken degeri : 22
					 */

	printf("\n"); // Bir satir Enter ile asagi satira kaydirilmistir

	fonk();/*
			fonk() id degisken degeri : 1
			fonk() id degisken degeri : 22
			*/
	fonk_sta();/*
					  BURADA FONKSIYON IKINCI KERE CALISTIGI ICIN STATIC OLARAK HAFIZADA KAYITLI DEGERI OKUR
					 fonk_sta() id degisken degeri : 22
					 fonk_sta() id degisken degeri : 43
					 */
	return 0;
}

void fonk(void) {
	int id = 1;
	printf("fonk() id degisken degeri : %d\n", id);
	id = id + 21;
	printf("fonk() id degisken degeri : %d\n", id);
}

void fonk_sta(void) {
	
	static int id = 1;
	
	printf("fonk_sta() id degisken degeri : %d\n", id);
	id = id + 21;
	printf("fonk_sta() id degisken degeri : %d\n", id);
}
