#include <iostream>

using namespace std;


int Fibb(int n){
    if (n <= 1) 
		return n;
    return Fibb(n-1) + Fibb(n-2);
}


int main(){

    int n=5;
    cout<<Fibb(n);
    return 0;
}
