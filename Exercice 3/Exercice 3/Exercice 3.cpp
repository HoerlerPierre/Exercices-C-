#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // cha�ne de caract�res
    char* str = new char[100]; 

    cout << "Entrez une chaine de caracteres ou un mot : ";
    cin.getline(str, 100); 

    // affichage des caract�res un par un avec leur adresse
    cout << "affichage caractere et memoire :" << endl;
    for (int i = 0; i < strlen(str); i++) {
        cout << "Caractere : " << str[i] << " // Adresse : " << (void*)&str[i] << endl;
    }

    // lib�ration de la m�moire
    delete[] str;

    return 0;
}
