#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    char sequence[10];
    char letters[] = "abcdefghijklmnopqrstuvwxyz";

    cout<<"Sequence:";
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        sequence[i] = letters[rand() % sizeof(letters)/sizeof(letters[0])];
    }

    for (int i = 0; i < 10; i++) {
        cout << sequence[i] << " ";
    }

    cout << endl<<"Encrypted:";
    //Encryption
    int Encrypted[10];

    for (int i = 0; i < 10; i++) {
        Encrypted[i] = (sequence[i]*sequence[i])+2;
        cout << Encrypted[i] << " ";
    }

    cout << endl<<"Decrypted:";
    char Decrypted[10];
    for (int i = 0; i < 10; i++) {
        Decrypted[i] = sqrt(Encrypted[i]-2);
        cout << Decrypted[i] << " ";
    }

    return 0;
}
