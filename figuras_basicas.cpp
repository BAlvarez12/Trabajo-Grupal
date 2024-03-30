#include <iostream>

using namespace std;


class Figura {
public:
    virtual void dibujar() const = 0;
};

class Cuadrado : public Figura {
private:
    int lado;
public:
    Cuadrado(int l) : lado(l) {}
    void dibujar() const override {
        for (int i = 0; i < lado; ++i) {
            for (int j = 0; j < lado; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

class Triangulo : public Figura {
private:
    int altura;
public:
    Triangulo(int h) : altura(h) {}
    void dibujar() const override {
        for (int i = 0; i < altura; ++i) {
            for (int j = 0; j <= i; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

class Circulo : public Figura {
private:
    int radio;
public:
    Circulo(int r) : radio(r) {}
    void dibujar() const override {
        for (int i = -radio; i <= radio; ++i) {
            for (int j = -radio; j <= radio; ++j) {
                if (i * i + j * j <= radio * radio) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
};

void figuras_basicas  () {
    Cuadrado cuadrado(5);
    Triangulo triangulo(7);
    Circulo circulo(7);

    cout << "Cuadrado:" << endl;
    cuadrado.dibujar();

    cout << "Tri�ngulo:" << endl;
    triangulo.dibujar();

    cout << "C�rculo:" << endl;
    circulo.dibujar();

    return;
}
