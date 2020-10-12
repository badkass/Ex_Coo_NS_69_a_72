#pragma once
class vecteur3d {
    //axes x-y-z

      //private
    float m_x, m_y, m_z;

public:

    //Constructeur sans paramètre
    vecteur3d();

    //Constructeurs
    vecteur3d(float nX = 0.0, float nY = 0.0, float nZ = 0.0);
    vecteur3d(int n_X = 0, int n_Y = 0, int n_Z = 0);


    //Exercice 70
    bool coincideVal(vecteur3d vect);
    bool coincideAddr(vecteur3d* vect);
    bool coincideRef(vecteur3d& vect);

    //Exercice 71
    vecteur3d norMaxVal(vecteur3d vect);
    vecteur3d norMaxAddr(vecteur3d* vect);
    vecteur3d norMaxRef(vecteur3d& vect);



};

