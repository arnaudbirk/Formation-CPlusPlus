#ifndef CPOLYGONE_H_INCLUDED
#define CPOLYGONE_H_INCLUDED

#include "CForme.h"

class CPolygone : public CForme {

    public:
        CPolygone(std::string n,int nb,CCoord *tCoord,CCouleur col,bool asp):CForme(n,nb,tCoord,col,asp){};
        virtual ~CPolygone();

        virtual void affiche();
        virtual double calculeAire();


};

#endif // CPOLYGONE_H_INCLUDED
