#include <iostream>
using namespace std;

int main(){

    string nama, nim;

    cout << "Masukan Nama : ";
    getline(cin, nama);
    cout << "Masukan Nim : ";
    cin>>nim;

    cout << "Nama : " << nama << endl;
    cout << "Alamat Nama : " << &nama << endl;
    cout << "Nim : " << nim << endl;
    cout << "Alamat Nim : " << &nim << endl;

}