#include <stdio.h>
#include "Kisi.h"
#include "Oyun.h"
#include "Dosya.h"
#include <Windows.h>
#include <stdlib.h>
int main() {

	struct Dosya dosya = {"Kisiler.txt","Sayilar.txt"};
	
	struct Kisi kokKisi =kisiYazdir(dosya);
	
	struct Kisi enbuyuk = EnbuyukBul(kokKisi);
	int tur = 1;
	
	struct Oyun oyun = kuradakiSayi(dosya);

	struct Oyun* next = &oyun;
	
	while(next->sonraki != NULL){	
	
		
		struct Kisi kok = { "asdads",12,120,210 };

kok.sonraki = &kokKisi;

*next =masadakiPArayiBul(kok, *next);
printf("                            #########################################################\n");
printf("			    ##		        SANSLI SAYI: %d			   ##\n", next->kuradakiSayi);
printf("                            #########################################################\n");
printf("                            #########################################################\n");
printf("			    ##			   TUR: %d			   ##\n",tur);
printf("			    ##		        MASA BAKIYE: %.0f TL   	   ##\n", next->masadakiPAra);
printf("			    ##-----------------------------------------------------##\n");
printf("			    ##			EN ZENGIN KISI			   ##\n");
printf("			    ##		        %s			   ##\n", EnbuyukBul(kokKisi).adSoyad);
printf("			    ##		    BAKIYESI: %.0f			   ##\n", EnbuyukBul(kokKisi).mevcutPara);
printf("                            #########################################################\n");

if (kokKisi.mevcutPara == -1){
	tur++;
	break;
}
next = next->sonraki;
Sleep(50);
system("cls");
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