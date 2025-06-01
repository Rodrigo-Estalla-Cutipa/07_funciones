#include <iostream>
using namespace std;

int main(){
    int n, r, i;
    r = 0;

    cout << "Ingrese un numero:" << endl;
    cin >> n;

    while (n <= 0) {
        cout << "Por favor, ingrese un numero entero positivo mayor a cero:" << endl;
        cin >> n;
    }

    for (i=1; i<=n; i++) {
        if (n % i == 0) {
            r = r + 1;
        }
    }

    if (r==2) {
        cout << "El numero es primo";
    } else {
        cout << "El numero no es primo";
    }

    return 0;
}