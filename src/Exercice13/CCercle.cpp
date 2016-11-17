#include "CCercle.h"

using namespace std;

CCercle::~CCercle()
{

}

double CCercle::calculeAire()
{
    return 3.14*rayon*rayon;
}

void CCercle::affiche()
{
    cout <<this->getNom()<<" est un cercle de centre (" << this->getTab(0).getX()<<","<<this->getTab(0).getY();
    cout <<") et de rayon "<< rayon << endl;
}

