#include <stdio.h>
#include "Kisi.h"
#include "Oyun.h"
#include "Dosya.h"
#include <Windows.h>
#include <stdlib.h>
int main() {


	

	struct Kisi kisi = { "ahmet",12123,231,312 };
	struct Kisi kisi1 = { "mur",61213,231,312 };
	struct Kisi kisi2 = { "asd",12113999,231,312 };
	struct Kisi kisi3 = { "kelam",412,231,312 };
	struct Kisi kisi4 = { "kalem",11213,231,312 };

	struct Kisi* root;
	root = (struct Kisi*)malloc(sizeof(struct Kisi));

	root = &kisi;
	root->sonraki = &kisi1;
	root->sonraki->sonraki = &kisi2;
	root->sonraki->sonraki->sonraki = &kisi3;
	root->sonraki->sonraki->sonraki->sonraki = &kisi4;

struct Kisi enkucuk =kisiYazdir("adas");

	struct Kisi enbuyuk = EnbuyukBul(enkucuk);
	int tur = 1;
	float masadakiPara=0;
	struct Oyun oyun = kuradakiSayi();
	
	struct Oyun* next = &oyun;

	while(next->sonraki != NULL){	
		
struct Kisi kok = { "asdads",12,120,210 };
kok.sonraki = &enkucuk;
*next =masadakiPArayiBul(kok, *next);
printf("                            #########################################################\n");
printf("			    ##		        SANSLI SAYI: %d			   ##\n", next->kuradakiSayi);
printf("                            #########################################################\n");
printf("                            #########################################################\n");
printf("			    ##			   TUR: %d			   ##\n",tur);
printf("			    ##		        MASA BAKIYE: %f	   ##\n", next->masadakiPAra);
printf("			    ##-----------------------------------------------------##\n");
printf("			    ##			EN ZENGIN KISI			   ##\n");
printf("			    ##		        %s			   ##\n", EnbuyukBul(enkucuk).adSoyad);
printf("			    ##		        %f			   ##\n", EnbuyukBul(enkucuk).mevcutPara);
printf("                            #########################################################\n");
next = next->sonraki;


tur++;
	Sleep(1000);
		system("cls");
	}


};