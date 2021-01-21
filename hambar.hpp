#ifndef HAMBAR_H
#define HAMBAR_H
#include <iostream>
#include <cstring>
using namespace std;

class Hambar
{
    public:
        virtual ~Hambar () = 0;
        virtual void print () = 0;
        virtual double* Get_Cantitate () = 0;
        virtual int Get_Number () = 0;
        virtual char* Get_Name () = 0;
};

#endif