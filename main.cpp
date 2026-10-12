#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double GBP_Bendras   = 0.8729;
    const double GBP_Pirkti    = 0.8600;
    const double GBP_Parduoti  = 0.9220;

    const double USD_Bendras   = 1.1793;
    const double USD_Pirkti    = 1.1460;
    const double USD_Parduoti  = 1.2340;

    const double INR_Bendras   = 104.6918;
    const double INR_Pirkti    = 101.3862;
    const double INR_Parduoti  = 107.8546;

    int pasirinkimas;

// meniu su programos pasirinkimais
cout << "VALIUTOS KEITYKLA" << endl;
cout << "1. Valiutos kurso palyginimas su euru" << endl;
cout << "2. Valiutos pirkimas" << endl;
cout << "3. Valiutos pardavimas" << endl;
cout << "4. Iseiti" << endl;

//-------------- Cia pasirenkama programa is meniu ----------------
cout << "Pasirinkite veiksma: ";
cin >> pasirinkimas; 

switch (pasirinkimas)
{
case 1: // valiutos pasirinkimas, kad palyginti su euru
    int valiuta;
    cout << "Pasirinkite valiuta, kuria norite palyginti su euru"<<endl;
    cout << "1. GBP" <<endl;
    cout << "2. USD" <<endl;
    cout << "3. INR" <<endl;

    cin >> valiuta;
    cout << fixed << setprecision(2);

    switch (valiuta)
    {
    case 1: //pasirinkus GBP
        cout << "1 EUR = " <<GBP_Bendras<< "GBP" <<endl;
        cout << "1 GBP = " << 1 / GBP_Bendras << "EUR"<< endl;
        break;

    case 2: //pasirinkus USD
        cout << "1 EUR = " <<USD_Bendras<< "USD" <<endl;
        cout << "1 USD = " << 1 / USD_Bendras << "EUR"<< endl;
        break;

    case 3: //pasirinkus INR
        cout << "1 EUR = " <<INR_Bendras<< "INR" <<endl;
        cout << "1 INR = " << 1 / INR_Bendras << "EUR"<< endl;
        break;
    
    default:
        cout << "Neteisingas valiutos pasirinkimas";
        break;
    }
    break;

    // -------------- Cia baigiasi valiutos palyginimas su euru ----------------

case 2:
    cout << "Pasirinkite valiuta, kuria norite pirkti" << endl;
    break;

case 3:
    cout <<"Pasirinkite valiuta, kuria norite parduoti" << endl;
    break;

case 4:
    cout << "Programa uzbaigta.";

default:
    cout << "Neteisingas ivedimas";
    break;
}



}
