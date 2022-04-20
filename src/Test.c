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
enbuyuk = EnbuyukBul(kokKisi);
printf("\n\n                            #########################################################\n");
printf("			    ##		        SANSLI SAYI: %d			   ##\n", next->kuradakiSayi);
printf("                            #########################################################\n");
printf("                            #########################################################\n");
printf("			    ##			   TUR: %d			   ##\n",tur);
printf("			    ##		        MASA BAKIYE: %.0lf TL   	   ##\n", next->masadakiPAra);
printf("			    ##-----------------------------------------------------##\n");
printf("			    ##			EN ZENGIN KISI			   ##\n");
printf("			    ##		        %s			   ##\n", enbuyuk.adSoyad);
printf("			    ##		    BAKIYESI: %.0lf			   ##\n", enbuyuk.mevcutPara);
printf("                            #########################################################\n");
  
if (kokKisi.mevcutPara == -1){
	tur++;
	break;
}
next = next->sonraki;

tur++;
Sleep(50);
system("cls");
	}
	system("cls");
	printf("\n\n                            #########################################################\n");
	printf("			    ##			   TUR: %d			   ##\n", tur);
	printf("			    ##		        MASA BAKIYE: %.2lf TL        ##\n", next->masadakiPAra);
	printf("			    ##		        	 			   ##\n");
	printf("			    ##-----------------------------------------------------##\n");
	printf("			    ##			OYUN BITTI			   ##\n");
	printf("			    ##		        	 			   ##\n");
	printf("			    ##      Bedava Peynir Sadece Fare Kapaninda olur       ##\n");
	printf("			    ##		        	 			   ##\n");
	printf("                            #########################################################\n");
	
	getchar();   
	return 0;
};