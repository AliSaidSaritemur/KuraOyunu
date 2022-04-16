#include <stdio.h>
#include "Kisi.h"
#include "Oyun.h"
#include "Dosya.h"
#include <Windows.h>
#include <stdlib.h>
int main() {


	
struct Kisi enkucuk =kisiYazdir();

	struct Kisi enbuyuk = EnbuyukBul(enkucuk);
	int tur = 1;
	float masadakiPara=0;	
	struct Oyun oyun = kuradakiSayi();

	struct Oyun* next = &oyun;
	
	while(next->sonraki != NULL){	
	
		system("cls");
		struct Kisi kok = { "asdads",12,120,210 };

kok.sonraki = &enkucuk;

*next =masadakiPArayiBul(kok, *next);
printf("                            #########################################################\n");
printf("			    ##		        SANSLI SAYI: %d			   ##\n", next->kuradakiSayi);
printf("                            #########################################################\n");
printf("                            #########################################################\n");
printf("			    ##			   TUR: %d			   ##\n",tur);
printf("			    ##		        MASA BAKIYE: %.0f TL   	   ##\n", next->masadakiPAra);
printf("			    ##-----------------------------------------------------##\n");
printf("			    ##			EN ZENGIN KISI			   ##\n");
printf("			    ##		        %s			   ##\n", EnbuyukBul(enkucuk).adSoyad);
printf("			    ##		    BAKIYESI: %.0f			   ##\n", EnbuyukBul(enkucuk).mevcutPara);
printf("                            #########################################################\n");

if (enkucuk.mevcutPara == -1){
	tur++;
	break;
}
next = next->sonraki;
Sleep(9000);
tur++;
	}
	system("cls");
	printf("                            #########################################################\n");
	printf("			    ##			   TUR: %d			   ##\n", tur);
	printf("			    ##		        MASA BAKIYE: %.2f TL   	   ##\n", next->masadakiPAra);
	printf("			    ##		        	 			   ##\n");
	printf("			    ##-----------------------------------------------------##\n");
	printf("			    ##			OYUN BITTI			   ##\n");
	printf("			    ##		        	 			   ##\n");
	printf("			    ##		        	 			   ##\n");
	printf("			    ##		        	 			   ##\n");
	printf("                            #########################################################\n");
	
	system("Pause");
};