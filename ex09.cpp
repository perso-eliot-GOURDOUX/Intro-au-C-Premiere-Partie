#include <iostream>
#include <string>  // Inclure la bibliothèque pour utiliser std::string

using namespace std;

// Définition de la structure Personne
struct Personne {
    string nom;
    int age;
};

int main() {
    // Déclaration et initialisation d'une variable de type Personne
    Personne personne1;
    personne1.nom = "Jean";
    personne1.age = 30;

    // Affichage des valeurs des membres de la structure
    cout << "Nom de la personne : " << personne1.nom << endl;
    cout << "Âge de la personne : " << personne1.age << " ans" << endl;

    return 0;
}
