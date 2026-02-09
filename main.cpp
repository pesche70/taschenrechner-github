#include <iostream>

using namespace std;

float zahl1 =0;
float zahl2 =0;
float resultat =0;

void addition();
void subtraction();
void multiplication();
void division();


int main() {
    int wahl = 0;

    cout << "Taschenrechner"  << endl;
    cout << "1 fuer Addition"  << endl;
    cout << "2 fuer Subtraktion"  << endl;
    cout << "3 fuer Multiplikation"  << endl;
    cout << "4 fuer Division"  << endl;

    cin >> wahl;

    switch (wahl) {
        case 1:
            cout << "****Addition****"  << endl;
            // hier Funktion für Addition einfügen
            addition();
            break;
        case 2:
            cout << "****Subtraktion**** "  << endl;
            // hier Funktion für die Subtraktion einfügen
            subtraction();
            break;
        case 3:
            cout << "****Multiplikation**** "  << endl;
            // hier die Funktion für die Multiplikation einfügen
            break;
        case 4:
            cout << "****Division**** "  << endl;
            // hier die Funktion für die Division einfügen
            break;
        default:
            cout << "Falsche Auswahl, das Programm wird beendet."  << endl;
            break;
    }


    return 0;
}
//END main

void addition()
{
    cout << "Geben Sie 1.Zahl ein" << endl;
    cin >> zahl1;
    cout << "Geben Sie 2.Zahl ein" << endl;
    cin >> zahl2;
    resultat = zahl1 + zahl2;
    cout << "Resultat: " << resultat << endl;
}

void subtraction()
{
    cout << "Geben Sie 1.Zahl ein" << endl;
    cin >> zahl1;
    cout << "Geben Sie 2.Zahl ein" << endl;
    cin >> zahl2;
    resultat = zahl1 - zahl2;
    cout << "Resultat: " << resultat << endl;
}