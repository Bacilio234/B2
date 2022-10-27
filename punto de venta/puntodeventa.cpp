
#include <iostream>
using namespace std;
int main()
{
    float PBV_x, PBV_s = 0, PBV_vb, PBV_piva = 12, PBV_viva, PBV_pdesc = 10, PBV_vdesc, PBV_vn;
    int PBV_i = 0, PBV_l;
    cout << "Ingrese l: ";
    cin >> PBV_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> PBV_x;
        PBV_i = PBV_i + 1;
        PBV_s = PBV_s + PBV_x;
    } while (PBV_i < PBV_l);
    PBV_vb = PBV_s;
    PBV_viva = PBV_vb * PBV_piva / 100;
    PBV_vdesc = PBV_vb * PBV_pdesc / 100;
    PBV_vn = PBV_vb + PBV_viva - PBV_vdesc;
    cout << "El valor a pagar es de: " << PBV_vn << endl;
    return 0;
}