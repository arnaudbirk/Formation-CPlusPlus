#ifndef CCERCLE_H_INCLUDED
#define CCERCLE_H_INCLUDED

#include "CForme.h"

class CCercle:public CForme{

    private:
        double rayon;

    public:
        CCercle(std::string n,CCoord *tCoord,CCouleur col,bool asp,double r):CForme(n,1,tCoord,col,asp),rayon(r){};
        virtual ~CCercle();

        virtual void affiche();
        virtual double calculeAire();

};

#endif // CCERCLE_H_INCLUDED
