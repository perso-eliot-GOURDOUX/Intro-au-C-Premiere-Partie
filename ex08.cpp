#include <iostream>
#include <memory>

using namespace std;

void modifier(int *pointeur) {
    *pointeur = 21;
}

void afficher(int *pointeur) {
    cout << "La valeur de la variable entier est : " << *pointeur << endl;
}

int main() {
    int entier = 42;
    int *pointeur;

    pointeur = &entier;

    afficher(pointeur);
    modifier(&entier);
    afficher(pointeur);
    return 0;
}
