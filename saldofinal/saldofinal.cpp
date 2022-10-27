#include <iostream>
using namespace std;
int main ()
{
	float PBV_x,PBV_s=0;
	int PBV_i=0,PBV_l;
	cout<<"Ingrese numero de egresos  ";cin>>PBV_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>PBV_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>PBV_x;
	PBV_i=PBV_i+1;
	PBV_s=PBV_s-PBV_x;

	}while(PBV_i<PBV_l);
	cout<<"El saldo final es: "<<PBV_s<<endl;
	return 0;
}