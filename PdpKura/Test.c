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


	struct Kisi enbuyuk = EnbuyukBul(kisi);
	struct Kisi enkucuk =kisiYazdir("adas");

	printf("%.2f",enkucuk.sonraki->mevcutPara);
	struct Oyun oyun = { 1,5 };

	

	
};