#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // tableau pour 6 entiers dinamique
    int* adr_deb = new int[6];

    cout << "Entrez 6 entiers :" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> adr_deb[i];
    }

    // tri du tableau dans l'ordre croissant
    sort(adr_deb, adr_deb + 6);


    int max_val = adr_deb[5]; 
    int* max_addr = &adr_deb[5]; 
    int max_pos = 5;

    // affichage résultats
    cout << "Tableau trie : ";
    for (int i = 0; i < 6; i++) {
        cout << adr_deb[i] << " ";
    }
    cout << endl;

    cout << "Maximum : " << max_val << endl;
    cout << "Adresse du maximum : " << max_addr << endl;
    cout << "Position dans le tableau trie : " << max_pos << endl;

    // libération de la mémoire
    delete[] adr_deb;

    return 0;
}
