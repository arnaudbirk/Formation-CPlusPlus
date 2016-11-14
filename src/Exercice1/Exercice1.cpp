#include <iostream>
#include <string>
#include <vector>

int main()
{

    std::cout << "Saisissez votre valeur  : " << std::endl;

    int valeur;

    std::cin >> valeur;

    bool ok = false;

    do
    {
        if (valeur > 0 && valeur < 10) {
            std::cout << "Ok la valeur est dans le bon interval" << std::endl;
            ok = true;
        }
        else {
            std::cout << "Nok la valeur n'est pas dans le bon interval" << std::endl;
            std::cout << "Saisissez une nouvelle valeur  : " << std::endl;
            std::cin >> valeur;
        }
    } while (!ok);

    int resultat = valeur % 3;

    std::cout << "Le resultat de " << valeur << "%3 est : " << resultat << std::endl;
}

