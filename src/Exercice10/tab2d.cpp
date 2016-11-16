#include "tab2d.h"
#include <iostream>

using namespace std;

 Tab2D::Tab2D(unsigned int col, unsigned int ligne):nbColonne(col),nbLigne(ligne)
{
    if(nbColonne == 0 || nbLigne == 0) return;
    //tab = new double[nbColonne*nbLigne];
    alloue();
    for(unsigned int i=0; i<nbLigne*nbColonne;i++){
        tab[i] = 0;
    }
}

 Tab2D::~Tab2D()
{
    libere();
}

 Tab2D::Tab2D(const Tab2D &source)
{
    copie(source);
}

Tab2D & Tab2D::operator=(const Tab2D &source)
{
    copie(source);
    return *this;
}


double Tab2D::get(unsigned int col, unsigned int ligne)
{
    return tab[ligne*nbColonne+col];
}

void Tab2D::set(unsigned int col, unsigned int ligne, double val)
{
    tab[ligne*nbColonne+col] = val;
}

void Tab2D::affiche()
{
    for(unsigned int i=0; i<nbLigne;i++){
        for(unsigned int j=0;j<nbColonne;j++){
            cout << tab[i * nbColonne + j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
}

void Tab2D::alloue()
{
    unsigned int taille = nbColonne * nbLigne;
    tab = new double[taille];
}

void Tab2D::libere()
{
    if ( tab != NULL )
    {
        delete[] tab;
        tab = NULL;
    }
}

void Tab2D::copie( const Tab2D &source )
{
    // On commence par desallouer la memoire ...
    libere();
    // Pour ensuite la reallouer, avec la taille du tableau a copier
    nbColonne = source.nbColonne;
    nbLigne = source.nbLigne;
    alloue();
    // On copie finalement element par element le contenu du tableau
    unsigned int taille = nbColonne * nbLigne;
    for (unsigned int i=0;i<taille;++i)
        tab[i] = source.tab[i];
}

Tab2D & Tab2D::operator+=(const double d)
{
    for(unsigned int i = 0;i<nbLigne*nbColonne;i++){
        tab[i] += d;
    }
    return *this;
}

Tab2D operator+(const Tab2D &t1 , const Tab2D &t2){
    if(t1.nbColonne == t2.nbColonne && t1.nbLigne==t2.nbLigne){
        Tab2D t3(t1.nbColonne,t1.nbLigne);
        std::cout << "ici" << std::endl;
        for(unsigned int i =0;i<(t3.nbColonne*t3.nbLigne);i++){
            t3.tab[i] = t1.tab[i] + t2.tab[i];
        }
        t3.affiche();
        return t3;
    }
    else {
        cout << "Les 2 tableaux ne font pas la même taille" << endl;
        return NULL;
    }
}

ostream &operator <<(std::ostream &out,const Tab2D &t)
{
    for(unsigned int i=0; i<t.nbLigne;i++){
        for(unsigned int j=0;j<t.nbColonne;j++){
            out << t.tab[i * t.nbColonne + j] << " " ;
        }
        out << endl;
    }
    out << endl;
    return out;
}
