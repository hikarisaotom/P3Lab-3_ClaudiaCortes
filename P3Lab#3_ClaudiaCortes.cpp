#include <iostream>
#include <string>
using namespace std;
int menu ();
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


