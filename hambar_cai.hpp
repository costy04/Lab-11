#ifndef HAMBAR_CAI_H
#define HAMBAR_CAI_H
#include "hambar.hpp"

class Hambar_Cai: public Hambar
{
        char *nume;
        int nr;
        char *mancare;
        double mancare_consumata_zilnic[3];
    public:
        Hambar_Cai ();
        Hambar_Cai (const char*, int, const char *, double[]);
        void print ();
        double* Get_Cantitate ();
        int Get_Number ();
        char *Get_Name ();
        ~Hambar_Cai ();
};

#endif