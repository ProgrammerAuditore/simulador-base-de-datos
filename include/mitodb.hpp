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
    data( std::string _path) : _file_fstream_( _path ){
        std::cout << "Hola payaso!" << std::endl;
    }

    void xxx(){
        std::cout << this->db_name << std::endl;
    }

};

void mensaje();

#endif