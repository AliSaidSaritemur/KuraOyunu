#ifndef Oyun_H 
#define Oyun_H

#include "Kisi.h"

struct Oyun
{
	float masadakiPAra;
	int kuradakiSayi;
	struct Oyun* sonraki;
};
void kisiSil(struct Kisi kisi);
struct Oyun masadakiPArayiBul(struct Kisi kisi, struct Oyun oyun);

#endif