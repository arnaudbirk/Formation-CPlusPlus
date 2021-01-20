# Exercice 13

* Créez une classe CCoord qui permettra de stocker des coordonnées  (entier ).
  * Ecrivez le constructeur qui prendra 2 entiers en entrée avec une valeur de 0 par défaut
  * Ecrivez les getter et setter pour accéder aux données membres
* Créez une classe CCouleur qui permettra de stocker une couleur sous  forme de 3 entiers R, V et B.

Ces 2 classes ne définissant pas de fonctions autres que les constructeurs, destructeur, getter et setter, et ceux-ci étant d’une écriture simple, on peut choisir d’écrire la totalité du code dans les fichiers .h

* Créez une classe CForme qui contiendra les informations de base d’une forme géométrique : un nom, un tableau de coordonnées (CCoord) la constituant, une couleur (CCouleur) et un aspect (plein ou vide)
  * Ecrivez le constructeur et les getter/setter
  * Ajoutez à la classe 2 méthodes abstraites permettant de calculer l’aire de la forme et d’afficher ses caractéristiques.

* Créez ensuite par héritage, des classes permettant de gérer des polygones, des cercles et des rectangles : CPolygone, CCercle et CRectangle.
* Ecrivez  le code des méthodes afficher et aire pour chacune de ces classes.
* Dans la fonction main, créez les éléments suivants :
  * cercle tete centre (100,100,0) et rayon 300
  * cercle oeilgauche centre (170,170,0) et rayon 50
  * cercle oeildroit centre (280,170,0) et rayon 50
  * rectangle nez longueur 20 largeur 70
  * rectangle bouche longueur 80 largeur 20
  * polygone chapeau (480,150,0);(250,20,0); (30,150,0)
* Créez une classe CDessin qui contiendra un vecteur de forme graphique (CForme).
* Ajoutez à la classe une méthode pour ajouter une forme graphique au vecteur et une méthode pour appeler la méthode afficher sur chaque forme.

[Lien vers la correction](https://repl.it/@arnaudbirk/Exercice13#main.cpp)
