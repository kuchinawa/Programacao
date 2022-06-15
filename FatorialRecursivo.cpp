#include <iostream>

using namespace std;

int fat(int);

int main (){
	int n;
	cout << "digite um numero: ";
	cin  >> n;
	cout << "O fatorial de: " << n << " e " << fat(n);
}

int fat (int n){
	if ((n==1) || (n==0)){
		return 1;
	}else{
		return fat(n-1)*n;
	}
}
