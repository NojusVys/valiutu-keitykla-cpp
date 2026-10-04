#include <iostream>
#include <iomanip>

using namespace std;

void meniu();
void valiutuPasirinkimas();
double kiekioIvestis();

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
                int y;
                double kiekis;
                cout << "Pasirinkite kokia valiuta norite palyginti." << endl;
                valiutuPasirinkimas();
                cin >> x;
                if (x == 1) {
                    cout << "1. Norite pamatyti \u20ac -> \u00A3?" << endl;
                    cout << "2. Norite pamatyti \u00A3 -> \u20ac?" << endl;
                    cin >> y;
                    switch (y) {
                        case 1:{
                            cout << "Iveskite kieki eurais: ";
                            kiekis = kiekioIvestis();
                            cout << fixed << setprecision(2) << kiekis << "\u20ac = \u00A3" << kiekis*GBP_BENDRAS << "." << endl;
                            break;
                            }
                        case 2:{
                            cout << "Iveskite kieki svarais: ";
                            kiekis = kiekioIvestis();
                            cout << fixed << setprecision(2) << "\u00A3" << kiekis << " = " << kiekis/GBP_BENDRAS << "\u20ac." << endl;
                            break;
                            }
                        default:
                            cout << "Tokio pasirinkimo nera." << endl;
                    }
                } else if (x == 2) {
                    cout << "1. Norite pamatyti \u20ac -> \u0024?" << endl;
                    cout << "2. Norite pamatyti \u0024 -> \u20ac?" << endl;
                    cin >> y;
                    switch (y) {
                        case 1:{
                            cout << "Iveskite kieki eurais: ";
                            kiekis = kiekioIvestis();
                            cout << fixed << setprecision(2) << kiekis << "\u20ac = \u0024" << kiekis*USD_BENDRAS << "." << endl;
                            break;
                            }
                        case 2:{
                            cout << "Iveskite kieki JAV doleriais: ";
                            kiekis = kiekioIvestis();
                            cout << fixed << setprecision(2) << "\u0024" << kiekis << " = " << kiekis/USD_BENDRAS << "\u20ac." << endl;
                            break;
                            }
                        default:
                            cout << "Tokio pasirinkimo nera." << endl;
                    }
                } else if (x == 3) {
                    cout << "1. Norite pamatyti \u20ac -> \u20b9?" << endl;
                    cout << "2. Norite pamatyti \u20b9 -> \u20ac?" << endl;
                    cin >> y;
                    switch (y) {
                        case 1:{
                            cout << "Iveskite kieki eurais: ";
                            kiekis = kiekioIvestis();
                            cout << fixed << setprecision(2) << kiekis << "\u20ac = \u20b9" << kiekis*INR_BENDRAS << "." << endl;
                            break;
                            }
                        case 2:{
                            cout << "Iveskite kieki Indijos rupijomis: ";
                            kiekis = kiekioIvestis();
                            cout << fixed << setprecision(2) << "\u20b9" << kiekis << " = " << kiekis/INR_BENDRAS << "\u20ac." << endl;
                            break;
                            }
                        default:
                            cout << "Tokio pasirinkimo nera." << endl;
                    }
                } else if (x == 4) {
                    break;
                } else cout << "Jusu pasirinkimas nera tinkamas, bandykite dar karta." << endl;
                break;
            }
            case 2: {
                int x;
                double kiekis;
                cout << "Pasirinkite kokia valiuta norite nupirkti." << endl;
                valiutuPasirinkimas();
                cin >> x;
                switch (x) {
                    case 1: {
                        cout << "Iveskite suma uz kuria norite pirkti pasirinkta valiuta." << endl;
                        kiekis = kiekioIvestis();
                        cout << fixed << setprecision(2) << "Jus perkate GBP uz: " << kiekis << "\u20ac. Jus gausite: \u00A3" << kiekis*GBP_PIRKTI << "." << endl;
                        break;
                    }
                    case 2: {
                        cout << "Iveskite suma uz kuria norite pirkti pasirinkta valiuta." << endl;
                        kiekis = kiekioIvestis();
                        cout << fixed << setprecision(2) << "Jus perkate USD uz: " << kiekis << "\u20ac. Jus gausite: \u0024" << kiekis*USD_PIRKTI << "." << endl;
                        break;
                    }
                    case 3: {
                        cout << "Iveskite suma uz kuria norite pirkti pasirinkta valiuta." << endl;
                        kiekis = kiekioIvestis();
                        cout << fixed << setprecision(2) << "Jus perkate INR uz: " << kiekis << "\u20ac. Jus gausite: \u20b9" << kiekis*INR_PIRKTI << "." << endl;
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
                cout << "Pasirinkite kokia valiuta norite parduoti:" << endl;
                valiutuPasirinkimas();
                cin >> x;
                switch (x) {
                    case 1: {
                        cout << "Iveskite kiek norite parduoti pasirinktos valiutos." << endl;
                        kiekis = kiekioIvestis();
                        cout << fixed << setprecision(2) << "Jus parduodate: \u00A3" << kiekis << ". Jus gausite: " << kiekis/GBP_PARDUOTI << "\u20ac." << endl;
                        break;
                    }
                    case 2: {
                        cout << "Iveskite kiek norite parduoti pasirinktos valiutos." << endl;
                        kiekis = kiekioIvestis();
                        cout << fixed << setprecision(2) << "Jus parduodate: \u0024" << kiekis << ". Jus gausite: " << kiekis/USD_PARDUOTI << "\u20ac." << endl;
                        break;
                    }
                    case 3: {
                        cout << "Iveskite kiek norite parduoti pasirinktos valiutos." << endl;
                        kiekis = kiekioIvestis();
                        cout << fixed << setprecision(2) << "Jus parduodate: \u20b9" << kiekis << ". Jus gausite: " << kiekis/INR_PARDUOTI << "\u20ac." << endl;
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
    cout << "1. Valiutos kurso palyginimas." << endl;
    cout << "2. Valiutos pirkimas (EUR -> pasirinkta valiuta)." << endl;
    cout << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)." << endl;
    cout << "4. Iseiti." << endl;
}

void valiutuPasirinkimas(){
    cout << "1. Didziosios Britanijos savaras." << endl;
    cout << "2. Jungtiniu Amerikos valstiju doleris." << endl;
    cout << "3. Indijos rupija." << endl;
    cout << "4. Grizti atgal." << endl;
}

double kiekioIvestis(){
    double kiekis;
    cin >> kiekis;
    while (kiekis < 0){
        cout << "Prasome ivesti teigiama suma: ";
        cin >> kiekis;
    }
    return kiekis;
}
