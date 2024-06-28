#include <iostream>
#include <string>

using namespace std;

class Rectangle {
    public:
        Rectangle() {
            longueur = 0.0;
            largeur = 0.0;
        }

        Rectangle(string name, double l, double w) : name(name), longueur(l), largeur(w) {}

        double calculerAire() {
            return longueur * largeur;
        }

        double calculerPerimetre() {
            return 2 * (longueur + largeur);
        }
        string getName() const {
            return name;
        }

    private:
        const string name;
        double longueur;
        double largeur;
};

int main() {
    Rectangle monRectangle("Jack", 5.0, 3.0);

    cout << "Nom du rectangle : " << monRectangle.getName() << endl;
    cout << "Aire du rectangle : " << monRectangle.calculerAire() << endl;
    cout << "Périmètre du rectangle : " << monRectangle.calculerPerimetre() << endl;


    return 0;
}
