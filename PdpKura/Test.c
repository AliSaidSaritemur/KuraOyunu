#include <stdio.h>
#include "Kisi.h"
#include "Oyun.h"
#include "Dosya.h"
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
	
	float masadakiPara=0;
	struct Oyun oyun = kuradakiSayi();

struct Kisi kok = { "asdads",12,120,210 };
kok.sonraki = &enkucuk;

oyun =masadakiPArayiBul(kok,oyun);

printf("%.2f \n", oyun.masadakiPAra);

printf("%.2f", enkucuk.mevcutPara);
};