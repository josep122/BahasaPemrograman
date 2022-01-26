#include <iostream>
#include <fstream>

using namespace std;

// int pilih;
// char kembali;
// struct mahasiswa{
//     char nama[100];
//     int nim;
// };
void create()
{
    string nama;
    ofstream txt;
    txt.open("soalgenap.txt", ios::app);
    cout << "Masukan Nama : ";
    cin >> nama;
    txt << nama;
    txt << endl;
    txt.close();
}
void read(){
    string nama;
    ifstream txt ("soalgenap.txt");
    if(txt.is_open())
    {
        while(! txt.eof())
        {
            getline(txt, nama);
            cout << nama << endl;
            cout << endl;
        }
    }
}
int main(){
    int pil;
    main:
        cout<<"MENU";
        cout<<"\n 0. Exit";
        cout<<"\n 1. Create ";
        cout<<"\n 2. Read ";
        cout<<"\nPilih : "; cin>>pil;
        switch(pil){
            case 0:
                cout<<"\nThanks"<<endl;
                return 0;
            case 1:
				create();
                goto main;
                break;
            case 2:
                read();
                goto main;
                break;
            default:
                cout<<"Pilihan Salah"<<endl;
                break;
            }   

}
