#include "vecteur3d.h"
#include <iostream>

vecteur3d::vecteur3d() {
    this->m_x = 0;
    this->m_y = 0;
    this->m_z = 0;
}

vecteur3d::vecteur3d(float nX, float nY, float nZ) {
    this->m_x = nX;
    this->m_y = nY;
    this->m_z = nZ;
}

vecteur3d::vecteur3d(int n_X, int n_Y, int n_Z) {
    this->m_x = n_X;
    this->m_y = n_Y;
    this->m_z = n_Z;
}

bool vecteur3d::coincideVal(vecteur3d vect) {
    if (this->m_x == vect.m_x && this->m_y == vect.m_y && this->m_z == vect.m_z) {
        return true;
    }

    return false;
}

bool vecteur3d::coincideAddr(vecteur3d* vect) {
    if (this->m_x == vect->m_x && this->m_y == vect->m_y && this->m_z == vect->m_z) {
        return true;
    }

    return false;
}

bool vecteur3d::coincideRef(vecteur3d& vect) {
    if (this->m_x == vect.m_x && this->m_y == vect.m_y && this->m_z == vect.m_z) {
        return true;
    }

    return false;
}


vecteur3d vecteur3d::norMaxVal(vecteur3d vect) {
    //    Déclaration des normes
    float res1 = (this->m_x * this->m_x) + (this->m_y * this->m_y) + (this->m_z * this->m_z);
    float res2 = (vect.m_x * vect.m_x) + (vect.m_y * vect.m_y) + (vect.m_z * vect.m_z);

   
    if (res1 > res2)
        return *this;
    else
        return vect;
}

vecteur3d vecteur3d::norMaxAddr(vecteur3d* vect) {
    //    Déclaration des normes
    float res1 = (this->m_x * this->m_x) + (this->m_y * this->m_y) + (this->m_z * this->m_z);
    float res2 = (vect->m_x * vect->m_x) + (vect->m_y * vect->m_y) + (vect->m_z * vect->m_z);

    //    Comparer les deux normes
    if (res1 > res2)
        return *this;
    else
        return *vect;
}

vecteur3d vecteur3d::norMaxRef(vecteur3d& vect) {
    //    Déclaration des normes
    float res1 = (this->m_x * this->m_x) + (this->m_y * this->m_y) + (this->m_z * this->m_z);
    float res2 = (vect.m_x * vect.m_x) + (vect.m_y * vect.m_y) + (vect.m_z * vect.m_z);

    
    if (res1 > res2)
        return *this;
    else
        return vect;
}
