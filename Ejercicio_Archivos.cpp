#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int escribir_matrix()
{
    int cont_filas = 0;
    ifstream entrada("matrix.txt");
    if (!entrada)
        return -1;

    string space = " ";

    string s;

    while (getline(entrada, s))
    {
        for (size_t p = s.find(space); p != string::npos; p = s.find(space, p))
        {
            cont_filas++;
        }
        //cont_filas++;

        cout << cont_filas;
    }

    return 0;
}

int escribir_txt(string arr[2][2])
{

    ifstream entrada("matrix.txt");
    if (!entrada)
        return -1;

    ofstream salida("new_matrix.txt");
    if (!salida)
        return -2;

    string name = "";

    string line;
    string deleteline;

    while (getline(entrada, deleteline))
    {
        salida << line;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (salida.is_open())
            {
                name = arr[i][j];
                salida << name << " ";
            }
        }
        salida << endl;
    }
    return 0;
}

void mostrar()
{
    string line;
    ifstream text("new_matrix.txt");
    if (text.is_open())
    {
        while (getline(text, line))
        {
            cout << line << '\n';
        }
        if (text.eof())
        {
            cout << "Se ha terminado de leer. Fin del archivo";
        }

        text.close();
    }
    else
        cout << "No se puede abrir el archivo o no existe.";
}

int main()
{
    string matrix[2][2] = {{"1", "2"}, {"3", "4"}};
    escribir_txt(matrix);
    //escribir_matrix();
    mostrar();

    return 0;
}