#include <iostream>
using namespace std;

int main() {
    const int min = 3;
    const int max = 20;
    int l;

    cout << "Inserisci la lunghezza del lato del quadrato (min 3 - max 20): ";
    cin >> l;

    while (l < min || l > max) {
        cout << "Errore!\n";
        cout << "Inserisci la lunghezza del lato del quadrato (min 3 - max 20): ";
        cin >> l;
    }

    for (int i = 0; i < l; i++) {
        cout << "*";
        for (int j = 0; j < 4; j++) {
            cout << " ";
        }
    }
    cout << endl;

    for (int j = 0; j < l-2; j++) {
        cout << "*";

        for (int i = 0; i < l-2; i++) {
            cout << " ";
        }

        for (int z = 0; z < l-1; z++) {
            for (int i = 0; i < 4; i++) {
                cout << " ";
            }
        }

        cout << "*";
        cout << endl;
    }

    for (int i = 0; i < l; i++) {
        cout << "*";
        for (int j = 0; j < 4; j++) {
            cout << " ";
        }
    }

    return 0;
}
