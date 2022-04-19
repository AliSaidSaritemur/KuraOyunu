#define _CRT_SECURE_NO_DEPRECATE
#include "Dosya.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Kisi kisiYazdir(struct Dosya dosyaYolu) {
	
	FILE* dosya;
	char satir[400];
	struct Kisi yeniKisi = { "asdads",12,120,210 };
	dosya = fopen(dosyaYolu.kisiListeYolu, "r");
	struct Kisi* gec;
	gec = &yeniKisi;

	while (!feof(dosya)) {

		fgets(satir, 400, dosya);
		struct Kisi temp;
		gec->sonraki = (struct Kisi*)malloc(sizeof(struct Kisi));
		sscanf(satir,"%[^#]#%f#%f#%d", &gec->sonraki->adSoyad, &gec->sonraki->mevcutPara, &gec->sonraki->yatirdigiPara, &gec->sonraki->paraYatirdigiSayi);

		gec = gec->sonraki;
	}
	fclose(dosya);
	gec->sonraki = NULL;
	return *yeniKisi.sonraki;
}

struct Oyun kuradakiSayi(struct Dosya dosyaSayi) {
	struct Oyun anaOYun = { 0,0 };
	int numara;
	FILE* dosya;

	struct Oyun* gec;
	gec = &anaOYun;
	int i = 0;
	dosya = fopen(dosyaSayi.sayiListeYolu, "r");
	while (!feof(dosya)) {

		struct Oyun temp;
		gec->sonraki = (struct Oyun*)malloc(sizeof(struct Oyun));
		fscanf(dosya, "%d", &gec->sonraki->kuradakiSayi);
		gec->sonraki->masadakiPAra = 0;
		gec = gec->sonraki;

	}
	gec->sonraki = (struct Oyun*)malloc(sizeof(struct Oyun));
	gec->sonraki->kuradakiSayi = gec->kuradakiSayi;
	gec->sonraki->masadakiPAra = 0;
	gec->sonraki->sonraki = NULL;

	return *anaOYun.sonraki;
};

