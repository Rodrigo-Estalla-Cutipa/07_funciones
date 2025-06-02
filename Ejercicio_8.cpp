#include <iostream>
using namespace std;

int main(){
    int n1, n2, a, b, resto, mcd, mcm;
    
    cout << "Ingrese el primer numero:" << endl;
    cin >> n1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> n2;

    a = n1;
    b = n2;

    while (b != 0) {
		resto = a % b;
		a = b;
		b = resto;
    }
    mcd = a;
    
    mcm = (n1 * n2)/mcd;

    cout << "El máximo comun divisor es:" << mcd << endl;
    cout << "El minimo comun multiplo es:" << mcm << endl;
    return 0;
}