#ifndef HAMBAR_VACI_H
#define HAMBAR_VACI_H
#include "hambar.hpp"

class Hambar_Vaci: public Hambar
{
        char *nume;
        int nr;
        char *mancare;
        double mancare_consumata_zilnic[3];
    public:
        Hambar_Vaci ();
        Hambar_Vaci (const char*, int, const char *, double[]);
        void print ();
        double* Get_Cantitate ();
        int Get_Number ();
        char *Get_Name ();
        ~Hambar_Vaci ();
};


#endif