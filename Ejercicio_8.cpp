#include <iostream>
using namespace std;

int mcd (int, int);

int main(){
    int a, b, r1, r2;
    
    cout << "Ingrese el primer numero:" << endl;
    cin >> a;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> b;

    r1 = mcd(a,b);
    r2 = a*b/r1;
    
    cout << "El maximo comun divisor es: " << r1 << endl;
    cout << "El minimo comun multiplo es: " << r2 << endl;
    return 0;
}

int mcd(int a, int b){
    int resto;
    while (b != 0) {
		resto = a % b;
		a = b;
		b = resto;
    }
    return a;
}