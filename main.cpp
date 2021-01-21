#include "depozit_mancare.hpp"
#include "hambar_porci.hpp"
#include "hambar_capre.hpp"
#include "hambar_vaci.hpp"
#include "hambar_cai.hpp"
#include "hambar_gaini.hpp"

int main ()
{
    Depozit_Mancare depozit (2000, 0, 0, 0);
    Hambar **v = new Hambar* [5];
    double v1[3] = {0,8,0};
    //vectorul in care am stocat cantitatea se identifica astfel: primul element nr de kg de graunte, al doilea element
    //numarul de kg de nutret, iar ultimul numarul de kg de iarba.
    v[0] = new Hambar_Cai ("Cai", 2, "nutret", v1);
    double v2[3] = {5,0,0};
    v[1] = new Hambar_Gaini ("Gaini", 100, "graunte", v2);
    double v3[3] = {0,30,0};
    v[2] = new Hambar_Vaci ("Vaci", 10, "nutret", v3);
    double v4[3] = {4,0,5};
    v[3] = new Hambar_Porci ("Porci", 8, "graunte iarba",v4);
    //daca un animal consuma mai mult de un fel de mancare se vor introduce cu spatiu intre ele.
    double v5[3] = {0,4,0};
    v[4] = new Hambar_Capre ("Capre", 4, "nutret", v5);
    double total_mancare = 0;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            total_mancare = total_mancare + v[i]->Get_Cantitate ()[j];

    double percentage[3] = {0,0,0};
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            percentage[j] = percentage[j] + v[i]->Get_Cantitate ()[j];

    for (int i = 0; i < 3; i++)
        percentage[i] = percentage[i]*100/total_mancare;
    
    /*ce cantitate din fiecare mancare trebuie stocata in depozit astfel incat aceasta sa ajunga
cat mai multe zile*/ 
    cout << "Cel mai eficient mod de a imparti mancarea este pentru ca cele 2000kg sa ajunga cat mai multe zile este: "<<endl;
    cout << percentage[0]*2000/100 <<" de kg de graunte"<<endl;
    cout << percentage[1]*2000/100 <<" de kg de nutret"<<endl;
    cout << percentage[2]*2000/100 <<" de kg de iarba"<<endl;
    cout << endl;

    //de cate ori trebuie sa fie reumplut depozitul

    cout << "Se consuma in fiecare zi " << total_mancare << " de kg de mancare pe zi, deci in 365 de zile vom avea nevoie de " << endl;
    cout << total_mancare*365 << " de kg de mancare deci depozitul trebuie reumplut de " << int (total_mancare*365/2000) + 1 << " ori "<< endl;
    cout << endl;

    //afisati cata mancare va ramane la finalul anului (in total si pe fiecare categorie)
    int reziduuri = 2000*(int (total_mancare*365/2000) + 1) - total_mancare*365;
    cout << "La finalul anului raman: " << reziduuri <<" kg de mancare"<< endl;
    cout << "Raman de asemenea: ";
    cout << percentage[0]*reziduuri/100 << " kg de graunte"<<endl;
    cout << percentage[1]*reziduuri/100 << " kg de nutret"<<endl;
    cout << percentage[2]*reziduuri/100 << " kg de iarba"<<endl;
    cout << endl;

    //cata mancare se consuma pe zi(in total si pe fiecare categorie)
    cout << "Pe zi se consuma " << total_mancare << " kg de mancare pe zi astfel: "<<endl;
    double suma = 0;
    for (int i = 0; i < 5; i++)
        suma = suma + v[i]->Get_Cantitate()[0];
    cout << suma << " kg de graunte pe zi"<<endl;
    suma = 0;
    for (int i = 0; i < 5; i++)
        suma = suma + v[i]->Get_Cantitate()[1];
    cout << suma << " kg de nutret pe zi"<<endl;
    suma = 0;
    for (int i = 0; i < 5; i++)
        suma = suma + v[i]->Get_Cantitate()[2];
    cout << suma << " kg de iarba pe zi"<<endl;
    cout << endl;

    //top 3 consumatori de mancare (ca si cantitate in kg, nu conteaza tipul mancarii)
    int max = -1;// determinam categoria care mananca cea mai multa mancare/animal
    char name[20];
    for (int i = 0; i < 5; i++)
    {
        int s = 0;
        for (int j = 0; j< 3; j++)
            s = s + v[i]->Get_Cantitate ()[j];
        if (max < s/v[i]->Get_Number ())
        {
            max = s/v[i]->Get_Number ();
            strcpy (name,v[i]->Get_Name ());
        }
    }
    cout << "Animalele care mananca cel mai mult sunt in categoria: " << name << endl;


    


}