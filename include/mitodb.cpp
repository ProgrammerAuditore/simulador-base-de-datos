#include "mitodb.hpp"

_file_fstream_::_file_fstream_( std::string _path ){
    this->db_name = _path;
    this->db = new std::fstream( _path, std::ios::out | std::ios::in  );
    this->verificar_fstream();
    this->db->close();
}

_file_fstream_::~_file_fstream_(){
    delete this->db;
    std::cout << "Objeto elimado" << std::endl;
}

void _file_fstream_::verificar_fstream(){
    if(  this->db->fail() ){
        std::cout << this->db_name  + " : Archivo no encontrado" << std::endl;
    }
}
