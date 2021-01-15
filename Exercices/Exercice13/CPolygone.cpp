#include "CPolygone.h"

using namespace std;

CPolygone::~CPolygone()
{

}

double CPolygone::calculeAire()
{
    cout << "Je ne sais pas calculer l'aire d'un polygone" << endl;
    return -999;
}

void CPolygone::affiche()
{
    cout <<this->getNom()<<" est un polygone qui a comme coordonnees ";
    for(int i = 0; i<nbPts;i++){
        cout << "(" << this->getTab(i).getX()<<","<<this->getTab(i).getY() << ") ";
    }
    cout <<endl;
}
