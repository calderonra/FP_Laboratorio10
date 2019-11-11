#include <iostream>
#include <string.h>

using namespace std;

void rellenar(string name, string arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == " ")
            {
                arr[i][j] = name;
            }
        }
        break;
    }
}

void mostrar(string arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void deleted(int n, int m, string arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == n && j == m)
            {
                arr[i][j] = " ";
            }
        }
    }
}

int main()
{

    string matrix[5][5] = {{"a", "b", "c", "d", "e"},
                           {"1", "2", "3", "4", "5"},
                           {"f", "g", "h", "i", "j"},
                           {"6", "7", "c", "d", "9"},
                           {"k", "l", "m", "n", "o"}};
    string nombre = "Pepe";
    //rellenar(nombre, matrix);
    deleted(2, 2, matrix);
    mostrar(matrix);

    return 0;
}