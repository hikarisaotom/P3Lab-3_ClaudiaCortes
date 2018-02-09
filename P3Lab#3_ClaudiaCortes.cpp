#include <iostream>
#include <string>
using namespace std;
#include <stdlib.h>
#include <math.h>
//Metodos.
int menu ();
void fecha();
void Permutaciones();
int main(){
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
		fecha();
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
	string  * Numeros= NULL;
	string * Permutaciones = NULL;
	Permutaciones = new string  [12];
	Numeros = new string [4];
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
	Numeros[0]=Numero.substr(0, 1);
	Numeros[1]=Numero.substr(1, 1);
	Numeros[2]=Numero.substr(2, 1);
	Numeros[3]=Numero.substr(3, 3);
	for (int i=0;i<4;i++){
		cout <<"NUMERO"<<Numeros[i];
	}
	string letra1=Numeros[0];
	string letra2=Numeros[1];
	string letra3=Numeros[2];
	int contadortotal=0;
	string permutacion;
	string  primeronumero=Numeros[0];
	int avance=0;
	while (contadortotal<12){
		permutacion="";
		for (int i=0; i<3;i++)	{
			permutacion=primeronumero;
			for (int j=0;j<4;j++){
				if ( (Numeros[j])!=permutacion){
					permutacion=permutacion+Numeros[j];
					j=5;
				}else{
					continue;
				}
			}//segundo dijito.
			letra1=permutacion.substr(0,1);
			letra2=permutacion.substr(1,1);	
			for (int j=0;j<4;j++){
				 cout << letra1<< "!="<<Numeros[j];
				if (((Numeros[j])!=letra1)&&((Numeros[j])!=letra2)){
					permutacion=permutacion+Numeros[j];
					j=5;	
				}else{
					continue;
				}
			}//tercer numero
			letra3=permutacion.substr(2,1);
			for (int j=0;j<4;j++){
				cout << letra1<< " !="<<Numeros[j]<< letra2<< " !="<<Numeros[j]<< letra3<< " !="<<Numeros[j];
				if (((Numeros[j])!=letra1)&&((Numeros[j])!=letra2)&&((Numeros[j])!=letra3)){
					permutacion=permutacion+Numeros[j];
					j=5;
				}else{
					continue;
				}
			}//cuarto numero
			Permutaciones [contadortotal]=permutacion;
		cout <<"LETRAS" <<letra1<<"-"<<letra2<<"-"<<letra3<<"-";
		cout<<permutacion;
	//	cout << Letra1<< "!="<<Numeros[j];
			contadortotal++;		
		}//fin del for que reccore todo 
		primeronumero=Numeros[avance];
		avance++;
	}//fin del while
	for (int i=0; i<12;i++){
		cout<<Permutaciones[i]<<endl;
	}	
	 delete [] Permutaciones;
	delete [] Numeros;
	Permutaciones=NULL;
	Numeros=NULL;
	 cout << "se han eliminado los arreglos";
}//FIn dle metodo que hace permutaciones.


void fecha(){
	int dia;
	int mes;
	int ano;
	string Dia;
	string Mes;
	string Ano;
	string Fecha="12345678910";
//	cout<< "INgrese la fecha"<<endl;
//	cin <<fecha;
	while (Fecha.size()!=8){
		cout<<"ingrese fecha"<<endl;
		cin>>Fecha;
	}

	Dia=Fecha.substr(0,4);
	Mes=Fecha.substr(4,2);
	Ano=Fecha.substr(6,8);

	cout <<" "<<Dia<< " "<<Mes<<" "<<Ano<<endl;
	mes =atoi(Mes.c_str());
	switch (mes){
		case 1:
			Mes="Enero";
			break;
		case 2:
			Mes="Febrero";

			break;
		case 3:
			Mes="Marzo";

			break;
		case 4:
			Mes="Abril";

			break;
		case 5: 
			Mes="Mayo";

			break;
		case 6:
			Mes="Junio";

			break;
		case 7:
			Mes="Julio";

			break;
		case 8: 
			Mes="Agosto";

			break;
		case 9:
			Mes="Septiembre";

			break;
		case 10:
			Mes="Octubre";

			break;
		case 11:
			Mes="Noviembre";

			break;
		case 12:
			Mes="Diciembre";

			break;
	}

}
