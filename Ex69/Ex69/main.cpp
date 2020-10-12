#include <iostream>
#include "vecteur3d.h"
using namespace std;

int main(int argc, const char* argv[]) {

    vecteur3d vect1(10, 9, 30);
    vecteur3d vect2(10, 9, 30);

    //    Exercice 70 

    //    Test en envoyant la variable simple vect2
    if (vect1.vecteur3d::coincideVal(vect2)) {
        cout << "Les points coincides" << endl;
    }
    else {
        cout << "les points ne coincides pas" << endl;
    }

    //    Test en envoyant l'adresse de la variable vect2
    if (vect1.vecteur3d::coincideAddr(&vect2)) {
        cout << "Les points coincides" << endl;
    }
    else {
        cout << "les points ne coincide pas" << endl;
    }

    //    Test en envoyant la variable en manipulant sa référence 
    if (vect1.vecteur3d::coincideRef(vect2)) {
        cout << "Les points coincides" << endl;
    }
    else {
        cout << "les points ne coincide pas" << endl;
    }

    //    Exercice 71 

    //    Définition du vecteur ayant les plus grandes norme 
    vecteur3d v1 = vect1.norMaxVal(vect2);

    vecteur3d v2 = vect1.norMaxAddr(&vect2);

    vecteur3d v3 = vect1.norMaxRef(vect2);

    return 0;

    // Exercice 73 

    //La  solution est de faire  de la classe 'point'  une  fonction  statique.
}
