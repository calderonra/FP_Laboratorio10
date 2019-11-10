#include <iostream>
#include <string.h>
using namespace std;

void menu()
{
    cout << "1-llenar matriz" << endl;
    cout << "2-buscar matriz" << endl;
    cout << "3-reemplazar matriz" << endl;
    cout << "4-Mostras matriz" << endl;
}

void llenarMatriz(string matrix[5][5])
{
    cout << "Ingrese los valores con los que se llenara la matriz: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void mostrarMatriz(string matrix[5][5])
{

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cout << "[" << i << "][" << j << "]= ";
        }
    }
}

int main()
{

    int x = 0;
    string matrix[5][5] = {};

    while (x != 5)
    {
        menu();
        cin >> x;
        switch (x)
        {
        case 1:
            llenarMatriz(matrix);
            break;
        case 4:
            mostrarMatriz(matrix);
            break;
        }
    }

    return 0;
}