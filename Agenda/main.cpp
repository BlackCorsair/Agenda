#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
// FUNCIONES
void menu(void);
bool phoneVerification(unsigned int number);


// VARIABLES GLOBALES
bool EXIT = false;


// MAIN
int main(void)
{
	cout << "@@@ WELCOME TO THE AGENDA APP @@@\n";
	while (EXIT == false) {
		menu();
	}
	system("pause");
}

// **************	FUNCIONES	*****************
/*
*	NOMBRE: void menu(void), RF01
*	FUNCIÓN: muestra un menú por consola para que el usuario escoja una opción, una vez escogida la
*			opción, llama  a la función pertinente y termina
*	ENTRADAS:	ninguna
*	SALIDAS:	ninguna
*/
void menu(void)
{
	// variables
	// variable 'option' en la que guardamos la opción escogida por el usuario
	int option = -1;
	// menu de inicio con las distintas opciones
	cout << "\nPlease, choose one option: \n"
		<< "1 - view all contacts\n"
		<< "2 - look for contact\n"
		<< "3 - edit existing contact\n"
		<< "4 - add new contact\n"
		<< "5 - remove contact\n"
		<< "0 - EXIT\n\n";
	// introdución de la opción
	cin >> option;
	// en el caso de que el usuario no introduzca una opción válida, se le vuelve a pedir que introduzca una
	while (option < 0 | option > 5)
	{
		cout << "Option no valid, please try again: ";
		cin.clear();	// para el caso de que se introduzca algo que no sea un int y cin dé error, limpiamos el buffer de entrada
		cin.ignore();	// ignoramos el error y dejamos lista la entrada
		cin >> option;
		cout << std::endl;
	}
	// switch con las distintas opciones desde las que se llama a las funciones especificadas
	switch (option)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 0:
		EXIT = true;
		break;
	}
}
/*
*	NOMBRE: bool phoneVerification(unsigned int number), RNF01
*	FUNCIÓN: comprueba que el número introducido es de 9 dígitos, en el caso de que tenga 9 dígitos devuelve true
			y en caso contrario devuelve false.
*	ENTRADAS:	un entero sin signo
*	SALIDAS:	un boolean
*/
bool phoneVerification(unsigned int number)
{
	int length = 1;
	number = 234567545;
	while (number /= 10)
		length++;
	if (length != 9)
	{
		return false;
	}
	return true;
}

//***********************	CLASSES	**************************
/*
*	NOMBRE: Contacto, RC01
*	ATRIBUTOS: nombre (obl), apellido_1 (obligatorio), apellido_2 (opcional), direccion (opc), email (opc), telefono (obl)
*	FUNCIONES:	getters y setters para todos
*/
class Contacto
{
private:
	string name;
	string surname_1;
	string surname_2;
	string address;
	string email;
	unsigned int phone;
public:
	Contacto();
	void addContact();
};
//	constructor de Contacto
Contacto::Contacto() {}

void Contacto::addContact()
{
	// entrada del nombre (obl)
	do {
		cout << "enter name (obligatory): ";
		cin >> name;
	} while (name == "");
	// entrada del primer apellido (obl)
	do {
		cout << "enter first surname (obligatory): ";
		cin >> surname_1;
	} while (surname_1 == "");
	// entrada del segundo apellidoo (opc)
	cout << "enter second surname: ";
	cin >> surname_2;
	// entrada de la dirección (opc)
	cout << "enter address: ";
	cin >> address;
	// entrada del email (opc)
	cout << "enter email: ";
	cin >> email;
	// entrada del número de teléfono (obl)
	do {
		cout << "enter phone (obligatory): ";
		cin >> phone;
	} while (phone == NULL | phoneVerification(phone) == false);
}


