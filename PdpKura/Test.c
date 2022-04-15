
#include "Kisi.h"
#include "Oyun.h"
#include "Dosya.h"
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
int main() {


	
struct Kisi enkucuk =kisiYazdir();

	int tur = 1;
	float masadakiPara=0;	
	struct Oyun oyun = kuradakiSayi();

	struct Oyun* next = &oyun;
	kisiSil(&enkucuk);
	while(next->sonraki != NULL){	
	
		system("cls");
	
*next =masadakiPArayiBul(&enkucuk, *next);
printf("                            #########################################################\n");
printf("			    ##		        SANSLI SAYI: %d			   ##\n", next->kuradakiSayi);
printf("                            #########################################################\n");
printf("                            #########################################################\n");
printf("			    ##			   TUR: %d			   ##\n",tur);
printf("			    ##		        MASA BAKIYE: %.2f TL   	   ##\n", next->masadakiPAra);
printf("			    ##-----------------------------------------------------##\n");
printf("			    ##			EN ZENGIN KISI			   ##\n");
printf("			    ##		        %s			   ##\n", EnbuyukBul(enkucuk).adSoyad);
printf("			    ##		    BAKIYESI: %.0f			   ##\n", EnbuyukBul(enkucuk).mevcutPara);
printf("                            #########################################################\n");
next = next->sonraki;
Sleep(10000);
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

};