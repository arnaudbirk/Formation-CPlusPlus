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
    cout <<getNom()<<" est un rectangle d'angle superieur gauche (" << getTab(0).getX()<<","<<getTab(0).getY();
    cout <<") de longueur " << longueur << "et de largeur "<< largeur << endl;
}

