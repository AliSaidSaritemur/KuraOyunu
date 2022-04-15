#ifndef Oyun_H 
#define Oyun_H

#include "Kisi.h"

struct Oyun
{
	float masadakiPAra;
	int kuradakiSayi;
	struct Oyun* sonraki;
};

struct Oyun masadakiPArayiBul(struct Kisi kisi, struct Oyun oyun);

#endif