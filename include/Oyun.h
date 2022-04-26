#ifndef Oyun_H 
#define Oyun_H

#include "Kisi.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Oyun
{
	double masadakiPAra;
	int kuradakiSayi;
	struct Oyun* sonraki;
};
struct Oyun masadakiPArayiBul(struct Kisi * kisi, struct Oyun oyun);

#endif