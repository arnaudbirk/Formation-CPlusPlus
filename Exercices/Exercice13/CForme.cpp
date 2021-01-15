#include "CForme.h"

using namespace std;

 CForme::CForme(string n,int nb,CCoord *tCoord,CCouleur col,bool asp):nom(n),nbPts(nb),aspect(asp),couleur(col)
{
    tab = new CCoord[nbPts];
    for (int i=0;i<nbPts;i++){
            tab[i] = tCoord[i];
    }
}

 CForme::~CForme()
{
    delete[] tab;
}


string CForme::getNom()
{
    return nom;
}

CCoord CForme::getTab(int i)
{
    return tab[i];
}

int CForme::getNbPts()
{
    return nbPts;
}

