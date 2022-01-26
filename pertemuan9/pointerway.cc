#include <iostream>
using namespace std;


int main(){

    string nama = "Joseph";
    string* ptr = &nama;

    cout << nama << endl;
    cout << &nama << endl;

    cout << *ptr << endl;
    *ptr = "Joseph Febrian";

    cout << *ptr << endl;
    cout << nama << endl;
    return 0;
}