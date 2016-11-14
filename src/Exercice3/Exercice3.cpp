#include <iostream>
#include <stdlib.h>

using namespace std;

const int TAILLE = 10;


void afficheTableau(int t[]){
    for(int i=0;i< TAILLE;i++){
        cout << "Valeur : " << t[i] << endl;
    }
}
void rempliTableau(int t[]){
    for(int i=0;i< TAILLE;i++){
        t[i]=rand();
    }
}

int main(int argc, char *argv[])
{
    int tableau[TAILLE];
    rempliTableau(tableau);
    afficheTableau(tableau);
}
