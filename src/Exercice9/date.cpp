#include "date.h"

const int Date :: nbJoursParMois [] = {0, 31, 28, 31, 30, 31, 30, 31, 31,30, 31, 30, 31};

 Date::Date(int j, int m, int a)
{
    if(!isValide(j,m,a)){
        j = 1;
        m = 1;
        a = 1900;
    }
    jour = j;
    mois = m;
    annee = a;
}

void Date::setDate(int j, int m, int a)
{
    if(isValide(j,m,a)){
        jour = j;
        mois = m;
        annee = a;
    }
}

bool Date::isValide(int j, int m, int a)
{
    if(a>=1900 && a <= 2100 && m >= 1 && m <= 12 && j >=1 && j <= nbJoursParMois[m]){
        return true;
    }
    return false;
}

void Date::affiche()
{
    std::cout << jour << "/" << mois << "/" << annee << std::endl;
}
