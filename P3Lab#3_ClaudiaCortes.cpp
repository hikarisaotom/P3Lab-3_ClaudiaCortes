#include <iostream>
#include <string>
using namespace std;
#include <stdlib.h>
#include <math.h>
//Metodos.
int menu ();
void Permutaciones();
int main()
{
	int Respuesta=menu();
	switch (Respuesta){
	case 1:{
		cout << "selecciono Mediana"<<endl;

		break;
	       }
	case 2:{
	       cout<<"selecciono Permutaciones"<<endl;
	       Permutaciones();
	       break;
	       }
	 case 3:{
		cout<<"selecciono Fechas D:"<<endl;
		break;
		}

	}//FIn del switch.

}

int menu (){
	int Respuesta=0;
	cout << "BIenvenido al laboratorio, seleccione su opcion:"
		<<endl<<"1-Mediana. " <<endl<< "2-Permutaciones."
		<<endl<<"3-Fechas."<<endl;
	cin>> Respuesta;
	return Respuesta;
}//Fin del menu.

void Permutaciones (){
	string Numero="12345";
	char * Numeros= NULL;
	string * Permutaciones = NULL;
	Permutaciones = new string  [12];
	Numeros = new char [4];
	while (Numero.size()!=4){
		cout << "Ingrese el numero de cuatro digitos";
		cin >>Numero;
	}//Fin del while de valiadacion
       //Nos aseguramos de que los numeros esten
       //siendo tomados adecuadamente.	
	cout<< "Primer numero"<<Numero.substr(0, 1)<<endl;
	cout <<"Segundo numero"<<Numero.substr(1, 1)<<endl;
	cout <<"Tercer numero "<< Numero.substr(2, 1)<<endl;
	cout <<"Cuarto numero"<<Numero.substr(3, 3)<<endl;
	//Llenamos los Arreglos con los numeros.
/*	Numeros[0]=Numero.substr(0, 1);
	Numeros[1]=Numero.substr(1, 2);
	Numeros[2]=Numero.substr(2, 3);
	NUmeros[3]=Numero.substr(3, 4);*/
	//Procederemos a agregar los numeros a 
}//FIn dle metodo que hace permutaciones.

