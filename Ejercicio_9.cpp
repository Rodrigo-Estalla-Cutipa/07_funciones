#include <iostream>
using namespace std;

float factorial(int);

int main(){
    int n;
    float s;
    n = 0;
    s = 0;

    while (n<=0) {
        cout << "Ingrese el valor de n:" << endl;
        cin >> n;
        if (n<=0) {
            cout <<"ERROR: Debe ingresar un numero entero positivo mayor a cero" << endl;
        }
    }

    for (int i=1; i<=n; i++) {
        s = s + (factorial(i) / (2*i));
    }

    cout << "El resultado de la suma es: " << s;
}

float factorial(int a){
    int f;
    f = 1;
    for (int i=1; i<=a; i++) {
        f = f * i;
    }
    return f;
}