#include <iostream>
#include <cstdlib> //pour rand()
#include <ctime>   //pour time()
#include <vector>
#include <algorithm>


using namespace std;

class Generer{
  public:
    int operator()() const
    {
        return rand() % 10;  //On renvoie un nombre entre 0 et 9
    }
};

class Sommer
{
    private:
        int somme;

    public:
        Sommer():somme(0){}
        void operator()(int n){somme += n; }
        int getSomme() const {return somme; }
};

int main()
{
    srand(time(0));

    vector<int> tab(100,-1); //Un tableau de 100 cases

    Generer genere;
    generate(tab.begin(), tab.end(), genere);      	   //On génère les nombres aléatoires entre 0 et 9

    //on aurait pu remplacer le 2 lignes précédentes par
    //generate(tab.begin(), tab.end(), Generer());

    int const compteur = count(tab.begin(), tab.end(), 5);   //Et on compte les occurrences du 5

    cout << "Il y a " << compteur << " elements valant 5." << endl;

    Sommer foncteurSomme;

    foncteurSomme = for_each(tab.begin(), tab.end(), foncteurSomme);

    cout << "La somme des elements vaut " << foncteurSomme.getSomme() << endl;

    return 0;
}
