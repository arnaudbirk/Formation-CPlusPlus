#include "Personne.h"

Personne::Personne(int a, std::string n, std::string p):age(a),nom(n),prenom(p)
{

}

void Personne::setAge(int a){
    age = a;
}

int Personne::getAge(){
    return age;
}

void Personne::setNom(std::string n){
    nom = n;
}

std::string Personne::getNom(){
    return nom;
}

void Personne::setPrenom(std::string p){
    prenom = p;
}

std::string Personne::getPrenom(){
    return prenom;
}
