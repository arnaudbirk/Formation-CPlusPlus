#ifndef CRECTANGLE_H_INCLUDED
#define CRECTANGLE_H_INCLUDED

#include "CForme.h"

class CRectangle : public CForme {

    private:
        int largeur, longueur;

    public:
        CRectangle(std::string n,CCoord *tCoord,CCouleur col,bool asp,int lon, int larg):CForme(n,1,tCoord,col,asp),longueur(lon),largeur(larg){};
        virtual ~CRectangle();

        virtual void affiche();
        virtual double calculeAire();

};

#endif // CRECTANGLE_H_INCLUDED
