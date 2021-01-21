#ifndef DEPOZIT_H
#define DEPOZIT_H

class Depozit_Mancare
{
        int capacitate;
        double cantitate_nutret;
        double cantitate_graunte;
        double cantitate_iarba;
    public:
        Depozit_Mancare ();
        Depozit_Mancare (int, double, double, double);
        void print ();
        void Set_Mancare (double, double, double);
};

#endif