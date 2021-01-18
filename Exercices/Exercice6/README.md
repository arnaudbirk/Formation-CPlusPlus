# Exercice 6

* Créez un nouveau projet date et créez une classe Date qui contiendra
trois données membres entières (jour, mois et année) et une donnée membre
statique qui est le tableau du nombre de jours par mois

``` c++
class Date{
static const int nbJoursParMois [];
...
};
//Dans le cpp :
const int Date::nbJoursParMois [] = {0, 31, 28, 31, 30, 31, 30,31, 31,30, 31, 30, 31};
```

* Une méthode setDate(...) qui change la date en cours si la date passée en paramètre (jour,mois, année) est valide (année comprise entre 1900 et 2100,
mois compris entre 1 et 12, jour compris entre 1 et m_nbJoursParMois[mois]), sinon ne fait rien.
* Un constructeur qui prend 3 entiers (jour, mois, année) qui crée une Date à partir des paramètres si ceux-ci sont valides, sinon initialise la date au 01/01/1900.
* Une fonction ```affiche ()``` qui affiche la date sous forme jj/mm/aaa
