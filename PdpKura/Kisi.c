#include "Kisi.h"
#include <stdio.h>
#include <string.h>
struct Kisi EnbuyukBul(struct Kisi kisi) {
	struct Kisi enbuyuk = kisi;
	struct Kisi *gec = &kisi;
	while(gec->sonraki !=NULL){
		printf("%.2f \n", enbuyuk.mevcutPara);
		
         struct Kisi gecmis = *gec->sonraki; 
		
		if (gecmis.mevcutPara > enbuyuk.mevcutPara){
			enbuyuk = gecmis;}
		gec = gec->sonraki;
	
	}
	return enbuyuk;
}

