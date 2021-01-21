#ifndef HAMBAR_CAPRE_H
#define HAMBAR_CAPRE_H
#include "hambar.hpp"

class Hambar_Capre: public Hambar
{
        char *nume;
        int nr;
        char *mancare;
        double mancare_consumata_zilnic[3];
    public:
        Hambar_Capre ();
        Hambar_Capre (const char*, int, const char *, double[]);
        void print ();
        double* Get_Cantitate ();
        int Get_Number ();
        char *Get_Name ();
        ~Hambar_Capre ();
};

#endif