#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int sumarValor(int a, int b)
{
    int suma;
    a += b;
    suma = a;
    return suma;
}
void sumar(int &a, int b)
{
    a += b;
}
int main()
{
    int a, b, suma;

    cout << "Ingrese primer numero: " << endl;
    cin >> a;
    cout << "Ingrese segundo numero: " << endl;
    cin >> b;

    suma = sumarValor(a, b);
    cout << "La suma es: " << suma << endl;

    cout << "El valor de a: " << a << endl;

    sumar(a, b);

    cout << "La suma es: " << a << endl;
    cout << "El valor de a: " << a << endl;
    return 0;
}
