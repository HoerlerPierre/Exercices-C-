#include <iostream>
using namespace std;

int main() {
    // pointeurs pour stocker des virgules
    double* a1f;
    double* a2f;

    // alocation dinamique de la mémoire
    a1f = new double;

    a2f = new double;

    // affectation des valeurs
    *a1f = -45.78;
    *a2f = 67.98;

    // affichage des adresses et des valeurs
    cout << "Adresse de a1f : " << a1f << " - Valeur : " << *a1f << endl;
    cout << "Adresse de a2f : " << a2f << " - Valeur : " << *a2f << endl;

    // Libération de la mémoire des pointeurs pour éviter de surcharger
    delete a1f;
    delete a2f;

    return 0;
}
