#ifndef Kisi_H 
#define Kisi_H
#include <stdio.h>

struct Kisi
{
char adSoyad[200];
double mevcutPara;
double yatirdigiPara;
int paraYatirdigiSayi;
struct Kisi* sonraki;
};


struct Kisi EnbuyukBul(struct Kisi kisi); //En buyuk sayiyi bulur

#endif