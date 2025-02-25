#include <iostream>

using namespace std;

// fonction pour afficher un tableau sous forme i lignes x j colonnes
void affiche(int* tab, int i, int j) {
    for (int ligne = 0; ligne < i; ligne++) {
        for (int colonne = 0; colonne < j; colonne++) {
            cout << tab[ligne * j + colonne] << "\t"; 
        }
        cout << endl;
    }
}

int main() {
    // déclaration des tableaux et affichahe
    int tab1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
    int tab2[] = { -19, 18, -17, 16, -15, 14, -13, 12, -11, 10, -9, 8, -7, 6, -5, 4, -3, 2, -1, 0 };

    int lignes = 4, colonnes = 5; 

    cout << "Tableau 1 :" << endl;
    affiche(tab1, lignes, colonnes);

    cout << "\nTableau 2 :" << endl;
    affiche(tab2, lignes, colonnes);

    return 0;
}
