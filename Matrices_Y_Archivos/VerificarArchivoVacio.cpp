#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream miTXT ("vacio.txt");


bool is_vacio(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

int main(){

    cout<<is_vacio(miTXT)<<endl;
    //devuelve 1 si el archivo esta vacio o 0 si tiene algo 
    
    return 0;
}