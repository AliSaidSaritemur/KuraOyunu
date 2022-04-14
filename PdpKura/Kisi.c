#include "Kisi.h"
struct Kisi EnbuyukBul(struct Kisi kisi) {
	struct Kisi enbuyuk = kisi;
	struct Kisi *gec = &kisi;
	while(gec->sonraki !=NULL){
		struct Kisi gecmis = *gec->sonraki;
		if (gecmis.mevcutPara > enbuyuk.mevcutPara){
			enbuyuk = gecmis;}
		gec = gec->sonraki;
	}
	return enbuyuk;
}

struct Kisi KisiEKle() {

	struct Kisi bemp = { " ",0,0,0 };

	return bemp;
};