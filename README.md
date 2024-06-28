# Intro-au-C-

Bienvenue dans ce cours d'introduction au langage de programmation C++ ! Ce cours est conçu pour vous familiariser avec les concepts de base du C++ à travers une série de 10 exercices pratiques.
Objectif du Cours

Le but de ce cours est de vous donner une compréhension fondamentale du C++ et de ses principales fonctionnalités. À la fin de ce cours, vous devriez être capable d'écrire des programmes simples en C++ en utilisant des concepts tels que les variables, les types de données, les opérations arithmétiques, les structures de contrôle, les boucles, les fonctions, les tableaux, les pointeurs, les structures et la programmation orientée objet.
Exercices

lancer le scrypt start_project.sh pour créer les fichiers de base pour chaque exercice ainsi que le Makefile.

```bash
bash start_project.sh
```

Utilisé make pour compiler tous les exercices et les lancers, utiliser make ex1 pour compiler et lancer l'exercice 1, make ex2 pour l'exercice 2, etc. Utilisé make clean pour supprimer les fichiers compilés.

### Exercice 1 : Bonjour le Monde

__Objectif__ : Apprendre à écrire et exécuter un programme simple en C++.

__Instruction__ : Écrire un programme qui affiche "Bonjour le Monde" à l'écran.
### Exercice 2 : Variables et Types de Données

__Objectif__ : Comprendre les variables et les types de données de base.

__Instruction__ : Déclarer et initialiser des variables de type entier, flottant, caractère et booléen. Afficher leurs valeurs.
### Exercice 3 : Opérations de Base

__Objectif__ : Apprendre les opérations arithmétiques de base.

__Instruction__ : Écrire un programme qui lit deux nombres entiers et affiche leur somme, différence, produit et quotient.
### Exercice 4 : Structures de Contrôle

__Objectif__ : Comprendre les structures de contrôle (if, else, switch).

__Instruction__ : Écrire un programme qui lit un nombre entier en argument et affiche s'il est positif, négatif ou nul.
### Exercice 5 : Boucles

__Objectif__ : Apprendre à utiliser les boucles (for, while, do-while).

__Instruction__ : Écrire un programme qui affiche les nombres de 1 à 10 en utilisant une boucle for.
### Exercice 6 : Fonctions

__Objectif__ : Comprendre les fonctions et leur utilisation.

__Instruction__ : Écrire une fonction qui prend deux entiers en paramètres et retourne leur somme. Appeler cette fonction depuis la fonction main.
### Exercice 7 : Tableaux

__Objectif__ : Apprendre à utiliser les tableaux.

__Instruction__ : Déclarer un tableau de 5 entiers, initialiser-le avec des valeurs et afficher ces valeurs.
### Exercice 8 : Pointeurs

__Objectif__ : Comprendre les pointeurs et leur utilisation.

__Instruction__ : Déclarer un pointeur sur entier, affecter-lui l'adresse d'une variable entière, faite une fonction qui modifie sa valeur et qui affiche la valeur de cette variable en utilisant le pointeur.
### Exercice 9 : Structures

__Objectif__ : Apprendre à utiliser les structures.

__Instruction__ : Définir une structure pour représenter une personne (nom, âge). Déclarer une variable de cette structure et initialiser ses membres. Afficher les valeurs des membres.
### Exercice 10 : Classes et Objets

__Objectif__ : Comprendre les bases de la programmation orientée objet.

__Instruction__ : Définir une classe "Rectangle" avec des attributs pour la longueur et la largeur, et des méthodes pour calculer l'aire et le périmètre. Créer un objet de cette classe et afficher l'aire et le périmètre.

### Exercice 11 : Héritage de Classe

__Objectif__ : Comprendre les Héritage et Intérface, enum et templates

__Instruction__ : Définir une classe "Forme" qui aura ses fonctions en virtuel pure, les fonctions de calcul d'aire 

```cpp
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
```

Ce README vous guide à travers les bases du C++ avec des exercices pratiques pour chaque concept clé. Bonne programmation !