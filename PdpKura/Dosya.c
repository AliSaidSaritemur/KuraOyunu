#include "Dosya.h"
struct Kisi kisiYazdir(char konum[80]) {
	int sayac=0;
	int i = 1;
	int sayi2=0;
	char ad[200];
	char soyad[200];
	char paraustu[200];
	FILE* dosya;
	FILE* dosyaYaz;
	FILE* dosyaOku;
	struct Kisi yeniKisi = {" ",0,0,0};
	dosya = fopen("Kisi.txt", "r");
	dosyaYaz = fopen("DuzenliKisi.txt", "w");
	while (!feof(dosya)) {	

			fscanf(dosya," %s %s", &ad,&soyad);	
			strncat(ad, " ");
			strncat(ad, soyad);

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
while (!feof(dosyaOku)) {

	fscanf(dosyaOku," %s %s %f %f %d ", &yeniKisi.adSoyad,&soyad,&yeniKisi.mevcutPara, &yeniKisi.yatirdigiPara, &yeniKisi.paraYatirdigiSayi);
	
}

	printf("%s  %.2f", yeniKisi.adSoyad, yeniKisi.mevcutPara);
	
}



