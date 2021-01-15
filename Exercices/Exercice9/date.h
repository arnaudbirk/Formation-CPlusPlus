#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <iostream>

class Date{
    protected:
        int jour, mois, annee;
        static const int nbJoursParMois [];

    public:
        Date(int j, int m, int a);
        void setDate(int j, int m, int a);
        bool isValide(int j, int m, int a);
        void affiche();
};

#endif // DATE_H_INCLUDED
