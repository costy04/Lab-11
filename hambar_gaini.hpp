#ifndef HAMBAR_GAINI_H
#define HAMBAR_GAINI_H
#include "hambar.hpp"

class Hambar_Gaini: public Hambar
{
        char *nume;
        int nr;
        char *mancare;
        double mancare_consumata_zilnic[3];
    public:
        Hambar_Gaini ();
        Hambar_Gaini (const char*, int, const char *, double []);
        void print ();
        double *Get_Cantitate ();
        int Get_Number ();
        char *Get_Name ();
        ~Hambar_Gaini ();
};

#endif