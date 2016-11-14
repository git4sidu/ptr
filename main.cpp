#include <QCoreApplication>
#include <iostream>

using namespace std;


class Toko{
private:
    int a=2,b=5,c=9;
public:
    void wypisz(int a=76, int b=65){
    cout<<"a: "<<Toko::a<<endl<<"b: "<<this->b<<endl<<"c: "<<c<<endl<<endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string man;
    int table[5]={4,9,2,7,8};
    int *pointer;


    Toko ana;
    Toko *ptr=&ana;
    ptr->wypisz();
    ana.wypisz(5,3);

    ana.wypisz(43,234);

    //getline(cin,man);
    pointer=table;
    (++pointer)++;
   // cout<<*pointer;
    //cout<<endl<<man;
    return a.exec();
}
