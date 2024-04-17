#include "CRUD.h"

CRUD::CRUD()
{
    //ctor
}

CRUD::~CRUD()
{
    //dtor
}
#include <iostream>
#include <string>


void CRUD::menuHorarios()
{
    int opcion;
    std::string horario;

    do
    {
        system("cls");
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\t|            SISTEMA CRUD           |" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\t 1. altas" << std::endl;
        std::cout << "\t\t\t 2. bajas" << std::endl;
        std::cout << "\t\t\t 3. modificaciones" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\tOpcion a escoger:[1/2/3/4]" << std::endl;
        std::cout << "\t\t\t------------------------------------" << std::endl;
        std::cout << "\t\t\tIngresa tu Opcion: ";
        std::cin >> opcion;

        switch(opcion)
        {
        case 1:
            {
               // horario = "matutino";
            //    seleccionar(horario);
            }

            break;
        case 2:
            //horario = "vespertino";
            //seleccionar(horario);
            break;
        case 3:
            // Volver al inicio
            break;
        case 4:
            //horario = "vespertino";
            //seleccionar(horario);
            break;
        default:
            std::cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        }
        std::cin.get();
    } while(opcion != 4);
}
