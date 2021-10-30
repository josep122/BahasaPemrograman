#include <iostream>
using namespace std ;

int main() {

 int nomer ;

 cout<<"Masukkan [1/2/3] : ";cin>>nomer;

 if (nomer<=0){
 cout<<"kurang dari 1"<<endl;
 }else if(nomer==1){
 cout<<"1"<<endl;
 }else if(nomer==2){
 cout<<"2"<<endl;
 }else if(nomer==3){
 cout<<"3"<<endl;
 }else{

 cout<<"lebih dari 3"<<endl;

 }
 return 0 ;
}