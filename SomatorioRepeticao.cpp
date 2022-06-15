#include <iostream>

using namespace std;

int main(){
    int n, aux=1, sum=0;
    cout << "Somatorio de: ";
    cin >> n;

    while(aux<=n){
        sum += aux;
        aux++;
    }
    cout << "Somatorio: " << sum << endl;
    return 0;
}
