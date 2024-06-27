#include <iostream>
#include <string>

using namespace std;

// Définition de la classe Rectangle
class Rectangle {
private:
    const string name;
    double longueur;
    double largeur;

public:
    // Constructeur par défaut
    Rectangle() {
        longueur = 0.0;
        largeur = 0.0;
    }

    // Constructeur avec paramètres
    Rectangle(string name, double l, double w) : name(name), longueur(l), largeur(w) {}

    // Méthode pour calculer l'aire du rectangle
    double calculerAire() {
        return longueur * largeur;
    }

    // Méthode pour calculer le périmètre du rectangle
    double calculerPerimetre() {
        return 2 * (longueur + largeur);
    }
    string getName() const {
        return name;
    }
};

int main() {
    // Création d'un objet de la classe Rectangle
    Rectangle monRectangle("Jack", 5.0, 3.0);

    // Calcul et affichage de l'aire et du périmètre
    cout << "Nom du rectangle : " << monRectangle.getName() << endl;
    cout << "Aire du rectangle : " << monRectangle.calculerAire() << endl;
    cout << "Périmètre du rectangle : " << monRectangle.calculerPerimetre() << endl;


    return 0;
}
