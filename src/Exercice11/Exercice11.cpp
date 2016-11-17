#include <iostream>
#include "tab2dtemplate.h"

using namespace std;

int main()
{
    tab2DTemplate<double> t1(2,3);
    t1.affiche();
    t1.set(1,1,2.5);
    t1.affiche();

    tab2DTemplate<double> t2(5,5);
    t2.affiche();
    t2.set(1,1,5);
    t2.affiche();

    return 0;
}
