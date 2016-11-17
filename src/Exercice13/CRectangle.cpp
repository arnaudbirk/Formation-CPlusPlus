#include "CRectangle.h"

using namespace std;

CRectangle::~CRectangle()
{

}

double CRectangle::calculeAire()
{
    return largeur*longueur;
}

void CRectangle::affiche()
{
    cout <<this->getNom()<<" est un rectangle d'angle supérieur gauche (" << this->getTab(0).getX()<<","<<this->getTab(0).getY();
    cout <<") de longueur " << longueur << "et de largeur "<< largeur << endl;
}

