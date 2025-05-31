#include <iostream>
using namespace std;

int main(){
    int a,b,r1,r2,i;
    r1 = 0;
    r2 = 0;

    cout << "Ingrese el primer numero:" << endl;
    cin >> a;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> b;

    if (a<=0 || b<=0) {
        cout << "ERROR: debe ingresar dos numeros enteros positivos";
        return 0;
    }

    for (i=1; i<a;i++) {
        if (a % i == 0) {
            r1 = r1 + i;
        }
    }
    for (i=1; i<b;i++) {
        if (b % i == 0) {
            r2 = r2 + i;
        }
    }
    
    if (r1==b && r2==a) {
        cout << "Los numeros son amigos";
    } else {
        cout << "Los numeros no son amigos";
    }

    return 0;
}