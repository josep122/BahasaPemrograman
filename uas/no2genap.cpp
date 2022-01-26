#include <iostream>

using namespace std;

void nama(){
    string nama;
    cout << "Masukan Nama : ";
     getline(cin, nama);
     cout << "Nama : " << nama << endl;
};

void nim(){
    string nim;
    cout << "Masukan NIM : ";
    cin >> nim;
    cout << "Nim : " << nim << endl;
};

int main() {
    nama();
    nim();
    return 0;
}