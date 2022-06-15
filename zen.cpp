#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

string codificar(string texto){
	int i = 0;
		while(i <= texto.size() ){ 
			switch (texto[i]){
				case 'z':
					texto[i] = 'p';
				   	break;
				case 'p':
					texto[i] = 'z';
				    break;
				case 'e':
				    texto[i] = 'o';
					break;
				case 'o':
					texto[i] = 'e';
					break;
				case 'n':
					texto[i] = 'l';
					break;
				case 'l':
					texto[i] = 'n';
					break;
				case 'i':
					texto[i] = 'a';
					break;
				case 'a':
					texto[i] = 'i';
					break;
				case 't':
					texto[i] = 'r';
					break;
				case 'r':
					texto[i] = 't';
					break;
				case 'Z':
				    texto[i] = 'P';
					break;			   
				case 'P':
					texto[i] = 'Z';
					break;			  
				case 'E':
					texto[i] = 'O';
					break;
				case 'O':
					texto[i] = 'E';
					break;
				case 'N':
					texto[i] = 'L';
					break;
				case 'L':
					texto[i] = 'N';
					break;
				case 'I':
					texto[i] = 'A';
					break;
				case 'A':
					texto[i] = 'I';
					break;
				case 'T':
					texto[i] = 'R';
					break;
				case 'R':
					texto[i] = 'T';
					break;
				default:
					texto[i] = texto[i];
					break;
		 	}
			i++;
		}
	cout << "\n" << texto;
	return texto;
}
	
int main(){
	int i = 0;
	int cont = 0;	
	string linha;
	string codificado = "";
	
	ofstream fout;
	ifstream fin;				
	fin.open("entrada.txt");    
	
	if(fin.is_open() == false) {
	    printf("Nao foi possivel abrir o arquivo.\n");
		return 1;
    }
	
	while( fin.good() == true ){
		if(cont == 0){
			getline(fin, linha);
			codificado = linha;
			cout << linha << endl;
		} else {
			getline(fin, linha);
			codificado = codificado + "\n" + linha;
			cout << linha << endl;
		}
		cont++;
	}
	
	fin.close();
		
	fout.open("entrada.txt");
	if(fout.is_open() == false) {
	    printf("Nao foi possivel abrir o arquivo.\n");
		return 1;
    }
	
	string texto;
	texto = codificar(codificado);
	fout << texto;
	
	fin.close();
	
	cout << endl << endl;
    system("pause");
	return 0;
}
