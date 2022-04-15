#include "Oyun.h"


float masadakiPArayiBul(struct Kisi kisi, int kuraSayisi) {
	struct Kisi yeniKisi = { "asdads",12,120,210 };

	struct Kisi* gec = &yeniKisi;
	gec->sonraki = &kisi;
	gec->sonraki->mevcutPara = 0;
	while (gec->sonraki != NULL) {
		
		if (gec->sonraki->paraYatirdigiSayi == kuraSayisi) {

			gec->sonraki->mevcutPara = gec->sonraki->mevcutPara + (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara) * 10
				;
		}
		else {

			gec->sonraki->mevcutPara = gec->sonraki->mevcutPara - (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara);
		}
		
		gec = gec->sonraki;
	}
	
	return 5;
};



