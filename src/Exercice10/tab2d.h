#ifndef TAB2D_H_INCLUDED
#define TAB2D_H_INCLUDED

#include <iostream>

class Tab2D{
    private:
        unsigned int nbColonne, nbLigne;
        double * tab;
        void alloue();
        void libere();
        void copie(const Tab2D &rhs);

    public:
        Tab2D(unsigned int col=0, unsigned int ligne=0);
        ~Tab2D();
        Tab2D( const Tab2D &source );

        Tab2D & operator =( const Tab2D &source );

        friend std::ostream& operator <<(std::ostream &out,const Tab2D &t);

        friend Tab2D operator+(const Tab2D &t1 , const Tab2D &t2);
        Tab2D &operator+=( const double d);

        double get(unsigned int col, unsigned int ligne);
        void set(unsigned int col, unsigned int ligne, double val);
        void affiche();
};

#endif // TAB2D_H_INCLUDED
