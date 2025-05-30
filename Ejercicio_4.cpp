#include <iostream>

using namespace std;

int main(){
    int n, s, i;
    s = 0;

    cout << "Ingrese un numero" << endl;
    cin >> n;
    
    for (i=1; i<n; i++){
        if (n % i == 0) {
            s = s + i;
        }
    }
    
    if (s == n){
        cout << "El numero es perfecto";
    } else {
        cout << "El numero no es perfecto";
    }

    return 0;
}