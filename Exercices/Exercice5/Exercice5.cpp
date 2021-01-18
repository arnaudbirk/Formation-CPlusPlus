/*#include<iostream>
using namespace std;

void swap_pointeur(int *pa, int *pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void swap_valeur(int a, int b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}

void swap_reference(int &ra, int &rb){
    int tmp;
    tmp=ra;
    ra=rb;
    rb=tmp;
}

int main()
{
    int a, b;
    cout << "Saisissez un entier : ";
    cin >> a;
    cout << "Saisissez un autre entier : ";
    cin >> b;
    cout << "Vous avez saisi : " << a << " " << b << endl;
    swap_valeur(a,b);
    cout << "Apres swap par valeur : " << a << " " << b << endl;
    swap_reference(a,b);
    cout << "Apres swap par pointeur : " << a << " " << b << endl;
    swap_pointeur(&a,&b);
    cout << "Apres swap par reference : " << a << " " << b << endl;
    return 0;
}*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void sauvegardeTableau(string tab[] , int taille){
    ofstream fout("tab.txt"); //on crée un flux de sortie fout vers le fichier tab.txt
    if(!fout){
        cout << "Pb à l'ouverture";
        return;
    }
    fout << taille << endl;
    for(int i=0; i<taille; i++){
        fout << tab[i] << endl;
    }
}

void lireFichier(){
    ifstream fin("tab.txt");
    string ligne;

    while(getline(fin,ligne)){
      std::cout << ligne << std::endl;
    }
}

int main()
{
    string tab[3] = {"titi", "tutu", "toto"};

    sauvegardeTableau(tab, 3);
    lireFichier();

    return 0;
}
