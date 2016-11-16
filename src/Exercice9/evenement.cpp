#include "evenement.h"

using namespace std;

void Evenement::affiche()
{
    cout << "L evenement " << nom << " aura lieu le ";
    Date::affiche(); //appel de la m�thode affiche de la classe m�re
}

 Evenement::Evenement(string n, int j, int m, int a):Date(j,m,a),nom(n)
{

}


string Evenement::getNom()
{
    return nom;
}

void Evenement::setNom(string n)
{
    nom = n;
}
