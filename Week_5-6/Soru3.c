#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	char *cumle = (char *)malloc(50*sizeof(char));
	
	char rev[50];

	printf("Cumleyi giriniz : \n");
	gets(cumle);
	
	int i,sayac=strlen(*cumle);
	
	for(i=0;i<sayac;i++){
		sayac--,
		rev[sayac] = *(cumle+i);
		if(sayac != '\0'){
			printf("%s",rev[sayac]);
		}
	}

	free(*cumle);
	
	return 0;
}
