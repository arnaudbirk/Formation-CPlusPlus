# Exercice 18

Exercice 1:

Un exercice sur les shared_ptr. 

Imaginons une cagnotte partagée par des agents. Chaque agent peut ajouter à la cagnotte (par exemple chacun ajoute 10). On voudrait connaitre le montant final. 

On peut résoudre cet exercice de plusieurs méthode. Ce que l'on veut ici c'est voir 2 classes (Cagnotte et Agent), et un shared_ptr pour la cagnotte partagé entre les agents.

[Lien vers la correction](https://replit.com/@alavenant/sharedptr#main.cpp)

Exercice 2:

Dans cet exercice, nous allons créer notre propre shared_ptr.

Notre pointeur intéligent "my_shared_ptr" devra être capable :
* De gérer n'importe quel type d'objet
* De partager l'objet pointé entre plusieurs "my_shared_ptr" (maintient d'un compteur d'utilisation)
* De détruire l'objet pointé lors de la dernière utilisation
* Avoir accès à l'objet pointé comme pour un pointeur (opérateur -> et *)
* Avoir un constructeur de copie
* Avoir un opérateur d'assignement (=)

Et s'il on veut :
* Avoir un accès au compteur de l'objet

[Lien vers la correction](https://repl.it/@alavenant/Exercice18#main.cpp)
