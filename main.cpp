#include <iostream>
#include <stdlib.h>
using namespace std;
struct Person{
    char nombre[20];
    int edad;
    }Person1,Person2;

int main()
{
    cout <<"nombre: ";
    cin.getline(Person1.nombre,20,'\n');
    cout<<"edad: ";
    cin>>Person1.edad;
    cout<<Person1.nombre<<endl;
    cout<<Person1.edad<<endl;
    system("pause");
    return 0;
}
