#ifndef Dosya_H 
#define Dosya_H
#define _CRT_SECURE_NO_DEPRECATE

#include "Oyun.h"
#include "Kisi.h"
#include <stdio.h>
#include <stdlib.h>

struct Dosya
{
	char kisiListeYolu[200];
	char sayiListeYolu[200];
};


struct Kisi kisiYazdir(struct Dosya dosya); //Kisileri bir dizi olarak kaydeder
struct Oyun kuradakiSayi(struct Dosya dosya); //Sayilari bir dizi olarak kaydeder


#endif