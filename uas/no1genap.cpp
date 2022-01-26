#include <iostream>
using namespace std;

int main(){

    string nama = "Joseph";
    string nim = "20200801208";

    cout << "INI VALUE NYA\n";
    cout << nama << endl;
    cout << nim << endl;

    cout << "INI ALAMAT MEMORYNYA\n";
    cout << &nama << endl; 
    cout << &nim << endl;
    return 0;
}