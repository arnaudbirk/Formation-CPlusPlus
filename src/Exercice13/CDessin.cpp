#include "CDessin.h"
using namespace std;

struct Delete
{
   template <class T> void operator ()(T*& p) const
   {
      delete p;
      p = NULL;
   }
};

 CDessin::~CDessin()
{
   // for_each (vecForme.begin(), vecForme.end(), Delete());
   for(int i =0; i<vecForme.size();i++){
       delete vecForme[i];
   }
}


void CDessin::addCForme(CForme &forme)
{
    vecForme.push_back(&forme);
}

void CDessin::addCForme2(CForme *forme)
{
    vecForme.push_back(forme);
}

void CDessin::affiche()
{
    for(int i =0; i< vecForme.size();i++){
        vecForme[i]->affiche();
    }
}

void CDessin::afficheAire()
{
    for(int i =0; i< vecForme.size();i++){
        cout << "L'aire de " << vecForme[i]->getNom() << " est " <<vecForme[i]->calculeAire() << endl;
    }
}


