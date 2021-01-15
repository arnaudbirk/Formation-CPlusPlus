#ifndef EVENEMENT_H_INCLUDED
#define EVENEMENT_H_INCLUDED

#include "date.h"
#include <string>

class Evenement : public Date {
    private:
        std::string nom;
    public :
        Evenement(std::string n, int j, int m, int a);
        void affiche();
        std::string getNom();
        void setNom(std::string n);

};

#endif // EVENEMENT_H_INCLUDED
