#include <iostream>
#include <iomanip>
using namespace std;


int main(){
string a;
int b;
cout<<"Ciao, come ti chiami?"<<endl;
cin>>a;
cout<<"Quanti anni hai?"<<endl;
cin>>b;
cout<<"Ciao "<<a<<" , hai "<<b<<" anni."<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<left<<setw(40)<<"| DETTAGLI   PERSONALI "<<right<<"|"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<left<<setw(33)<<"| Nome: "<<right<<a<<"|"<<endl;




}