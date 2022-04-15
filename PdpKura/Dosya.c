#include "Dosya.h"
#include <stdio.h>
#include <string.h>
struct Kisi kisiYazdir(char konum[80]) {
	int sayac=0;
	int i = 1;
	int sayi2=0;
	char ad[200];
	char soyad[200];
	float mevcutPara;
	float yatirdigiPara;
	int  paraYatirdigiSayi;

	char paraustu[200];
	FILE* dosya;
	FILE* dosyaYaz;
	FILE* dosyaOku;
	struct Kisi yeniKisi = {"asdads",12,120,210};
	dosya = fopen("Kisi.txt", "r");
	dosyaYaz = fopen("DuzenliKisi.txt", "w");
	while (!feof(dosya)) {	

			fscanf(dosya," %s %s", &ad,&soyad);	
			strncat(ad, " ",100);
			strncat(ad, soyad,100);

			for (int i = 0; i < 199; i++)
			{
				if (ad[i] == NULL)
					break;
				if (ad[i] == '#')
					ad[i] = ' ';
			}
			fprintf(dosyaYaz,"%s \n",&ad);
	}

	fclose(dosyaYaz);
fclose(dosya);
dosyaOku = fopen("DuzenliKisi.txt", "r");

struct Kisi* gec;
gec = (struct Kisi*)malloc(sizeof(struct Kisi));

gec = &yeniKisi;

while (!feof(dosyaOku)) {
	struct Kisi temp;
	gec->sonraki= (struct Kisi*)malloc(sizeof(struct Kisi));
	fscanf(dosyaOku," %s %s %f %f %d ", &ad,&soyad,&gec->sonraki->mevcutPara, &gec->sonraki->yatirdigiPara, &gec->sonraki->paraYatirdigiSayi);
	strncat(ad, " ",100);
	strncat(ad, soyad,100);	

	strcpy(gec->sonraki->adSoyad, ad);
	

	gec = gec->sonraki;
	printf("KG AGA  %s \n ",gec->adSoyad); 

}
gec->sonraki = NULL;
printf("KG AGA  %s \n ", yeniKisi.sonraki->sonraki->adSoyad);
	return yeniKisi;
}



