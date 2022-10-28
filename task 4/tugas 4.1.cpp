#include <iostream>
using namespace std;

int main(){
    string username;
    string password;

    cout<< "Masukan username anda :";
    cin>>username;
    cout<< "Masukan password anda :";
    cin>>password;

    if (username == "123" && password == "1234")
        cout<< "“Username dan password sesuai, Login berhasil"<<endl;
    else if (username == "123" && password !="1234")
        cout<<"Username sesuai, password tidak sesuai!"<<endl;
    else if (username !="123" && password == "1234")
        cout<<"Username tidak sesuai password sesuai!"<<endl;
    else
        cout<<"Password dan username tidak sesuai"<<endl;
}
