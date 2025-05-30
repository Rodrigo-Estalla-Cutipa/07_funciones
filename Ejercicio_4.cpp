#include <iostream>
using namespace std;

int operacion(int);

int main(){
    int n, r;

    cout << "Ingrese un numero" << endl;
    cin >> n;
    
    r = operacion(n);

    if (r == n){
        cout << "El numero es perfecto";
    } else {
        cout << "El numero no es perfecto";
    }

    return 0;
}

int operacion (int n){
    int s, i;
    s = 0;
    
    for (i=1; i<n; i++){
        if (n % i == 0) {
            s = s + i;
        }
    }

    return s;
}