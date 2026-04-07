#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int x;

    //Perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"Perulangan FOR"<<endl;
    for(int i=0; i<=4; i++)
    {
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //utk mendptkan urutan angka acak yg berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"Perulangan WHILE"<<endl;
    x = 1 + rand()%10;
    while(x <= 5)
    {
        cout<<"Bilangan acak: "<<x<<endl;
        x = rand()%10;
    }
    cout<<"Bilangan acak= "<<x<<endl;
    cout<<endl;
    
}
