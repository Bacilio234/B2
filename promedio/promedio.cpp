#include <iostream>
using namespace std;
int main ()
{
	float PBV_x,PBV_pm=0;
	int PBV_i=0,PBV_l;
	cout<<"Ingrese l: ";cin>>PBV_l;
	do{
	
	cout<<"Ingrese x: ";cin>>PBV_x;
	PBV_i=PBV_i+1;
	if(PBV_x>PBV_pm){
		PBV_pm=PBV_x;
	}
	
	}while(PBV_i<PBV_l);
	cout<<"El promedio maximo del curso es: "<<PBV_pm<<endl;
	return 0;
}