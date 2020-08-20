#ifndef __H_MITODB__
#define __H_MITODB__
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include "mitodb.hpp"

_file_::_file_( std::string _path ){
    this->db = new std::fstream( _path, std::ios::out | std::ios::in  );
    if(  this->db->fail() ){
        std::cout << _path + " : Archivo no encontrado" << std::endl;
    }
    this->db->close();
}

_file_::~_file_(){
    delete this->db;
    std::cout << "Objeto elimado" << std::endl;
}

void mensaje(){
    _file_* dat = new _file_("mitodb/.xdata");
    delete dat;
}

#endif