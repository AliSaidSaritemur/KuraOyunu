#include "Oyun.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

struct Oyun masadakiPArayiBul(struct Kisi kisi,struct Oyun oyun) {
	struct Kisi yeniKisi = { "asdads",12,120,210 };
	struct Kisi* gec = &yeniKisi;
	float para=0;
	gec->sonraki = &kisi;
	gec->sonraki->mevcutPara = 0;
	while (gec->sonraki != NULL) {
		
		if (gec->sonraki->paraYatirdigiSayi == oyun.kuradakiSayi) {
			para = (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara) * 10;
			gec->sonraki->mevcutPara = gec->sonraki->mevcutPara + para;
			oyun.masadakiPAra = oyun.masadakiPAra - para;
		}
		else {
			para = (gec->sonraki->yatirdigiPara) * (gec->sonraki->mevcutPara);
			gec->sonraki->mevcutPara = gec->sonraki->mevcutPara - para;
			oyun.masadakiPAra = oyun.masadakiPAra + para;
		}
		
		gec = gec->sonraki;
	}
	
	oyun.sonraki->masadakiPAra = oyun.masadakiPAra;

	return oyun;
};



