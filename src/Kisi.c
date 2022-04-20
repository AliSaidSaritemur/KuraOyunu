#include "Kisi.h"
#include <stdio.h>
#include <string.h>
struct Kisi EnbuyukBul(struct Kisi kisi) {
	struct Kisi enbuyuk = kisi;
	struct Kisi *gec = &kisi;
	while(gec->sonraki !=NULL){	

	
         struct Kisi gecmis = *gec->sonraki; 
		
		if (gecmis.mevcutPara > enbuyuk.mevcutPara){
			enbuyuk = gecmis;}
		gec = gec->sonraki;
	
	}

	if (enbuyuk.mevcutPara <= 1000) {
		enbuyuk.mevcutPara = -1;
		kisi.mevcutPara = -1;
	}

	return enbuyuk;
}
