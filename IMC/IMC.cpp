#include <iostream>
using namespace std;
int main () 
{
	float PBV_imc,PBV_peso,PBV_altura;
	cout<<"Ingrese el peso (kg): ";cin>>PBV_peso;
	cout<<"Ingrese la altura (metros): ";cin>>PBV_altura;
	PBV_imc=PBV_peso/(PBV_altura*PBV_altura);
	if(PBV_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(PBV_imc>=18.5 && PBV_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(PBV_imc>=25 && PBV_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(PBV_imc>=27 && PBV_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(PBV_imc>=30 && PBV_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(PBV_imc>=35 && PBV_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(PBV_imc>=40 && PBV_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(PBV_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}