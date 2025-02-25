#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // chaîne de caractères
    char* str = new char[100]; 

    cout << "Entrez une chaine de caracteres ou un mot : ";
    cin.getline(str, 100); 

    // affichage des caractères un par un avec leur adresse
    cout << "affichage caractere et memoire :" << endl;
    for (int i = 0; i < strlen(str); i++) {
        cout << "Caractere : " << str[i] << " // Adresse : " << (void*)&str[i] << endl;
    }

    // libération de la mémoire
    delete[] str;

    return 0;
}
