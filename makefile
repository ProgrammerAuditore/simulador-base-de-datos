# Nombre del ejecutable
AppName=app

# Compilador a usar
CPP=g++

# Contenidos de MITODB
CMITO=./include/

# Archivos objetos requeridos
OBJ=main.o mitodb.o

all: $(OBJ)
	$(CPP) -o $(AppName) main.o mitodb.o
	
main.o: main.cpp
	$(CPP) -c -g main.cpp

mitodb.o: $(CMITO)mitodb.cpp
	$(CPP) -c -g $(CMITO)mitodb.cpp 

clean: 
	rm  -- $(OBJ) $(AppName)