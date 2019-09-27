#include<iostream>
#include<stdio.h>
#include<string.h>
#include<locale>
using namespace std;

struct persona{
    char nombre[20];
    int suscripcion;
    char revista[20];
};

int main(){
    char *locale;
    locale=setlocale(LC_ALL,"");
    struct persona P[10];
    struct persona *apuntador;
    apuntador=P;
    int opcion,c;
    char eliminar[20];
    bool Repetir=true;
    for(int i=0; i<10; i++)
        P[i].nombre[0]='n';
    while(Repetir==true){
    	 cout<<"\t\t::M E N Ú::\n";
		cout<<"1.-Alta"<<endl;
		cout<<"2.-Eliminar"<<endl;
		cout<<"3.-Imprimir"<<endl;
		cout<<"4.-Buscar"<<endl;
		cout<<"5.-Salir"<<endl;
		cout<<"¿Que desea realizar?"<<endl;
  		cin>>opcion;
  		if (opcion==1){
            for(int i=0;i<10; i++){
                if(P[i].nombre[0]=='n'){
                    cout<<"Nombre del usuario: "; fflush(stdin);cin.getline(P[i].nombre,20,'\n');
                    cout<<"Suscripcion: "; cin>>P[i].suscripcion;
                    cout<<"Nombre de la revista: "; fflush(stdin); cin.getline(P[i].revista,20,'\n');
                    cout<<'\n';
                    break;
                    }else
                    cout<<"El lugar "<<i+1<<"º esta ocupado"<<endl;
 	   		}
		}
        if (opcion==2){
		
            cout<<"Nombre del usuario que eliminaras: ";fflush(stdin);cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
                c=strcmp(apuntador->nombre,eliminar);
                if (c!=0)
                    apuntador++;
                else{
                    P[i].nombre[0]='n';
                    cout<<"Se ha dado de baja";
                    break;
                }
            }
    	}
        if (opcion==3){	
            cout<<"\t Imprimido"<<endl;
            for(int i=0; i<10; i++){
                if (P[i].nombre[0]!='n'){
                    cout<<"Nombre: "<<apuntador->nombre<<endl;
                    cout<<"Suscripcion: "<<apuntador->suscripcion<<endl;
                    cout<<"Nombre de la Revista:"<<apuntador->revista<<endl;
                    apuntador++;
                }
                }
        }
        if (opcion==4){
            cout<<"Usuario que desea buscar: ";fflush(stdin);cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
                c=strcmp(apuntador->nombre,eliminar);
                if (c!=0){
                    if (i==9)
                        cout<< "NO encontrado"<<endl;
                apuntador++;}
                else{
                    cout<<"Usuario encontrado"<<endl;
                    cout<<"Nombre: "<<apuntador->nombre<<endl;
                    cout<<"Suscripcion: "<<apuntador->suscripcion<<endl;
                    cout<<"Revista: "<<apuntador->revista<<endl;
                    break;
                }
            }            
        }
        else{
        	cout<<"proceso finalizado"<<endl;
        	Repetir=false;
		}

    }

    
    return 0;
}

