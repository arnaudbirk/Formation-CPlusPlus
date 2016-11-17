#ifndef TAB2DTEMPLATE_H_INCLUDED
#define TAB2DTEMPLATE_H_INCLUDED
#include <iostream>

using namespace std;

template <typename T>
class tab2DTemplate {
    private:
        unsigned int nbColonne, nbLigne;
        T * tab;
        void alloue();
        void libere();
        void copie(const tab2DTemplate &rhs);

    public:
        tab2DTemplate(unsigned int col=0, unsigned int ligne=0);
        ~tab2DTemplate();
        tab2DTemplate( const tab2DTemplate &source );

        tab2DTemplate & operator =( const tab2DTemplate &source );

        template <class U> friend std::ostream& operator <<(std::ostream &out,const tab2DTemplate<U> &t);

        template <class U> friend tab2DTemplate<U> operator+(const tab2DTemplate<U> &t1 , const tab2DTemplate<U> &t2);
        tab2DTemplate &operator+=( const T d);

        T get(unsigned int col, unsigned int ligne);
        void set(unsigned int col, unsigned int ligne, T val);
        void affiche();
};

template <typename T>
 tab2DTemplate<T>::tab2DTemplate(unsigned int col, unsigned int ligne):nbColonne(col),nbLigne(ligne)
{
    if(nbColonne == 0 || nbLigne == 0) return;
    //tab = new double[nbColonne*nbLigne];
    alloue();
    for(int i=0; i<nbLigne*nbColonne;i++){
        tab[i] = 0;
    }
}

template <typename T>
 tab2DTemplate<T>::~tab2DTemplate()
{
    libere();
}

template <typename T>
 tab2DTemplate<T>::tab2DTemplate(const tab2DTemplate &source)
{
    copie(source);
}

template <typename T>
tab2DTemplate<T> & tab2DTemplate<T>::operator=(const tab2DTemplate &source)
{
    copie(source);
    return *this;
}

template <typename T>
T tab2DTemplate<T>::get(unsigned int col, unsigned int ligne)
{
    return tab[ligne*nbColonne+col];
}

template <typename T>
void tab2DTemplate<T>::set(unsigned int col, unsigned int ligne, T val)
{
    tab[ligne*nbColonne+col] = val;
}

template <typename T>
void tab2DTemplate<T>::affiche()
{
    for(int i=0; i<nbLigne;i++){
        for(int j=0;j<nbColonne;j++){
            cout << tab[i * nbColonne + j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
}

template <typename T>
void tab2DTemplate<T>::alloue()
{
    unsigned int taille = nbColonne * nbLigne;
    tab = new T[taille];
}

template <typename T>
void tab2DTemplate<T>::libere()
{
    if ( tab != NULL )
    {
        delete[] tab;
        tab = NULL;
    }
}

template <typename T>
void tab2DTemplate<T>::copie( const tab2DTemplate &source )
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

template <typename T>
tab2DTemplate<T> & tab2DTemplate<T>::operator+=(const T d)
{
    for(int i = 0;i<nbLigne*nbColonne;i++){
        tab[i] += d;
    }
    return *this;
}

template <typename T>
tab2DTemplate<T> operator+(const tab2DTemplate<T> &t1 , const tab2DTemplate<T> &t2){
    if(t1.nbColonne == t2.nbColonne && t1.nbLigne==t2.nbLigne){
        tab2DTemplate<T> t3(t1.nbColonne,t1.nbLigne);
        int i =0;
        for(i =0;i<(t3.nbColonne*t3.nbLigne);i++){
            t3.tab[i] = t1.tab[i] + t2.tab[i];
        }
        return t3;
    }
    else {
        cout << "Les 2 tableaux ne font pas la même taille" << endl;
        return NULL;
    }
}

template <typename T>
ostream &operator <<(std::ostream &out,const tab2DTemplate<T> &t)
{
    for(int i=0; i<t.nbLigne;i++){
        for(int j=0;j<t.nbColonne;j++){
            out << t.tab[i * t.nbColonne + j] << " " ;
        }
        out << endl;
    }
    out << endl;
    return out;
}

#endif // TAB2DTEMPLATE_H_INCLUDED
