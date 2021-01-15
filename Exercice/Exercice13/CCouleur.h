#ifndef CCOULEUR_H_INCLUDED
#define CCOULEUR_H_INCLUDED

class CCouleur
{
    private:
        short R,V,B;

    public:
        CCouleur(short r=0,short v=0,short b=0):R(r),V(v),B(b){};
        ~CCouleur(){};

};

#endif // CCOULEUR_H_INCLUDED
