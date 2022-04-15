#include "Oyun.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

struct Oyun masadakiPArayiBul(struct Kisi* kisi,struct Oyun oyun) {
	struct Kisi yeniKisi = { "asdads",12,20,101};
	struct Kisi* gec = &yeniKisi;
	float para=0;
	gec->sonraki = kisi;

	while (gec->sonraki != NULL) {
		
		if (gec->sonraki->paraYatirdigiSayi == oyun.kuradakiSayi) {
			
			para = (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara) *10;
			
			oyun.masadakiPAra = oyun.masadakiPAra - ((gec->sonraki->mevcutPara) * (1 - gec->sonraki->yatirdigiPara) + para
				- gec->sonraki->mevcutPara);
				;
		
			gec->sonraki->mevcutPara = (gec->sonraki->mevcutPara)*(1-gec->sonraki->yatirdigiPara) + para;
			
			
			
		}
		else {
			
			para = (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara);
			oyun.masadakiPAra = oyun.masadakiPAra + para;
			gec->sonraki->mevcutPara = gec->sonraki->mevcutPara - para;
			
		}
		
		gec = gec->sonraki;
	}
	if(oyun.sonraki !=NULL){
	oyun.sonraki->masadakiPAra = oyun.masadakiPAra;
}
	
	return oyun;
};


void kisiSil(struct Kisi *kisi) {
	
	
	struct Kisi* gec = kisi;

	while (gec->sonraki !=NULL&& gec->sonraki->sonraki != NULL) {
	
		if (gec->sonraki->mevcutPara < 1000) {
			gec->sonraki = gec->sonraki->sonraki;
		}

		gec =gec->sonraki;
	}
	if (gec->sonraki != NULL) {
		 if(gec->sonraki->mevcutPara < 1000)
			gec->sonraki = NULL;	
	}





};
