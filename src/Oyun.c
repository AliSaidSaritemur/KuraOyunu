#include "Oyun.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Oyun masadakiPArayiBul(struct Kisi kisi,struct Oyun oyun) {
	struct Kisi yeniKisi = { "asdads",12,20,101 };
	struct Kisi* gec = &yeniKisi;
	double para = 0;
	double oncekiPara = 0;
	gec->sonraki = kisi.sonraki;

	while (gec->sonraki != NULL) {
	
		if (gec->sonraki->mevcutPara <= 1000){
			gec = gec->sonraki;
			continue;}
		else{}
		if (gec->sonraki->paraYatirdigiSayi == oyun.kuradakiSayi) {
			 oncekiPara = gec->sonraki->mevcutPara;
			para = (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara) * 10;
			gec->sonraki->mevcutPara = (gec->sonraki->mevcutPara) * (1 - gec->sonraki->yatirdigiPara) + para;
			gec->sonraki->mevcutPara = round(gec->sonraki->mevcutPara * 100) / 100;
			oyun.masadakiPAra -= ( gec->sonraki->mevcutPara - oncekiPara);
		}
		else {
			 oncekiPara = gec->sonraki->mevcutPara;
			para = (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara);
		gec->sonraki->mevcutPara = gec->sonraki->mevcutPara - para;
			gec->sonraki->mevcutPara = round(gec->sonraki->mevcutPara * 100) / 100;

			oyun.masadakiPAra +=(oncekiPara - gec->sonraki->mevcutPara) ;
		

			
		}

		gec = gec->sonraki;
	}

	oyun.sonraki->masadakiPAra = oyun.masadakiPAra;


	return oyun;
};


void kisiSil(struct Kisi* kisi) {

	struct Kisi yeniKisi = { "asdads",12,20,101 };
	yeniKisi.sonraki = kisi;
	struct Kisi* gec = &yeniKisi;

	while (gec->sonraki != NULL && gec->sonraki->sonraki != NULL) {

		if (gec->sonraki->mevcutPara < 1000) {
			gec->sonraki = gec->sonraki->sonraki;
		}

		gec = gec->sonraki;
	}
	if (gec->sonraki != NULL) {
		if (gec->sonraki->mevcutPara < 1000)
			gec->sonraki = NULL;
	}

};