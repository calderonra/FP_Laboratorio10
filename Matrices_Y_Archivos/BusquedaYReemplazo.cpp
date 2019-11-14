#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string contenido;
	string buscar;      // texto a buscar
	string reemplazar;  // reemplazar por

	//ingresa textos
	cout << "Ingrese el nombre del usuario a buscar: ";
	cin >> buscar;
	cout << "Ingrese la nueva edad del usuario: ";
	cin >> reemplazar;



	ifstream fs("nombre.txt"); //leer de este archivo
	ofstream fstemp("nombretemp.txt"); //escribir en este archivo
  
	if(!fs || !fstemp){//no se pudo abrir alguno de los 2
		cout << "Error al abrir el archivo!" << endl;
	}
	//modificar linea a linea
	while(!fs.eof()){
		string nombre,apellido,edad;
		//Aqui leo en el archivo los 3 valores que tiene escritos en el y cada
		//valor se lo asigno a una variable declarada arriba
		fs >> nombre >> apellido >> edad;
		
		//aqui comparo la variable nombre que contiene la primera palabra de cada
		//linea en nuestro txt con la variable que el usurio me pidio buscar
		if(nombre == buscar){  //se encontro
			//aqui solo reemplazo la edad
		  edad = reemplazar; //reemplazar
		}
		//escribo en un archivo temporal  los datos 
		fstemp << nombre <<" "<< apellido<<" " <<edad << endl;
	}

  //reemplazar un archivo por otro
  fs.close();
  fstemp.close();
  remove("nombre.txt");                    // borrar el original
  rename("nombretemp.txt", "nombre.txt");  // renombrar el temporal

  cout << "El archivo se modifico correctamente" << endl;
 
}