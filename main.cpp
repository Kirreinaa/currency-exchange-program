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

    double euruSuma;

    int pasirinkimas;

// meniu su programos pasirinkimais
cout << "VALIUTOS KEITYKLA" << endl;
cout << "1. Valiutos kurso palyginimas su euru" << endl;
cout << "2. Valiutos pirkimas" << endl;
cout << "3. Valiutos pardavimas" << endl;
cout << "4. Iseiti" << endl;

cout << "Pasirinkite veiksma: "; //Cia pasirenkama programa is meniu
cin >> pasirinkimas; 

switch (pasirinkimas)
{
// -------------- Cia prasideda valiutos palyginimas su euru ----------------

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


    // -------------- Cia prasideda valiutos pirkimas  -------------------------

case 2:
    int perkamaValiuta;
    cout << "Pasirinkite valiuta, kuria norite pirkti" << endl;
    cout << "1. GBP" <<endl;
    cout << "2. USD" <<endl;
    cout << "3. INR" <<endl;
    cout << "4. Uzbaigti programa" << endl;

    cin >> perkamaValiuta;
    cout<<fixed<<setprecision(2);

    switch (perkamaValiuta)
    {
    case 1:
        double perkamasGBP;
        cout << "Uz kiek eurų norite nusipirkti GBP?";
        cin >> euruSuma;
        if (euruSuma <= 0) {
            cout << "Suma turi buti didesne uz nuli!";
        }
        else {
        perkamasGBP = euruSuma * GBP_Pirkti;
        cout << "Jus nupirkote " << perkamasGBP << " GBP ir isleidote " << euruSuma << " Eur" << endl;;
        }
        break;

    
    case 2:
        double perkamasUSD;
        cout << "Uz kiek eurų norite nusipirkti USD?";
        cin >> euruSuma;
        if (euruSuma <= 0){
            cout << "Suma turi buti didesne uz nuli!";
        }
        else {
            perkamasUSD = euruSuma * USD_Pirkti;
            cout << "Jus nupirkote " << perkamasUSD << " USD ir isleidote " << euruSuma << " Eur" << endl;
        }
        break;

    case 3:
        double perkamasINR;
        cout << "Uz kiek eurų norite nusipirkti INR?";
        cin >> euruSuma;
        if (euruSuma <= 0){
            cout << "Suma turi buti didesne uz nuli!";
        }
        else {
            perkamasINR = euruSuma * INR_Pirkti;
            cout << "Jus nupirkote " << perkamasINR << " INR ir isleidote " << euruSuma << " Eur" << endl;;
        }
        break;

    case 4:
        cout << "Programa uzbaigta." << endl;
        break;

    default:
        cout << "Neteisingas veiksmo pasirinkimas" << endl;
        break;
    }

    break;

    // -------------- Cia baigiasi valiutos pirkimas  --------------------------


    // -------------- Cia prasideda valiutos pardavimas  -----------------------
case 3:
    int parduodamaValiuta;
    cout <<"Pasirinkite valiuta, kuria norite parduoti" << endl;
    cout << "1. GBP" <<endl;
    cout << "2. USD" <<endl;
    cout << "3. INR" <<endl;
    cout << "4. Uzbaigti programa" << endl;
    break;

    cin >> parduodamaValiuta;

    switch (parduodamaValiuta)
    {
    case 1:
        double parduodamasGBP;
        cout << "Kiek norite parduoti GBP?";
        cin >> parduodamasGBP;
        euruSuma = parduodamasGBP / GBP_Parduoti;
        break;
    
    default:
        break;
    }

case 4:
    cout << "Programa uzbaigta.";
    break;

default:
    cout << "Neteisingas ivedimas";
    break;
}



}
