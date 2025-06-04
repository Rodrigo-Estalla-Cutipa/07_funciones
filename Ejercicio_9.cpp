#include <iostream>
using namespace std;

float factorial(int);

int main(){
    int n;
    float s;
    s = 0;

    cout << "Ingrese el valor de n:" << endl;
    cin >> n;

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