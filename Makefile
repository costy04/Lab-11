CC = gcc
CFLAGS = -Wall -g

build:depozit_mancare.o hambar.o hambar_gaini.o hambar_vaci.o hambar_porci.o hambar_capre.o hambar_cai.o
	g++ -g -Wall main.cpp depozit_mancare.cpp hambar.cpp hambar_gaini.cpp hambar_vaci.cpp hambar_porci.cpp hambar_capre.cpp hambar_cai.cpp -o ceva
depozit_mancare.o:depozit_mancare.cpp
hambar.o: hambar.cpp
hambar_gaini.o:hambar_gaini.cpp
hambar_vaci.o:hambar_vaci.cpp
hambar_capre.o:hambar_capre.cpp
hambar_cai.o:hambar_cai.cpp
hambar_porci.o:hambar_porci.cpp

.PHONY: clean

clean:
	rm ceva