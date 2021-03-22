# Exercice 22 (Pattern Composite)

En utilisant le pattern composite réalisez un programme qui va permettre de manipuler un ensemble de fichier et dossier comme un seul objet.

Votre porgramme sera constitué des classes suivantes :

* Une classe **FichierAbstrait** qui servira d'interface dont voici le contenu du header

``` c++
#ifndef FICHIER_ABSTRAIT_H
#define FICHIER_ABSTRAIT_H

#include <string>
#include <vector>

//un fichier de base
class FichierAbstrait
{
    static const int m_taille;

    protected:
      std::string m_nom;

    public:
      virtual int GetTaille() const;
      virtual void Afficher() const ;

       virtual ~FichierAbstrait() =0;
      FichierAbstrait(const std::string& nom);
};

#endif
```

* Une classe **Fichier** qui va implémenter l'interface FichierAbstrait
* Une classe Dossier qui va représenter un ensemble d'objet implémentant la classe **FichierAbstrait**

[Lien vers la correction](https://replit.com/@arnaudbirk/Exercice22#main.cpp)
