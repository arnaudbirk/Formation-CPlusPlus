#include <iostream>
#include "date.h"
#include "evenement.h"

using namespace std;

int main()
{
    Date d1(16,11,2016);
    Date d2(19,8,2010);
    d1.affiche();
    d2.affiche();
    d1.setDate(10,12,2101);
    d2.setDate(2,2,1985);
    d1.affiche();
    d2.affiche();

    Evenement e1("Noel", 24,12,2016);
    e1.affiche();

    return 0;
}
