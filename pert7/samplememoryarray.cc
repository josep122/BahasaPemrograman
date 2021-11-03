#include  <iostream>

using namespace std;

int main(){
    int a[1], i;

    cout<<"Memory Alokasi : "<< sizeof(int)<<endl;

    for (i=0; i<10; i++);{
        cout<<"Alamat Memory : "<< i<<"-"<< &a[i]<<endl;
    }

    return 0;
}
