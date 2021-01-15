#ifndef CDESSIN_H_INCLUDED
#define CDESSIN_H_INCLUDED

#include "CForme.h"
#include <vector>

class CDessin{
  private:
    std::vector<CForme *> vecForme;

  public:
    CDessin(){};
    ~CDessin();

    void addCForme(CForme &forme);
    void addCForme2(CForme *forme);

    void affiche();
    void afficheAire();

};

#endif // CDESSIN_H_INCLUDED
