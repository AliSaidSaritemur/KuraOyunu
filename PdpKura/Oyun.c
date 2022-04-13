#include "Oyun.h"

struct Kisi EnbuyukBul(struct Kisi kisiler[65]) {
	
	struct Kisi enbuyuk=kisiler[0];

	for (int i = 1; i < 65; i++)
	{
		if (kisiler[i].mevcutPara > enbuyuk.mevcutPara)
			enbuyuk = kisiler[i];
		
	}
	return enbuyuk;	
};


