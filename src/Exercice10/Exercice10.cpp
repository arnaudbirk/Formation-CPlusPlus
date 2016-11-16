#include <iostream>
#include "tab2d.h"

using namespace std;

int main()
{
    //on crée un premier tableau
    Tab2D t1(2,4);
    //on lui assigne une valeur en 0,2
    t1.set(0,2,5);
    cout << "On affiche t1" << std::endl;
    t1.affiche();

    //on crée un deuxième tableau par copie du premier
    Tab2D t2(t1);
    cout << "On affiche t2 apres copie de t1" << std::endl;
    t2.affiche();

    t2.set(0,3,4);
    cout << "On affiche t2 apres avoir mis 4  a la position 3 4 dans t2" << std::endl;
    t2.affiche();

    t1.set(0,1,6);
    cout << "On affiche t2 apres avoir mis 6 a la position 0 1 dans t1" << std::endl;
    t2.affiche();

    t2 += 3;
    cout << "On affiche t2 apres ajouter 3 a toutes les valeurs" << std::endl;
    t2.affiche();
    Tab2D t3 = t1 + t2;
    cout << "la" << endl;
    //cout << "On affiche t3 qui reperesente de t1 et t2" << std::endl;
    //t3.affiche();

    /*cout << "t1 : " << endl;
    cout << t1 << endl;
    cout << "t2 : " << endl;
    cout << t2 << endl;
    cout << "t3 : " << endl;
    cout << t3 << endl;*/

    return 0;
}
