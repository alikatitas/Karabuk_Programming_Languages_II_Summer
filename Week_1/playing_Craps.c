//PLAYING CRAPS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Durum{
Devam, Kaybetti, Kazandi
};

int zarAtma(){

int zar1, zar2, toplamZar;

zar1=1+(rand()%6);
zar2=1+(rand()%6);
toplamZar=zar1+zar2;

printf("Oyuncunun attigi 1.zar=%d, 2.zar=%d. Zarlarin toplami=%d\n",zar1,zar2,toplamZar);

return toplamZar;

}
int main(void){

int toplam,puan;

enum Durum d;
//srand function for using variable process. Use time.h library
srand(time(NULL));
//use zarAtma function
toplam=zarAtma();
//control toplam
switch(toplam){
case 7:
case 11:
d=Kazandi;
break;

case 2:
case 3:
case 12:
d=Kaybetti;
break;

default:
d=Devam;
puan=toplam;
printf("Puaniniz : %d\n",puan);
break;
}

while(d == Devam){
toplam=zarAtma();
if(toplam == puan){
d=Kazandi;
}else if(toplam==7){
d=Kaybetti;

}
}

if(d == Kazandi){
printf("Oyuncu Kazandi");
}
else{
printf("Oyuncu Kaybetti");
}

return 0;
}
