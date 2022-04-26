/**
*
* @author Ali Said Saritemur
* @ 26.04.2022
* <p>
* 2C G201210044
* </p>
*/
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
	int tur = 0;
	
	struct Oyun oyun = kuradakiSayi(dosya);

	struct Oyun* next = &oyun;
	
	while(next->sonraki != NULL){	
		tur++;

*next =masadakiPArayiBul(&kokKisi, *next);
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
  
if (enbuyuk.mevcutPara <1000){
	break;
}
next = next->sonraki;


	}

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
	


	system("pause");
	return 0;
};