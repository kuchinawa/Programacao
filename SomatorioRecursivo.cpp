#include <iostream>

using namespace std;

int somatorio(int);

int main(){
    int n;
    cout << "Digite n: ";
    cin >> n;
    cout << "Somatorio = " << somatorio(n) << endl;
}

int somatorio(int n){
    int r;   
	cout << "n = " << n << endl;
    if(n == 0) {
		cout << "fim \n";
		r = 0;
    }else{
        r = n + somatorio(n-1);
    }
    return r;
}
