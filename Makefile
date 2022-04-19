VPATH = ./src
CXXFLAGS = -I ./include	

all:program calistirma

program:Kisi.o Test.o Oyun.o Dosya.o
	gcc  ./lib/Kisi.o	./lib/Test.o	./lib/Oyun.o	./lib/Dosya.o -o ./bin/program
	
Kisi.o:Kisi.c
	gcc -c $(CXXFLAGS) $< -o ./lib/Kisi.o
	
Test.o:Test.c
	gcc -c $(CXXFLAGS) $< -o ./lib/Test.o
	
Oyun.o:Oyun.c
	gcc -c $(CXXFLAGS) $<  -o ./lib/Oyun.o
	
Dosya.o:Dosya.c
	gcc -c $(CXXFLAGS) $< -o  ./lib/Dosya.o
	
calistirma:
	./bin/program