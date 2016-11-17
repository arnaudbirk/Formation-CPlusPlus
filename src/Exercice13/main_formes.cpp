#include <iostream>
#include "CCoord.h"
#include "CCouleur.h"
#include "CCercle.h"
#include "CRectangle.h"
#include "CPolygone.h"
#include <vector>
#include "CDessin.h"

using namespace std;

int main()
{
    //création d'un cercle pour la tete
    CCoord centreTete(100,100);
    CCoord tabTete [1];
    tabTete[0] = centreTete;
    CCouleur colTete(10,10,10);

    CForme *cercleTete = new CCercle("tete",tabTete,colTete,false,300);

//création d'un cercle pour l'oeil gauche
    CCoord centreOeilG(170,170);
    CCoord tabOeilG [1];
    tabOeilG[0] = centreOeilG;
    CCouleur colOeilG(20,10,30);

    CForme *cercleOeilG = new CCercle("Oeil gauche",tabOeilG,colOeilG,true,50);

//création d'un cercle pour l'oeil droit
    CCoord centreOeilD(280,170);
    CCoord tabOeilD [1];
    tabOeilD[0] = centreOeilD;
    CCouleur colOeilD(20,10,30);

    CForme *cercleOeilD = new CCercle("Oeil droit",tabOeilD,colOeilD,true,50);

//création d'un rectangle pour le nez
    CCoord coinNez(220,200);
    CCoord tabNez [1];
    tabNez[0] = coinNez;
    CCouleur colNez(100,10,30);

    CForme *rectNez = new CRectangle("Nez",tabNez,colNez,true,20,70);

//création d'un rectangle pour la bouche
    CCoord coinBouche(170,220);
    CCoord tabBouche [1];
    tabBouche[0] = coinBouche;
    CCouleur colBouche(200,0,0);

    CForme *rectBouche = new CRectangle("Bouche",tabBouche,colBouche,true,80,20);

//création d'un polygone pour le chapeau
    CCoord chapeauPt1(480,150);
    CCoord chapeauPt2(250,20);
    CCoord chapeauPt3(30,150);
    CCoord tabChapeau [3];
    tabChapeau[0] = chapeauPt1;
    tabChapeau[1] = chapeauPt2;
    tabChapeau[2] = chapeauPt3;
    CCouleur colChapeau(0,255,0);

    CForme *polyChapeau = new CPolygone("Chapeau",3,tabChapeau,colChapeau,true);


//affichage sans la classe Dessin
/*
    cercleTete.affiche();
    cercleOeilG.affiche();
    cercleOeilD.affiche();
    rectNez.affiche();
    rectBouche.affiche();
    polyChapeau.affiche();

    cout << cercleTete.calculeAire()<< endl;
    cout << cercleOeilG.calculeAire()<< endl;
    cout << cercleOeilD.calculeAire()<< endl;
    cout << rectNez.calculeAire()<< endl;
    cout << rectBouche.calculeAire()<< endl;
    cout << polyChapeau.calculeAire()<< endl;

    */

//affichage avec la classe CDessin et un vecteur de CForme
    CDessin dessin;
   dessin.addCForme(*cercleTete);
    dessin.addCForme(*rectNez);
   dessin.addCForme(*polyChapeau);

   dessin.addCForme2(cercleOeilD);
   dessin.addCForme2(rectBouche);

   dessin.affiche();
   dessin.afficheAire();

    return 0;
}
