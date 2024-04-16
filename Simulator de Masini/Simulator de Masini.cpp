// Simulator de Masini.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Masina {
private:
    std::string marca;
    std::string model;
    int vitezaMaxima;
    int vitezaCurenta;

public:
    // Constructor
    Masina(std::string marca, std::string model, int vitezaMaxima)
        : marca(marca), model(model), vitezaMaxima(vitezaMaxima), vitezaCurenta(0) {}

    // Metoda pentru accelerare
    void accelereaza(int viteza) {
        vitezaCurenta += viteza;
        if (vitezaCurenta > vitezaMaxima) {
            vitezaCurenta = vitezaMaxima;
        }
    }

    // Metoda pentru franare
    void franeaza() {
        vitezaCurenta = 0;
    }

    // Metoda pentru afisarea informatiilor despre masina
    void afiseazaInfo() {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Viteza maxima: " << vitezaMaxima << " km/h" << std::endl;
        std::cout << "Viteza curenta: " << vitezaCurenta << " km/h" << std::endl;
    }
};

int main() {
    // Exemplu de utilizare a clasei masina
    Masina masina("Bmw", "F10", 260);

    // Afisarea informatiilor initiale despre masina
    std::cout << "Informatii initiale despre masina:" << std::endl;
    masina.afiseazaInfo();

    // Accelerare si afisare informatiilor
    masina.accelereaza(160);
    std::cout << "\nDupa accelerare:" << std::endl;
    masina.afiseazaInfo();

    // Franare și afisare informatiilor
    masina.franeaza();
    std::cout << "\nDupa franare:" << std::endl;
    masina.afiseazaInfo();

    return 0;
}

