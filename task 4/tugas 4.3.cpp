#include <iostream>
using namespace std;

int main (){
    char menu;

    cout<<"\t\tMenu Restaurant Mc~Yahuuuudd"<<endl;
    cout<<"\t==========================================="<<endl;
    cout<<"\t|| 1.Nasi Goreng Informatika Rp 5.000    ||"<<endl;
    cout<<"\t|| 2.Nasi Soto ayam Internet Rp 7.000    ||"<<endl;
    cout<<"\t|| 3.Gado - Gado Disket      Rp 4.500    ||"<<endl;
    cout<<"\t|| 4.Bubur ayam LAN          Rp 4.000    ||"<<endl;
    cout<<"\t==========================================="<<endl;

    cout<<" Mau makan apa hari ini input nomor menu (1/2/3/4) :";
    cin>>menu;

    switch (menu){
        case '1':
            cout<<"\npilihan yang ente pilih 1.Nasigoreng Informatika Rp 5.000\n";
            break;

        case '2':
            cout<<"\npilihan yang ente pilih 2.Nasi soto ayam Internet Rp 7.000\n";
            break;

        case '3':
            cout<<"\npiihan yang ente piih 3.Gado-gado Disket Rp 4.500\n";
            break;

        case '4':
            cout<<"\npilihan yang ente pilih 4.Bubur ayam Lan Rp 4.000\n";
            break;

  }
}
