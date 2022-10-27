#include <iostream>
using namespace std;
int main ()
{
	float PBV_x,PBV_s=0,PBV_s1=0,PBV_s5=0;
	int PBV_i=0,PBV_l,PBV_i1=0,PBV_i5=0;
	cout<<"Ingrese l: ";cin>>PBV_l;
	do{

	cout<<"Ingrese x: ";cin>>PBV_x;
	PBV_i=PBV_i+1;
	PBV_s=PBV_s+PBV_x;
	if(PBV_x==1){
		PBV_i1=PBV_i1+1;
		PBV_s1=PBV_s1+PBV_x;
	}else{

		PBV_i5=PBV_i5+1;
		PBV_s5=PBV_s5+PBV_x;
	}

	}while(PBV_i<PBV_l);
	cout<<"La cantidad de monedas es: "<<PBV_i<<endl;
	cout<<"El valor es: "<<PBV_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<PBV_i1<<endl;
	cout<<"El valor es: "<<PBV_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<PBV_i5<<endl;
	cout<<"La cantidad de moneda es: "<<PBV_s5<<endl;
	return 0;
}