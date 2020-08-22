#ifndef __H_MITODB__
#define __H_MITODB__
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

class _file_fstream_ {
    protected:
    std::string db_name;
    std::fstream* db;
    void verificar_fstream();

    public:
    _file_fstream_( std::string );
    ~_file_fstream_();

};

class data : _file_fstream_ {
    
    public:
    data( std::string _path) : _file_fstream_( _path ){}
};

void mostrar_base_de_datos();

#endif