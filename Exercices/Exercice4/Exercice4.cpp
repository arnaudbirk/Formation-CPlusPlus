#include <iostream>
#include <string>
#include <vector>

enum SEXE {MASCULIN,FEMININ};

struct Personne {
    int age;
    std::string nom, prenom;
    SEXE sexe;

};

Personne ajouterPersonne() {
    std::cout << "j'ajoute une personne" << std::endl;
    int age;
    std::string nom, prenom;
    std::string sexe_str;
    SEXE s;

    std::cout << "Indiquez l'age" << std::endl;
    std::cin >> age;
    std::cout << "Indiquez le nom" << std::endl;
    std::cin >> nom;
    std::cout << "Indiquez le prenom" << std::endl;
    std::cin >> prenom;

    bool isOk= false;
    do{
        std::cout << "Indiquez le sexe (M ou F)" << std::endl;
        std::cin >> sexe_str;

        if (sexe_str == "M"){
            s = SEXE::MASCULIN;
            isOk = true;
        }else if (sexe_str == "F"){
            s = SEXE::FEMININ;
            isOk = true;
        }else {
            std::cout << "Erreur sur le sexe" << std::endl;
        }
    }while(!isOk);

    Personne p = { age,nom,prenom,s };
    return p;
}

void afficherPersonne(std::vector<Personne> v) {
    std::cout << "Index de la personne a afficher" << std::endl;

    unsigned int index;
    std::cin >> index;

    if (index > v.size()-1) {
        std::cout << "Erreur l'index est trop grand !!! " << std::endl;
        return;
    }

    Personne p = v.at(index);
    std::cout << "Nom : " << p.nom << std::endl;
    std::cout << "Prenom : " << p.prenom << std::endl;
    std::cout << "Age : " << p.age << std::endl;
    std::cout << "Sexe : " << p.sexe << std::endl;
}

void afficherToutePersonne(std::vector<Personne> v){
    for(unsigned int i=0;i<v.size();i++){
        std::cout << "*** Personne " << i << " ***" << std::endl;
        Personne p = v.at(i);
        std::cout << "Nom : " << p.nom << std::endl;
        std::cout << "Prenom : " << p.prenom << std::endl;
        std::cout << "Age : " << p.age << std::endl;
        std::cout << "Sexe : " << p.sexe << std::endl << std::endl;
    }
}

int supprimerPersonne(std::vector<Personne> v) {

    bool isOk = false;
    unsigned int index;
    std::cout << "Indiquez l'index de la personne a supprimer" << std::endl;

    do{
        std::cin >> index;

        if (index > v.size()-1) {
            std::cout << "Erreur l'index est trop grand !!! " << std::endl;
        }else{
            isOk = true;
        }
    }while(!isOk);

    return index;
}

void help() {
    std::cout << std::endl << "MENU : " << std::endl;
    std::cout << "1 - Ajouter une personne" << std::endl;
    std::cout << "2 - Afficher une personne" << std::endl;
    std::cout << "3 - Afficher toutes les peronnes" << std::endl;
    std::cout << "4 - Supprimer une personne" << std::endl;
    std::cout << "5 - Afficher l'aide" << std::endl;
    std::cout << "6 - Quitter le programme" << std::endl;
}


int main()
{
    help();

    std::vector<Personne> personnes;

    //Initialisation de quelques personnes dans le vector
    Personne p1;
    p1.age=12;
    p1.nom="riri";
    p1.prenom="riri";
    p1.sexe=SEXE::MASCULIN;
    Personne p2;
    p2.age=13;
    p2.nom="fifi";
    p2.prenom="fifi";
    p2.sexe=SEXE::FEMININ;
    Personne p3;
    p3.age=11;
    p3.nom="loulou";
    p3.prenom="loulou";
    p3.sexe=SEXE::MASCULIN;

    personnes.push_back(p1);
    personnes.push_back(p2);
    personnes.push_back(p3);

    do{
        int choix;

        std::cout << std::endl << "Choisissez une option : " << std::endl;
        std::cin >> choix;

        //Remarque:Il n'est pas possible de déclarer une variable sans l'entourer d'accolades car la déclaration d'une variable se fait dans un bloc d'une portée précisée par des accolades.
        //Ici, dans un case, la portée est celle du switch. Or un case par définition signifie que le programme ne passera peut être pas par cette déclaration
        switch (choix) {
        case 1:
            {
                Personne p = ajouterPersonne();
                personnes.push_back(p);
            }
            break;
        case 2:
            afficherPersonne(personnes);
            break;
        case 3:
            afficherToutePersonne(personnes);
            break;
        case 4:
            {
                int index = supprimerPersonne(personnes);
                personnes.erase(personnes.begin() + index);
            }
            break;
        case 5:
            help();
            break;
        case 6:
            return EXIT_SUCCESS;
            break;
        default:
            std::cout << "Valeur en dehors de la plage" << std::endl;
        }
    }while(true);

    std::cout << "Nombre de personne dans le vector : " << personnes.size() << std::endl;

    return 0;
}
