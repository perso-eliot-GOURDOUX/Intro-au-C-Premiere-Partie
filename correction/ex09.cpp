#include <iostream>
#include <string>

using namespace std;

struct Personne {
    string nom;
    int age;
};

int main() {
    Personne personne1;
    personne1.nom = "Jean";
    personne1.age = 30;

    cout << "Nom de la personne : " << personne1.nom << endl;
    cout << "Âge de la personne : " << personne1.age << " ans" << endl;

    return 0;
}
