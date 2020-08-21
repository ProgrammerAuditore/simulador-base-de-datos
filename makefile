# Nombre del ejecutable
AppName=mitoDB

# Compilador a usar
CPP=g++

# Contenidos de MITODB
CMITO=./include/

# Contenidos de APP
CAPP=./app/

# Archivos objetos requeridos
OBJ=main.o mitodb.o app.o

all: $(OBJ)
	$(CPP) -o $(AppName) main.o mitodb.o app.o
	./$(AppName)
	
main.o: main.cpp
	$(CPP) -c -g main.cpp

mitodb.o: $(CMITO)mitodb.cpp
	$(CPP) -c -g $(CMITO)mitodb.cpp 

app.o: $(CAPP)app.cpp
	$(CPP) -c -g $(CAPP)app.cpp -I./include/ -I./app/

clean: 
	rm  -- $(OBJ) $(AppName)