#ifndef CRUD_H
#define CRUD_H
#include <iostream>
//#include <string>
using namespace std;

class CRUD
{
    private:
		string id, nombre, estatus;
	public:
		void altas();
		void bajas();
		void modificaciones();
		void consultas();
};

#endif // CRUD_H
