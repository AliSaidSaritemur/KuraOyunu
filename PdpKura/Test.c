#include <stdio.h>
#include "Kisi.h"
#include "Oyun.h"
int main() {

	
	printf("MEraba BReo");

	struct Kisi kisi= {"ahmet","selam",12123,231,312};
	struct Kisi kisi1 = { "mur","selam",61213,231,312 };
	struct Kisi kisi2 = { "asd","selam",12113,231,312 };
	struct Kisi kisi3 = { "kelam","selam",412,231,312 };
	struct Kisi kisi4 = { "kalem","selam",11213,231,312 };
	struct Kisi kisiler[65];
	kisiler[0] = kisi;
	kisiler[1] = kisi1;
	kisiler[2] = kisi2;
	kisiler[3] = kisi3;
	kisiler[4] = kisi4;

	struct Kisi enbuyuk = EnbuyukBul(kisiler);


	printf(enbuyuk.ad);
	struct Oyun oyun ={1,5};

	printf("%d", (oyun.masadakiPAra+1));
}