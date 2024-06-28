#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

enum class FormeType {
    RECTANGLE,
    CERCLE
};

class Forme {
    public:
        Forme(string Name, FormeType Type) : name(Name), type(Type) {}
        virtual double calculerAire() = 0;
        virtual string getName() const {
            return name;
        }
        virtual FormeType getType() const {
            return type;
        }
        string getFormeTypeName() {
            switch (type) {
                case FormeType::RECTANGLE:
                    return "Rectangle";
                case FormeType::CERCLE:
                    return "Cercle";
                default:
                    return "Unknown";
            }
        }
    private:
        const string name;
        const FormeType type;
};

class Rectangle : public Forme {
    public:
        Rectangle(string name, FormeType type, double l, double w) : Forme(name, type), longueur(l), largeur(w) {}

        double calculerAire() {
            return longueur * largeur;
        }
    private:
        double longueur;
        double largeur;
};

class Cercle : public Forme {
    public:
        Cercle(string name, FormeType type, double r) : Forme(name, type), rayon(r) {}
        Cercle(string name, FormeType type, double r, double _) : Forme(name, type), rayon(r) {}

        double calculerAire() {
            return 3.14 * rayon * rayon;
        }

    private:
        double rayon;
};

template<typename T>
void create_forme(vector<shared_ptr<Forme>>& formes, string name, FormeType type, double l, double w = 0.0) {
    formes.push_back(make_shared<T>(name, type, l, w));
}

int main() {
    vector<shared_ptr<Forme>> formes;

    create_forme<Rectangle>(formes, "Rectangle 1", FormeType::RECTANGLE, 5.0, 3.0);
    create_forme<Cercle>(formes, "Cercle 1", FormeType::CERCLE, 2);
    create_forme<Rectangle>(formes, "Rectangle 2", FormeType::RECTANGLE, 10.0, 5.0);

    for (const auto& forme : formes) {
        cout << "Nom de la forme : " << forme->getName() << endl;
        cout << "Type de la forme : " << forme->getFormeTypeName() << endl;
        cout << "Aire de la forme : " << forme->calculerAire() << endl;
        cout << endl;
    }

    return 0;
}