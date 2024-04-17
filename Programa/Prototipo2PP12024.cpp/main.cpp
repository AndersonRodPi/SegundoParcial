#include <iostream>
#include<fstream>
#include "Usuarios.h"
#include "Maestros.h"
#include "bitacora.h"
#include "Alumnos.h"
#include "Sedes.h"
#include "Secciones.h"
#include "Horarios.h"
using namespace std;
void creditosModulo();
void catalogos();
void reportes();
void menuGeneral();
usuarios usuarioRegistrado;
int main()
{
    bool accesoUsuarios;
    //creditosModulo();

    accesoUsuarios=usuarioRegistrado.loginUsuarios();
    if (accesoUsuarios){
        menuGeneral();
    }
    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
void menuGeneral(){
    system("cls");
    int choice;
	//char x;
	do
    {
	system("cls");
	cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t Carné: 9959-23-495" << endl;
	cout<<"\t\t\t Nombre: Anderson Cristofer Rodriguez Pivaral"
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|         MENU GENERAL        |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Informes"<<endl;
	cout<<"\t\t\t 3. Salir del Sistema"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{*/
    		catalogos();
    		/*cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//modify();
		reportes();
		break;
	case 3:
    	break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 3);
}
void catalogos(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |         Subsistema - Catalogos          |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. CRUD"<<endl;
	cout<<"\t\t\t 2. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	{
    	    aplicaciones aplicacion;
            aplicacion.menu();
		}
		break;
	case 2:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 2);
}
void informes(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION DE VENTAS - Reportes   |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Clientes"<<endl;
	cout<<"\t\t\t 2. Vendedores"<<endl;
	cout<<"\t\t\t 3. Cobradores"<<endl;
	cout<<"\t\t\t 4. Conceptos"<<endl;
	cout<<"\t\t\t 5. Bitacora"<<endl;
	cout<<"\t\t\t 6. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{
    		catalogos();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		break;
	case 4:
		//search();
		break;
	case 5:
		//display();
		{
            bitacora auditoria;
            auditoria.menu();
		}
		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 6);
}
void creditosModulo(){
string line;
    //char userInput = ' ';
    ifstream myFile("modulo.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        cout<<"Presione cualquier tecla para continuar";
        cin.get();
    }
    else
    {
        cout << "Error FATAL: el archivo de modulo no pudo ser cargado" << endl;
        cin.get();
    }
}
