#include <iostream>

using namespace std;

struct sFicha{
	string nome;
	float peso;
	float altura;
	float imc;
};

void exibirFicha(sFicha ficha){
	cout << "Nome: " << ficha.nome << endl ;
	cout << "Peso: " << ficha.peso << "kg"<< endl;
	cout << "Altura: " << ficha.altura << endl;
	cout << "IMC: " << ficha.imc << endl<<endl;
}

int main(){
	sFicha fichaAluno1;

	cout << "Informe o nome da pessoa: ";
	getline( cin, fichaAluno1.nome );
	
	cout << "Informe o peso de: " << fichaAluno1.nome << ": ";
	cin >> fichaAluno1.peso;
   
	cout << "Informe a altura de: " << fichaAluno1.nome << ": ";
	cin >> fichaAluno1.altura;

	if(fichaAluno1.altura != 0) {
		fichaAluno1.imc = fichaAluno1.peso / (fichaAluno1.altura * fichaAluno1.altura);
	}

	exibirFicha(fichaAluno1);

	system("pause");
	return 0;
}
