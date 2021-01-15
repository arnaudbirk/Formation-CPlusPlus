#include <iostream>

using namespace std;

//création de la structure
struct Tab
{
    int taille;
    int* tableau;
};


void ajouterValeur(Tab & tab){
    //on demande à 'utilisateur la valeur qu'il veut ajouter
    int val;
    cout << "Quelle valeur d'entier voulez vous ajoutez ? " << endl;
    cin >> val;

    //on crée un nouveau tableau pour stocker la valeur en plus
    int * temp = new int [tab.taille + 1];
    //on copie le tableau initial dans le nouveau
    for(int i=0;i<tab.taille;i++){
        temp[i]= tab.tableau[i];
    }
    //puis on ajoute la nouvelle valeur
    temp[tab.taille]=val;

    //on supprime le pointeur vers l'ancien tableau
    delete [] tab.tableau;
    //et on stocke dans la structure le pointeur vers le nouveau tableau
    tab.tableau = temp;
    tab.taille ++;

}

void retirerValeur(Tab & tab){
    //si taille n'existe pas
    if(tab.taille==0){
        cout << "Il n'y a rien à retirer du tableau\n";
        return;
    }
    //s'il n'y a qu'un seul élément
    else if(tab.taille == 1){
        cout << "Il n'y avait plus qu'un seul élément à enlever, le tableau est donc vide" << endl;
        delete [] tab.tableau;
        tab.taille = 0;
        return;
    }

    //on demande à 'utilisateur quel élément il veut enlever
    int index;
    cout << "Quelle élément voulez vous enlevez? " << endl;
    cin >> index;
    //si le nombre ne correspond pas à un élément du tableau
    while(index <= 0 || index > tab.taille)
    {
        cout << "Cette valeur ne convient pas. Recommencez: ";
        cin >> index;
    }

    //on crée un nouveau tableau à la bonne taille
    int * temp = new int [tab.taille - 1];

    //et on y recopie l'ancien en enlevant la valeur à l'index
    for(int i = 0, k = 0; i < tab.taille; i++)
        if(i != index-1){
            temp[k++] = tab.tableau[i]; //k est incrémenté après avoir été utilisé
        }
    //on supprime le pointeur vers l'ancien tableau
    delete [] tab.tableau;
    //et on stocke dans la structure le pointeur vers le nouveau tableau
    tab.tableau = temp;
    tab.taille --;

}

void afficher(Tab & tab){
    cout << "Le tableau a pour valeur ";
    for(int i = 0; i<tab.taille; i++){
        cout << tab.tableau[i] << " ";
    }
    cout << endl ;
}

int main()
{
    Tab tab;
    tab.taille = 0;
    tab.tableau = new int[0];

    int choix;
    do
    {
        cout << "1: ajouter une valeur" << endl;
        cout << "2: retirer une valeur" << endl;
        cout << "3: afficher le tableau" << endl;
        cout << "4: quitter" << endl;
        cin >> choix;

        switch(choix)
        {
            case 1:
                ajouterValeur(tab);
                break;
            case 2:
                retirerValeur(tab);
                break;
            case 3:
                afficher(tab);
                break;
            default:
                break;
        }

    } while(choix != 4);

    delete [] tab.tableau;
    return 0;
}
