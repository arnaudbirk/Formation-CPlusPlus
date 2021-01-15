#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int getVecIndex(vector<double> vec,int i) {
        if(i>=vec.size())
            throw out_of_range("index hors du vecteur");
        else
            return vec[i];
}

int main()
{

    vector<double> vec5(5, 1.2); //on crée un tableau vec5 de 5 doubles initialisés à 1,2

    try
    {
        cout << getVecIndex(vec5,1) << endl;
    }
    catch(exception const& e)          // On rattrape les exceptions standards de tous types.
    {
        cerr << "ERREUR : "<< e.what() << endl;   // On affiche la description de l'erreur.
    }

    try
    {
        cout << getVecIndex(vec5,5) << endl;
    }
    catch(exception const& e)          // On rattrape les exceptions standards de tous types.
    {
        cerr << "ERREUR : "<< e.what() << endl;   // On affiche la description de l'erreur.
    }



    return 0;
}
