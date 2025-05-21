#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

double a, b, c;

void getValues(){
    cout << "Digite o valor de 'a'\n";
    cin >> a;

    cout << "Digite o valor de 'b'\n";
    cin >> b;

    cout << "Digite o valor de 'c'\n";
    cin >> c;
}

int calc() {
    double raiz = sqrt(b*b - 4 * a * c);
    
    if (isnan(raiz)) {
        cout << "Raiz invalida.";
        return 0;
    }

    double x1 = (-b + raiz) / 2*a;
    double x2 = (-b - raiz) / 2*a;

    cout << "x1: " << x1 << "\n";
    cout << "x2: " << x2;
    return 0;
}

int main(){
    getValues();
    calc();

    return 0;
}