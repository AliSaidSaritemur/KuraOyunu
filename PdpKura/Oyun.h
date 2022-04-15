#ifndef Oyun_H 
#define Oyun_H

#include "Kisi.h"

struct Oyun
{
	float masadakiPAra;
	int kuradakiSayi;
	struct Oyun* sonraki;
};

float masadakiPArayiBul(struct Kisi kisi,int kuraSayisi);

#endif