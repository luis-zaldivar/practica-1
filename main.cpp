#include <bits/stdc++.h>
using namespace std;
struct equipo{
    char region[22];
    char nombre[22];
};
struct jugador{
    char nombre[22];
    int edad;
    equipo equipo;
};

int main()
{
    jugador personas[11];
    jugador *apuntador=personas;
    for(int i=0;i<=1;i++){
        cout<<"Nombre: ";
        cin.getline(personas[i].nombre,20);
        cout<<"Edad: ";
        cin>>personas[i].edad;
        cout<<"region: ";
        fflush(stdin);
        cin.getline(personas[i].equipo.region,20);
        cout<<"nombre del equipo: ";
        cin.getline(personas[i].equipo.nombre,20);
    }
    cout<<endl;
    for(;apuntador<=&personas[1];apuntador++){
        cout<<"Nombre: "<<apuntador->nombre<<endl;
        cout<<"Edad: "<<apuntador->edad<<endl;
        cout<<"equipo:  "<<apuntador->equipo.region<<endl;
        cout<<"nombre del equipo: "<<apuntador->equipo.nombre<<endl;
        cout<<endl;
    }

    return 0;
}

