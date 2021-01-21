#ifndef HAMBAR_PORCI_H
#define HAMBAR_PORCI_H
#include "hambar.hpp"

class Hambar_Porci: public Hambar
{
        char *nume;
        int nr;
        char *mancare;
        double mancare_consumata_zilnic[3];

    public:
        Hambar_Porci ();
        Hambar_Porci (const char*, int, const char *, double[]);
        void print ();
        double* Get_Cantitate ();
        int Get_Number ();
        char *Get_Name ();
        ~Hambar_Porci ();
};

#endif