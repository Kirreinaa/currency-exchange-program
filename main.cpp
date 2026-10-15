#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;

    double euruSuma;

    int pasirinkimas;

    do
    {
        // meniu su programos pasirinkimais
        cout << " " << endl;
        cout << "====================" << endl;
        cout << "VALIUTOS KEITYKLA" << endl;
        cout << "====================" << endl;
        cout << "1. Valiutos kurso palyginimas su euru" << endl;
        cout << "2. Valiutos pirkimas" << endl;
        cout << "3. Valiutos pardavimas" << endl;
        cout << "4. Uzbaigti programa" << endl;
        cout << "====================" << endl;
        cout << " " << endl;

        cout << "Pasirinkite veiksma: ";

        if (!(cin >> pasirinkimas))
        {
            cout << "Pasirinkite veiksma: " << endl; // Jeigu pasirinkimas yra raide
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (pasirinkimas < 1 || pasirinkimas > 4)
        {
            cout << "Neteisingas pasirinkimas." << endl; // jeigu pasirinkimas yra maziau uz 1 ar daugiau uz 4
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (pasirinkimas)
        {
            // -------------- Cia prasideda valiutos palyginimas su euru ----------------

        case 1: // valiutos pasirinkimas, kad palyginti su euru
            int valiuta;
            cout << " " << endl;
            cout << "====================" << endl;
            cout << "Pasirinkite valiuta, kuria norite palyginti su euru" << endl;
            cout << "====================" << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            cout << "4. Grizti atgal" << endl;
            cout << "====================" << endl;
            cout << " " << endl;

            cout << "Pasirinkite veiksma: "; // Cia pasirenkama valiuta, kuria norime lyginti su euru
            cin >> valiuta;

            cout << fixed << setprecision(2);

            switch (valiuta)
            {
            case 1: // pasirinkus GBP
                cout << "1 EUR = " << GBP_Bendras << " GBP" << endl;
                cout << "1 GBP = " << 1 / GBP_Bendras << " EUR" << endl;
                break;

            case 2: // pasirinkus USD
                cout << "1 EUR = " << USD_Bendras << " USD" << endl;
                cout << "1 USD = " << 1 / USD_Bendras << " EUR" << endl;
                break;

            case 3: // pasirinkus INR
                cout << "1 EUR = " << INR_Bendras << " INR" << endl;
                cout << "1 INR = " << 1 / INR_Bendras << " EUR" << endl;
                break;

            case 4:
                break;

            default:
                cout << "Neteisingas ivedimas";
                break;
            }
            break;

            // -------------- Cia baigiasi valiutos palyginimas su euru ----------------

            // -------------- Cia prasideda valiutos pirkimas  -------------------------

        case 2: // valiutos pasirinkimas pirkimui uz eurus
            int perkamaValiuta;
            cout << " " << endl;
            cout << "====================" << endl;
            cout << "Pasirinkite valiuta, kuria norite pirkti" << endl;
            cout << "====================" << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            cout << "4. Grizti atgal" << endl;
            cout << "====================" << endl;
            cout << " " << endl;

            cout << "pasirinkite veiksma: ";
            cin >> perkamaValiuta; // Cia pasirenkama, kuria valiuta norime nupirkti
            cout << fixed << setprecision(2);

            switch (perkamaValiuta)
            {
            case 1: // perkant GBP
                double perkamasGBP;
                cout << "Uz kiek eurų norite nusipirkti GBP?" << endl;
                cout << "EUR ";
                cin >> euruSuma; // euru suma, uz kuria perkame GBP

                if (euruSuma <= 0)
                {
                    cout << "Suma turi buti didesne uz nuli!"; // jeigu duota suma maziau arba lygu 0
                }
                else
                {
                    perkamasGBP = euruSuma * GBP_Pirkti;
                    cout << "Jus nupirkote " << perkamasGBP << " GBP ir isleidote " << euruSuma << " Eur" << endl; // jeigu duota suma daugiau negu 0
                }
                break;

            case 2: // perkant USD
                double perkamasUSD;
                cout << "Uz kiek eurų norite nusipirkti USD?" << endl;
                cout << "EUR ";
                cin >> euruSuma; // euru suma, uz kuria perkame USD
                if (euruSuma <= 0)
                {
                    cout << "Suma turi buti didesne uz nuli!"; // jeigu duota suma maziau arba lygu 0
                }
                else
                {
                    perkamasUSD = euruSuma * USD_Pirkti;
                    cout << "Jus nupirkote " << perkamasUSD << " USD ir isleidote " << euruSuma << " Eur" << endl; // jeigu duota suma daugiau negu 0
                }
                break;

            case 3: // perkant INR
                double perkamasINR;
                cout << "Uz kiek eurų norite nusipirkti INR?" << endl;
                cout << "EUR ";
                cin >> euruSuma; // euru suma, uz kuria perkame INR
                if (euruSuma <= 0)
                {
                    cout << "Suma turi buti didesne uz nuli!"; // jeigu duota suma maziau arba lygu 0
                }
                else
                {
                    perkamasINR = euruSuma * INR_Pirkti;
                    cout << "Jus nupirkote " << perkamasINR << " INR ir isleidote " << euruSuma << " Eur" << endl; // jeigu duota suma daugiau negu 0
                }
                break;

            case 4:
                break;

            default:
                cout << "Neteisingas ivedimas" << endl;
                break;
            }

            break;

            // -------------- Cia baigiasi valiutos pirkimas  --------------------------

            // -------------- Cia prasideda valiutos pardavimas  -----------------------
        case 3:
            int parduodamaValiuta;
            cout << " " << endl;
            cout << "====================" << endl;
            cout << "Pasirinkite valiuta, kuria norite parduoti" << endl;
            cout << "====================" << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            cout << "4. Grizti atgal" << endl;
            cout << "====================" << endl;
            cout << " " << endl;

            cout << "Pasirinkite veiksma: "; // Cia pasirenkama, kuria valiuta norime parduoti
            cin >> parduodamaValiuta;
            cout << fixed << setprecision(2);

            switch (parduodamaValiuta)
            {
            case 1: // parduodant GBP
                double parduodamasGBP;
                cout << "Kiek norite parduoti GBP?" << endl;
                cout << "GBP ";
                cin >> parduodamasGBP;

                if (parduodamasGBP <= 0)
                {
                    cout << "Suma turi buti didesne uz nuli!"; // jeigu duota suma maziau arba lygu 0
                }
                else
                {
                    euruSuma = parduodamasGBP / GBP_Parduoti;
                    cout << "Jus pardavete " << parduodamasGBP << " GBP uz " << euruSuma << " EUR" << endl; // jeigu duota suma daugiau negu 0
                }
                break;

            case 2: // parduodant USD
                double parduodamasUSD;
                cout << "Kiek norite parduoti USD?" << endl;
                cout << "USD ";
                cin >> parduodamasUSD;

                if (parduodamasUSD <= 0)
                {
                    cout << "Suma turi buti didesne uz nuli!"; // jeigu duota suma maziau arba lygu 0
                }
                else
                {
                    euruSuma = parduodamasUSD / USD_Parduoti;
                    cout << "Jus pardavete " << parduodamasUSD << " USD uz " << euruSuma << " EUR" << endl; // jeigu duota suma daugiau negu 0
                }
                break;

            case 3:
                double parduodamasINR; // praduodant INR
                cout << "Kiek norite parduoti INR?" << endl;
                cout << "INR ";
                cin >> parduodamasINR;

                if (parduodamasINR <= 0)
                {
                    cout << "Suma turi buti didesne uz nuli!"; // jeigu duota suma maziau arba lygu 0
                }
                else
                {
                    euruSuma = parduodamasINR / INR_Parduoti;
                    cout << "Jus pardavete " << parduodamasINR << " INR uz " << euruSuma << " EUR" << endl; // jeigu duota suma daugiau negu 0
                }
                break;

            case 4:
                cout << "Grizti atgal" << endl;
                break;

            default:
                cout << "Neteisingas veiksmo pasirinkimas" << endl;
                break;
            }

            // -------------- Cia baigiasi valiutos pardavimas  --------------------------

            break;

        case 4: // Programos uzbaigimas
            cout << "Programa uzbaigta.";
            break;

        default:
            cout << "Neteisingas ivedimas";
            break;
        }

    } while (pasirinkimas != 4); // viska kartoti, kol pasirinkimas nera 4
}
