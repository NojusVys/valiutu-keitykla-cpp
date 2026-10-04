#include <iostream>
#include <iomanip>

using namespace std;

void meniu();
void valiutuPasirinkimas();

int main() {
    bool arVeikia = true;
    int pasirinkimas;

    const double GBP_BENDRAS = 0.8729;
    const double GBP_PIRKTI = 0.8600;
    const double GBP_PARDUOTI = 0.9220;

    const double USD_BENDRAS = 1.1793;
    const double USD_PIRKTI = 1.1460;
    const double USD_PARDUOTI = 1.2340;

    const double INR_BENDRAS = 104.6918;
    const double INR_PIRKTI = 101.3862;
    const double INR_PARDUOTI = 107.8546;

    while(arVeikia) {
        meniu();
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                int x;
                valiutuPasirinkimas();
                cin >> x;
                switch (x) {
                    case 1: {
                        cout << "1 EUR = " << GBP_BENDRAS << " GBP." << endl;
                        break;
                    }
                    case 2: {
                        cout << "1 EUR = " << USD_BENDRAS << " USD." << endl;
                        break;
                    }
                    case 3: {
                        cout << "1 EUR = " << INR_BENDRAS << " INR." << endl;
                        break;
                    }
                    case 4:
                        break;
                    default:
                        cout << "Jusu pasirinkimas nera tinkamas, bandykite dar karta." << endl;

                }
                break;
            }
            case 2: {
                int x;
                double kiekis;
                valiutuPasirinkimas();
                cin >> x;
                switch (x) {
                    case 1: {
                        cout << "Iveskite suma uz kuria norite pirkti pasirinkta valiuta." << endl;
                        cin >> kiekis;
                        while (kiekis < 0){
                            cout << "Prasome ivesti teigiama suma: ";
                            cin >> kiekis;
                        }
                        cout << fixed << setprecision(2) << "Jus perkate GBP uz: " << kiekis << " EUR. Jus gausite: " << kiekis*GBP_PIRKTI << " GBP." << endl;
                        break;
                    }
                    case 2: {
                        cout << "Iveskite suma uz kuria norite pirkti pasirinkta valiuta." << endl;
                        cin >> kiekis;
                        while (kiekis < 0){
                            cout << "Prasome ivesti teigiama suma: ";
                            cin >> kiekis;
                        }
                        cout << fixed << setprecision(2) << "Jus perkate USD uz: " << kiekis << " EUR. Jus gausite: " << kiekis*USD_PIRKTI << " USD." << endl;
                        break;
                    }
                    case 3: {
                        cout << "Iveskite suma uz kuria norite pirkti pasirinkta valiuta." << endl;
                        cin >> kiekis;
                        while (kiekis < 0){
                            cout << "Prasome ivesti teigiama suma: ";
                            cin >> kiekis;
                        }
                        cout << fixed << setprecision(2) << "Jus perkate INR uz: " << kiekis << " EUR. Jus gausite: " << kiekis*INR_PIRKTI << " INR." << endl;
                        break;
                    }
                    case 4:
                        break;
                    default:
                        cout << "Jusu pasirinkimas nera tinkamas, bandykite dar karta." << endl;
                }
                break;
            }
            case 3: {
                int x;
                double kiekis;
                valiutuPasirinkimas();
                cin >> x;
                switch (x) {
                    case 1: {
                        cout << "Iveskite kiek norite parduoti pasirinktos valiutos." << endl;
                        cin >> kiekis;
                        while (kiekis < 0){
                            cout << "Prasome ivesti teigiama suma: ";
                            cin >> kiekis;
                        }
                        cout << fixed << setprecision(2) << "Jus parduodate " << kiekis << " GBP. Jus gausite: " << kiekis/GBP_PARDUOTI << " EUR." << endl;
                        break;
                    }
                    case 2: {
                        cout << "Iveskite kiek norite parduoti pasirinktos valiutos." << endl;
                        cin >> kiekis;
                        while (kiekis < 0){
                            cout << "Prasome ivesti teigiama suma: ";
                            cin >> kiekis;
                        }
                        cout << fixed << setprecision(2) << "Jus parduodate " << kiekis << " USD. Jus gausite: " << kiekis/USD_PARDUOTI << " EUR." << endl;
                        break;
                    }
                    case 3: {
                        cout << "Iveskite kiek norite parduoti pasirinktos valiutos." << endl;
                        cin >> kiekis;
                        while (kiekis < 0){
                            cout << "Prasome ivesti teigiama suma: ";
                            cin >> kiekis;
                        }
                        cout << fixed << setprecision(2) << "Jus parduodate " << kiekis << " INR. Jus gausite: " << kiekis/INR_PARDUOTI << " EUR." << endl;
                        break;
                    }
                    case 4:
                        break;
                    default:
                        cout << "Jusu pasirinkimas nera tinkamas, bandykite dar karta." << endl;
                }
                break;
            }
            case 4: {
                cout << "Programa baigiama." << endl;
                arVeikia = false;
                break;
            }
            default:
                cout << "Jusu pasirinkimas nera tinkamas, bendykite dar karta." << endl;
        }
    }
    return 0;
}

void meniu(){
    cout << "Prasome pasirinkti varianta is meniu:" << endl;
    cout << "1. Valiutos kurso palyginimas su euru." << endl;
    cout << "2. Valiutos pirkimas (EUR -> pasirinkta valiuta)." << endl;
    cout << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)." << endl;
    cout << "4. Iseiti." << endl;
}

void valiutuPasirinkimas(){
    cout << "Pasirinkite kokia valiuta norite parduoti:" << endl;
    cout << "1. Didziosios Britanijos savaras." << endl;
    cout << "2. Jungtiniu Amerikos valstiju doleris." << endl;
    cout << "3. Indijos rupija." << endl;
    cout << "4. Grizti atgal." << endl;
}
