#include "mitodb.hpp"
#include "app.hpp"

#define CLEANSCREEN system("clear")
#define PAUSESCREEN { std::cin.ignore(); std::getchar(); }

void menu_ver_opciones(){
    std::cout << "1 > Mostrar base de datos" << std::endl;
    std::cout << "0 > Salir" << std::endl;
}

void menu_seleccionar_opciones(std::string &_opc){
    char* opc = new char;
    std::strcpy(opc, _opc.c_str() );
    
    switch (std::atoi(opc))
    {
    case 1:
        CLEANSCREEN;
        std::cout << "Mostrando base de datos" << std::endl;
        PAUSESCREEN;
        break;
    
    default:
        break;
    }
}

void menu_main(){
    std::string opcSeleccionado;

    do{
        CLEANSCREEN;
        menu_ver_opciones();
        std::cout << "Menu opciones" << std::endl;
        std::cin >> opcSeleccionado;
        menu_seleccionar_opciones( opcSeleccionado );

    }while(opcSeleccionado != "0");

}