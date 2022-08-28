#include <stdio.h>
#include <string.h>

struct player{
	char pname[20];
} p1; //p1 isminde struct olusturulmus

char *play (struct player *temp_p1){ // play fonksiyonunda temp_p1 parametresi ile structin pname degerine Kohli atanarak return edilmis
	strcpy(temp_p1->pname, "Kohli"); //Kohli degeri temp degiskenine gonderilmis
	return temp_p1->pname; 
}

int main(void){
	strcpy(p1.pname,"Dhoni"); // struct p1 deðerine Dhoni degeri gelmis ancak p1 in tempte degeri Kohli dir
	printf("%s %s",p1.pname,play(&p1)); // p1 in Kohli degeri ile fonksiyondan gelen Kohli degerleri ekrana yazdirilmis
	
return 0;
}


