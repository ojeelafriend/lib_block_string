//Authors: Margarita, Ojeelafriend (library based on @esutoraiki)
//font: https://www.cristalab.com/tutoriales/validacion-de-tipos-de-datos-en-c--c92149l/
#include <string>
#include <iostream>
using namespace std;
int CONT;
int VALIDATION;
bool EXIT;

int validar(int value, string description, string error){
	cin.clear();
	if(CONT>0){
		cin.ignore(1024,'\n');
	}
	cout<<description<<endl;
	cin>>value;
	CONT++;
	if(cin.fail()){
		cout<<error<<endl;
		return 0;
	}else{
		return value;
	}
}

int _validar(int value, string description, string error){
	do{
		VALIDATION = validar(value, description, error);
		if(VALIDATION == 0){
			EXIT = false;
		}else{
			EXIT = true;
		}
	} while (!EXIT);
	return VALIDATION;
}
