#include <iostream>
#include <string>
#include <vector>

int main()
{
    for (int i = 0;i < 10;i++) {
        switch (i)
        {
        case 3:
            std::cout << "Valeur de i = 3" << std::endl;
            break;
        case 5:
            std::cout << "Valeur de i = 5" << std::endl;
            break;
        case 8:
            std::cout << "Valeur de i = 8" << std::endl;
            break;
        default:
            std::cout << "Valeur de i en dehors des valeurs 3,5 et 8" << std::endl;
        }
    }
}

