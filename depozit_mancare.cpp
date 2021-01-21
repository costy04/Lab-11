//#ifndef DEPOZIT_H
//#define DEPOZIT_H

#include "depozit_mancare.hpp"
#include "hambar.hpp"

Depozit_Mancare::Depozit_Mancare (): capacitate (0), cantitate_nutret (0), cantitate_graunte (0), cantitate_iarba (0) {}

Depozit_Mancare::Depozit_Mancare (int capacitate,  double cantitate_nutret, double cantitate_graunte, double cantitate_iarba)
{
    this->capacitate = capacitate;
    this->cantitate_graunte = cantitate_graunte;
    this->cantitate_iarba = cantitate_iarba;
    this->cantitate_nutret = cantitate_nutret;
}

void Depozit_Mancare::print ()
{
    cout << "Capacitatea este: " << capacitate << endl;
    cout << "Nutretul: " << cantitate_nutret << " kg" << endl;
    cout << "Graunte: " << cantitate_graunte << " kg" << endl;
    cout << "Iarba: " << cantitate_iarba << " kg" << endl;
}

void Depozit_Mancare::Set_Mancare (double nutret, double graunte, double iarba)
{
    cantitate_nutret = nutret;
    cantitate_graunte = graunte;
    cantitate_iarba = iarba;
}

//#endif