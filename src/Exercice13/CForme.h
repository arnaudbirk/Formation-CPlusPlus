#ifndef CFORME_H_INCLUDED
#define CFORME_H_INCLUDED

#include <string>
#include "CCoord.h"
#include "CCouleur.h"
#include <iostream>

class CForme
{

    protected:
        int nbPts;
        std::string nom;
        CCoord * tab;
        CCouleur couleur;
        bool aspect;

    public:
        CForme(std::string n,int nb,CCoord *tCoord,CCouleur col,bool asp);
        virtual ~CForme();

        std::string getNom();
        CCoord getTab(int i);
        int getNbPts();

        virtual double calculeAire()=0;
        virtual void affiche()=0;

};


#endif // CFORME_H_INCLUDED
