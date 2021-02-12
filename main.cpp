using namespace std;

#include <iostream>

#include "funzioni.h"

int main() {
    int numero1, numero2, numero3;

    cout << "Inserire primo numero:";
    cin >> numero1;

    cout << "Inserire secondo numero:";
    cin >> numero2;

    cout << "Inserire terzo numero:";
    cin >> numero3;

    diminuireMaxDiMin(&numero1, &numero2, &numero3);

    cout << "Il primo numero vale:" << numero1 << endl;
    cout << "Il secondo numero vale:" << numero2 << endl;
    cout << "Il terzo numero vale:" << numero3 << endl;

    return 0;
}
