#include<iostream>
using namespace std;

int main () {
    float PBV_x,PBV_s=0.0;
    int PBV_i=0, PBV_l;
    cout<<"Ingrese el valor de PBV_l: ";
    cin>>PBV_l;
    do{
        cout<<"Ingrese el valor de PBV_x: ";
        cin>>PBV_x;
        PBV_i=PBV_i+1;
        PBV_s=PBV_s+PBV_x;
    }while(PBV_i<PBV_l);

    cout <<"La suma de los numeros fue: "<<PBV_s<<endl;
    return 0;

}