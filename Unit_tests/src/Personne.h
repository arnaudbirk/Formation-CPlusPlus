#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>

class Personne
{
protected:
    int age;
    std::string nom;
    std::string prenom;
public:
    Personne(int a, std::string n, std::string p);

    void setAge(int a);
    int getAge();

    void setNom(std::string n);
    std::string getNom();

    void setPrenom(std::string p);
    std::string getPrenom();
};

#endif // PERSONNE_H
