#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct sDicio{
	string palavra;
	int contagem;
};


int main(){


	int i = 0, j = 0, tempInt = 0, cont = 0, qntP = 0, controle = 0, qntFinal;	
	string palavra, tempString;
	string* palavras = NULL;
	sDicio* dicionario = NULL;
	
	ofstream fout;
	ifstream fin;				
	
	fin.open("entrada.txt");    	
	if(fin.is_open() == false) {
	    printf("Nao foi possivel abrir o arquivo.\n");
		return 1;
    }	
	while( fin.good() == true ){
		fin >> palavra;
		qntP++;
	}
	
	dicionario = new sDicio[qntP];
	
	fin.close();
	
	
	fin.open("entrada.txt");    	
	if(fin.is_open() == false) {
	    printf("Nao foi possivel abrir o arquivo.\n");
		return 1;
    }	
	for(j = 0; j < qntP; j++){
		dicionario[j].palavra = "";
		dicionario[j].contagem = 0;
	}

	cont = 0;
	while( fin.good() == true ){
		fin >> palavra;
		dicionario[cont].palavra = palavra;
		dicionario[cont].contagem++;
		cont++;
	}
	fin.close();
	
	qntFinal = cont;

	for(i = 0; i < cont; i++){
		for(j = 0; j < cont; j++){
			if(dicionario[i].palavra == dicionario[j].palavra){
				if((dicionario[i].contagem == 0) || (i == j)){		
				} else {
					dicionario[i].contagem++;
					dicionario[j].palavra = " ";
					dicionario[j].contagem = 0;	
					qntFinal--;
				}
			}			
		}
	}

	for(i = 0; i < cont; i++){
		for(j = 0; j < cont; j++){
			if(i == j){
			}else {
				if(dicionario[i].contagem > dicionario[j].contagem){
					if((dicionario[i].contagem == 0) || (dicionario[i].palavra == dicionario[j].palavra)){		
					} else {
						tempString = dicionario[j].palavra;
						dicionario[j].palavra = dicionario[i].palavra;
						dicionario[i].palavra = tempString;
						tempInt = dicionario[j].contagem;
						dicionario[j].contagem = dicionario[i].contagem;
						dicionario[i].contagem = tempInt;
					}
				}	
			}
		}
	}
	
	cout << "Contagem de palavras: \n";
	for(j = 0; j < qntFinal; j++){
		cout << dicionario[j].palavra << "\t=\t" << dicionario[j].contagem << endl;
	}
	cout << endl << endl;
    system("pause");
	return 0;
}
