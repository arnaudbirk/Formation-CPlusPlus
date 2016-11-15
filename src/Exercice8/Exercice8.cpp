#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void sauvegardeTableau(int tab[] , int taille){
    ofstream fout("tab.txt"); //on crée un flux de sortie fout vers le fichier tab.txt
    if(!fout){
        cout << "Pbl à l'ouverture";
        return;
    }
    fout << taille << endl;
    for(int i=0; i<taille; i++){
        fout << tab[i] << endl;
    }
}

int* lireFichier(){
    ifstream fin("tab.txt");
    string ligne;
    getline(fin,ligne);//on récupère la valeur de la première ligne dans ligne

    // convertion de ligne en un int
    istringstream iss( ligne );
    int nombre;
    iss >> nombre;

    int * tab = new int[nombre]; //on crée un tableau de la bonne taille

    int i = 0;

    while(getline(fin,ligne)){
        // convertion en un int
        istringstream iss( ligne );
        int nombre;
        iss >> nombre;
        tab[i++] = nombre;
    }
    return tab;

}

void sauvegardeTableauBinaire(int tab[], int taille){
    ofstream fout("tabBin.txt", ios::binary);
    if(!fout){
        cout << "Pbl à l'ouverture";
        return;
    }
    fout.write((char*)&taille, sizeof(taille));
    for(int i=0; i<taille; i++){
        fout.write((char*)&tab[i], sizeof(tab[i]));
    }

}

int* lireFichierBinaire(){
    ifstream fin("tabBin.txt", ios::binary);
    int nb;
    fin.read((char*)&nb, sizeof(nb));

    int * tab = new int[nb]; //on crée un tableau de la bonne taille

    int i = 0;
    while(!fin.eof()){
        cout << "ligne " << i << " ";
        fin.read((char*)&nb, sizeof(nb));
        tab[i++] = nb;
        cout << nb << endl;
        cout << fin.eof() << endl;
    }

    return tab;
}

int main()
{
    int tab[3] = {1,2,3};

    sauvegardeTableau(tab,3);

    int * tableau = lireFichier();
    for (int i = 0; i<3;i++){
        cout << tableau[i] << " " ;
    }
    cout << endl;

    sauvegardeTableauBinaire(tab,3);
    int * tableau2 = lireFichierBinaire();
    for (int i = 0; i<10;i++){
        cout << tableau2[i] << " " ;
    }
    cout << endl;

    delete [] tableau;
    return 0;
}
