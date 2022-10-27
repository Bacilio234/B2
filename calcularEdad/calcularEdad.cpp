#include <iostream>
using namespace std;
int main()
{
    int PBV_aa, PBV_ma, PBV_da, PBV_an, PBV_mn, PBV_dn, PBV_a, PBV_m, PBV_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> PBV_aa >> PBV_ma >> PBV_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> PBV_an >> PBV_mn >> PBV_dn;

    if (PBV_da > PBV_dn)
    {

        PBV_d = PBV_da - PBV_dn;
    }
    else
    {
        PBV_da = PBV_da + 30;
        PBV_ma = PBV_ma - 1;
        PBV_d = PBV_da - PBV_dn;
    }

    if (PBV_ma > PBV_mn)
    {

        PBV_m = PBV_ma - PBV_mn;
    }
    else
    {

        PBV_ma = PBV_ma + 12;
        PBV_aa = PBV_aa - 1;
        PBV_m = PBV_ma - PBV_mn;
    }
    PBV_a = PBV_aa - PBV_an;

    cout << "Usted tiene " << PBV_a << " años, " << PBV_m << " meses," << PBV_d << " dias" << endl;
    return 0;
}