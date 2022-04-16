#ifndef Kisi_H 
#define Kisi_H
#include <stdio.h>

struct Kisi
{
char adSoyad[200];
float mevcutPara;
float yatirdigiPara;
int paraYatirdigiSayi;
struct Kisi* sonraki;
};


struct Kisi EnbuyukBul(struct Kisi kisi);

#endif