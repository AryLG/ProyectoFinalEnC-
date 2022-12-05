// ProyectoFinalEnC++.cpp : //
#include <iostream>

using namespace std;


void menu();
void ListaSimples();
void ListaDobles();
void ListaDobleCirculares();
void Pilas();
void Colas();
void Arboles();
void Grafoss();

void BubbleS();
void InsertionS();
void CountingS();
void MergeS();
void ShellS();
void SelectionS();
void QuickS();



//LISTA simple
struct nodoSimple {
	int dato;
	nodoSimple* siguienteSimple;
} *primeroSimple, * ultimoSimple;

void insertarNodoSimple();
void buscarNodoSimple();
void modificarNodoSimple();
void eliminarNodoSimple();
void desplegarListaSimple();

//LISTA DOBLE
struct nodoDoble {
	int dato;
	nodoDoble* siguiente;
	nodoDoble* atras;
} *primero, * ultimo;

void insertarNodoDoble();
void buscarNodoDoble();
void modificarNodoDoble();
void eliminarNodoDoble();
void desplegarListaPUDoble();
void desplegarListaUPDoble();

//LISTA DOBLE circular
struct nodoCircular {
	int dato;
	nodoCircular* siguienteCircular;
	nodoCircular* atrasCircular;
} *primeroCircular, * ultimoCircular;


void insertarNodoCircular();
void buscarNodoCircular();
void modificarNodoCircular();
void eliminarNodoCircular();
void desplegarListaPUCircular();
void desplegarListaUPCircular();

//PILA
struct nodoPila {
	int dato;
	nodoPila* siguientePila;
} *primeroPila;

void insertarNodoPila();
void buscarNodoPila();
void modificarNodoPila();
void eliminarNodoPila();
void desplegarPilaPila();
//COLA
struct nodoCola {
	int dato;
	nodoCola* siguienteCola;
} *primeroCola, * ultimoCola;


void insertarNodoCola();
void buscarNodoCola();
void modificarNodoCola();
void eliminarNodoCola();
void desplegarColaCola();

void ArbolBB();

void BubbleSort();
void InsertionSort();
void CountingSort();
void mergeSort();
void shellsort1();
void SelecccionSort();
void grafoxd();
int main()
{
	

	int opcion = 0;

    do {
        menu();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ListaSimples();
            break;

       case 2:
            ListaDobles();
            break;

        case 3:
            ListaDobleCirculares();
            break;
        case 4:
            Pilas();
            break;
        case 5:
            Colas();
            break;
        case 6:
            Arboles();
            break;
        case 7:
            Grafoss();
            break;
        case 8:
            BubbleS();
            break;
        case 9:
            InsertionS();
            break;
        case 10:
			CountingS();
            break;
        case 11:
            MergeS();
            break;
        case 12:
            ShellS();
            break;
        case 13:
            SelectionS();
            break;
        case 14:
            QuickS();
            break;
        case 15:
			cout << "\n\n Programa finalizado...";
			exit(EXIT_SUCCESS);
			break;
        default:
            cout << "\n\nOPCION NO VALIDA" << endl;
            break;
        }

    } while (opcion != 16);

    return 0;
}

void menu()
{
    cout << "\n|---------------------------------------------|";
    cout << "\n|            °PROYECTO FINAL EN C++°          |";
    cout << "\n|-------------------------|-------------------|";
    cout << "\n| 1. Lista Simple         | 8. Bubble Sort    |";
    cout << "\n| 2. Lista Doble          | 9. Insertion Sort |";
    cout << "\n| 3. Lista Doble Circular | 10. Counting Sort |";
    cout << "\n| 4. Pila                 | 11. Merge Sort    |";
    cout << "\n| 5. Cola                 | 12. Shell Sort    |";
    cout << "\n| 6. Arbol                | 13. Selection Sort|";
    cout << "\n| 7. Grafo                | 14. Quick Sort    |";
    cout << "\n|                         |                   |";
    cout << "\n|                         |                   |";
    cout << "\n|                  |------|-----|             |";
    cout << "\n|                  |  15.Salir  |             |";
    cout << "\n|------------------|------|-----|-------------|";
    cout << "\n\n Escoja una Opcion: ";
}

void ListaSimples()
{
	int opcion = 0;

    do {
        cout << "Lista simple" << endl;
        cout << "\n|-------------------------------------|";
        cout << "\n|           ° LISTA SIMPLE °          |";
        cout << "\n|------------------|------------------|";
        cout << "\n| 1. Insertar      | 4. Eliminar      |";
        cout << "\n| 2. Buscar        | 5. Desplegar     |";
        cout << "\n| 3. Modificar     | 6. Menu          |";
        cout << "\n|------------------|------------------|";
        cout << "\n\n Escoja una Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "\n\n INSERTA NODO EN LA LISTA \n\n";
            insertarNodoSimple();
            break;
        case 2:
            cout << "\n\n BUSCAR UN NODO EN LA LISTA \n\n";
            buscarNodoSimple();
            break;
        case 3:
            cout << "\n\n MODIFICAR UN NODO DE LA LISTA \n\n";
            modificarNodoSimple();
            break;
        case 4:
            cout << "\n\n ELIMINAR UN NODO DE LA LISTA \n\n";
            eliminarNodoSimple();
            break;
        case 5:
            cout << "\n\n DESPLEGAR LISTA DE NODOS \n\n";
            desplegarListaSimple();
            break;
        case 6:
			cout << "\n\n Programa finalizado...";
			break;
        default:
            cout << "\n\n Opcion No Valida \n\n";
      
        break;
  }

    } while (opcion != 6);
}

///////////////////////////7
void ListaDobles()
{
	int opcion = 0;

	do {
		cout << "Lista Doble" << endl;
		cout << "\n|-------------------------------------|";
		cout << "\n|           ° LISTA DOBLE °           |";
		cout << "\n|------------------|------------------|";
		cout << "\n| 1. Insertar      | 5. Desplegar P.U |";
		cout << "\n| 2. Buscar        | 6. Desplegar U.P |";
		cout << "\n| 3. Modificar     | 7. Menu          |";
		cout << "\n| 4. Eliminar      |                  |";
		cout << "\n|------------------|------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "\n\n INSERTA NODO EN LA LISTA \n\n";
			insertarNodoDoble();
			break;
		case 2:
			cout << "\n\n BUSCAR UN NODO EN LA LISTA \n\n";
			buscarNodoDoble();
			break;
		case 3:
			cout << "\n\n MODIFICAR UN NODO DE LA LISTA \n\n";
			modificarNodoDoble();
			break;
		case 4:
			cout << "\n\n ELIMINAR UN NODO DE LA LISTA \n\n";
			eliminarNodoDoble();
			break;
		case 5:
			cout << "\n\n DESPLEGAR LISTA DE NODOS DEL PRIMERO AL UTLIMO\n\n";
			desplegarListaPUDoble();
			break;
		case 6:
			cout << "\n\n DESPLEGAR LISTA DE NODOS DEL UTLIMO AL PRIMERO\n\n";
			desplegarListaUPDoble();
			break;
		case 7:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		break;
		}

	} while (opcion != 7);
	
}
//////////////////////////////////////////////////////////
void ListaDobleCirculares()
{
	int opcion = 0;
	do {
		cout << "Lista Doble Circular" << endl;
		cout << "\n|-------------------------------------|";
		cout << "\n|      ° LISTA CIRCULAR DOBLE °       |";
		cout << "\n|------------------|------------------|";
		cout << "\n| 1. Insertar      | 5. Desplegar P.U |";
		cout << "\n| 2. Buscar        | 6. Desplegar U.P |";
		cout << "\n| 3. Modificar     | 7. Menu          |";
		cout << "\n| 4. Eliminar      |                  |";
		cout << "\n|------------------|------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "\n\n INSERTA NODO EN LA LISTA \n\n";
			insertarNodoCircular();
			break;
		case 2:
			cout << "\n\n BUSCAR UN NODO EN LA LISTA \n\n";
			buscarNodoCircular();
			break;
		case 3:
			cout << "\n\n MODIFICAR UN NODO DE LA LISTA \n\n";
			modificarNodoCircular();
			break;
		case 4:
			cout << "\n\n ELIMINAR UN NODO DE LA LISTA \n\n";
			eliminarNodoCircular();
			break;
		case 5:
			cout << "\n\n DESPLEGAR LISTA DE NODOS DEL PRIMERO AL UTLIMO\n\n";
			desplegarListaPUCircular();
			break;
		case 6:
			cout << "\n\n DESPLEGAR LISTA DE NODOS DEL UTLIMO AL PRIMERO\n\n";
			desplegarListaUPCircular();
			break;
		case 7:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		break;
		}
		

	} while (opcion != 7);

}
///////////////////////////////////////////////
//////////////////////////////////////////////////////////
void Pilas()
{
	int opcion = 0;

	do {
		cout << "Pila" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|              ° PILA °               |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Insertar      | 4. Eliminar      |";
		cout << endl << "| 2. Buscar        | 5. Desplegar     |";
		cout << endl << "| 3. Modificar     | 6. Menu          |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " INSERTA NODO EN LA PILA " << endl << endl;
			insertarNodoPila();
			break;
		case 2:
			cout << endl << endl << " BUSCAR UN NODO EN LA PILA " << endl << endl;
			buscarNodoPila();
			break;
		case 3:
			cout << endl << endl << " MODIFICAR UN NODO DE LA PILA " << endl << endl;
			modificarNodoPila();
			break;
		case 4:
			cout << endl << endl << " ELIMINAR UN NODO DE LA PILA " << endl << endl;
			eliminarNodoPila();
			break;
		case 5:
			cout << endl << endl << " DESPLEGAR PILA DE NODOS " << endl << endl;
			desplegarPilaPila();
			break;
		case 6:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
		break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
			break;

		}



	} while (opcion != 6);
}
///////////////////////////////////////////////
//////////////////////////////////////////////////////////
void Colas()
{
	int opcion = 0;

	do {
		cout << "Cola" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|              ° COLA °               |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Insertar      | 4. Eliminar      |";
		cout << endl << "| 2. Buscar        | 5. Desplegar     |";
		cout << endl << "| 3. Modificar     | 6. Menu          |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " INSERTA NODO EN LA COLA " << endl << endl;
			insertarNodoCola();
			break;
		case 2:
			cout << endl << endl << " BUSCAR UN NODO EN LA COLA " << endl << endl;
			buscarNodoCola();
			break;
		case 3:
			cout << endl << endl << " MODIFICAR UN NODO DE LA COLA " << endl << endl;
			modificarNodoCola();
			break;
		case 4:
			cout << endl << endl << " ELIMINAR UN NODO DE LA COLA " << endl << endl;
			eliminarNodoCola();
			break;
		case 5:
			cout << endl << endl << " DESPLEGAR COLA DE NODOS " << endl << endl;
			desplegarColaCola();
			break;
		case 6:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
		break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
			break;
		}


	} while (opcion != 6);
}
///////////////////////////////////////////////
//////////////////////////////////////////////////////////
void Arboles()
{
	int opcion = 0;

	do {
		cout << "Arbol" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|     ° ARBOL BINARIO DE BUSQUEDA °   |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Crear Arbol                      |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Crear Arbol " << endl << endl;
			ArbolBB();break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
		
		
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
void Grafoss()
{
	int opcion = 0;

	do {
		cout << "Grafo" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|              ° GRAFO °              |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Mostrar matriz                   |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Mostrar Matriz " << endl << endl;
			grafoxd();	break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
		
	
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
void BubbleS()
{
	int opcion = 0;

	do {
		cout << "Bubble Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° BUBBLE SORT  °          |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Crear Lista                      |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Crear Lista " << endl << endl;
			BubbleSort();break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
		
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
void InsertionS()
{
	int opcion = 0;

	do {
		cout << "Insertion Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° INSERTION SORT  °       |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Crear Lista                      |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Crear Lista " << endl << endl;
			InsertionSort();break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
			
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
void CountingS()
{
	int opcion = 0;

	do {
		cout << "Counting Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° COUNTING SORT  °        |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Ver Orden de Lista               |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Lista Ordenada " << endl << endl;
			CountingSort();break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			
		break;
		}
	} while (opcion != 2);
}
///////////////////////////////////////////////
void MergeS()
{
	int opcion = 0;

	do {
		cout << "Merge Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° MERGE SORT  °           |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Ver Lista                        |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Lista  " << endl << endl;
			mergeSort();break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
		
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
void ShellS()
{
	int opcion = 0;

	do {
		cout << "Shell Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° SHELL SORT  °           |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Ver Lista                        |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Lista  " << endl << endl;
			shellsort1();break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			
		break;
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////

///////////////////////////////////////////////
void SelectionS()
{
	int opcion = 0;

	do {
		cout << "Selection Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° SELECTION SORT  °       |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Ver Lista                        |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Lista  " << endl << endl;
			SelecccionSort();break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			
		break;
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
///////////////////////////////////////////////
void QuickS()
{
	int opcion = 0;

	do {
		cout << "Quick Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° QUICK SORT  °           |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Ver Lista                        |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Lista  " << endl << endl;
			QuickS();
		
		break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
void insertarNodoDoble() {
	nodoDoble* nuevo = new nodoDoble();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;

	if (primero == NULL) {
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}
	else {
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}

void buscarNodoDoble() {
	nodoDoble* actual = new nodoDoble();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del Nodo a Buscar: ";
	cin >> nodoBuscado;
	if (primero != NULL) {

		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado\n\n";
				encontrado = true;
			}

			actual = actual->siguiente;
		}

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}

	}
	else {
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}

void modificarNodoDoble() {
	nodoDoble* actual = new nodoDoble();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del Nodo a Buscar para Modificar: ";
	cin >> nodoBuscado;
	if (primero != NULL) {

		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				cout << "\n Ingrese el nuevo dato para este Nodo: ";
				cin >> actual->dato;
				cout << " Nodo Modificado\n\n";
				encontrado = true;
			}

			actual = actual->siguiente;
		}

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}

	}
	else {
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}

// primero = 23      ultimo  = 78    actual  = 12    anterior =  78      encontrado = false      nodoBuscado = 12;

// lista doble         NULL <- 45 -> <- 23 -> <- 78 -> <- 12 -> NULL

void eliminarNodoDoble() {
	nodoDoble* actual = new nodoDoble();
	actual = primero;
	nodoDoble* anterior = new nodoDoble();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del Nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if (primero != NULL) {

		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";

				if (actual == primero) {
					primero = primero->siguiente;
					primero->atras = NULL;
				}
				else if (actual == ultimo) {
					anterior->siguiente = NULL;
					ultimo = anterior;
				}
				else {
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}

				cout << "\n Nodo Eliminado";
				encontrado = true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}

	}
	else {
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}

void desplegarListaPUDoble() {
	nodoDoble* actual = new nodoDoble();
	actual = primero;
	if (primero != NULL) {

		while (actual != NULL) {
			cout << "\n " << actual->dato;
			actual = actual->siguiente;
		}

	}
	else {
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}

void desplegarListaUPDoble() {
	nodoDoble* actual = new nodoDoble();
	actual = ultimo;
	if (primero != NULL) {

		while (actual != NULL) {
			cout << "\n " << actual->dato;
			actual = actual->atras;
		}

	}
	else {
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}











/*lisyta simple
*/
void insertarNodoSimple() {
	nodoSimple* nuevo = new nodoSimple();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;

	if (primeroSimple == NULL) {
		primeroSimple = nuevo;
		primeroSimple->siguienteSimple = NULL;
		ultimoSimple = nuevo;
	}
	else {
		ultimoSimple->siguienteSimple = nuevo;
		nuevo->siguienteSimple = NULL;
		ultimoSimple = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}

void buscarNodoSimple() {
	nodoSimple* actual = new nodoSimple();
	actual = primeroSimple;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar: ";
	cin >> nodoBuscado;
	if (primeroSimple != NULL) {

		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado\n\n";
				encontrado = true;
			}

			actual = actual->siguienteSimple;
		}
		if (!encontrado) {
			cout << "\n Nodo No Encontrado\n\n";
		}
	}
	else {
		cout << "\n La Lista se Encuentra Vacia\n\n";
	}
}

void modificarNodoSimple() {
	nodoSimple* actual = new nodoSimple();
	actual = primeroSimple;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Modificar: ";
	cin >> nodoBuscado;
	if (primero != NULL) {

		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado";
				cout << "\n Ingrese el Nuevo dato para este Nodo: ";
				cin >> actual->dato;
				encontrado = true;
			}

			actual = actual->siguienteSimple;
		}
		if (!encontrado) {
			cout << "\n Nodo No Encontrado\n\n";
		}
	}
	else {
		cout << "\n La Lista se Encuentra Vacia\n\n";
	}
}

// primero = 12    ultimo = 6    actual =  13     anterior = 6    encontrado  = true     nodoBuscado = 98         lis 12 . 45 . 6 . 13                 98

//Lista Simple =                 12 ->  98 ->  6 ->  null        13 -> NULL      

void eliminarNodoSimple() {
	nodoSimple* actual = new nodoSimple();
	actual = primeroSimple;
	nodoSimple* anterior = new nodoSimple();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if (primeroSimple != NULL) {

		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado\n\n";

				if (actual == primeroSimple) {
					primeroSimple = primeroSimple->siguienteSimple;
				}
				else if (actual == ultimoSimple) {
					anterior->siguienteSimple = NULL;
					ultimoSimple = anterior;
				}
				else {
					anterior->siguienteSimple = actual->siguienteSimple;
				}

				cout << "\n Nodo ELiminado con exito\n\n";

				encontrado = true;
			}

			anterior = actual;
			actual = actual->siguienteSimple;
		}
		if (!encontrado) {
			cout << "\n Nodo No Encontrado\n\n";
		}
	}
	else {
		cout << "\n La Lista se Encuentra Vacia\n\n";
	}
}

void desplegarListaSimple() {
	nodoSimple* actual = new nodoSimple();
	actual = primeroSimple;
	if (primeroSimple != NULL) {

		while (actual != NULL) {
			cout << " " << actual->dato << endl;
			actual = actual->siguienteSimple;
		}

	}
	else {
		cout << "\n La Lista se Encuentra Vacia\n\n";
	}
}




//LISRA DOBLE CIRCULAR


void insertarNodoCircular() {
	nodoCircular* nuevo = new nodoCircular();
	cout << "Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;

	if (primeroCircular == NULL) {
		primeroCircular = nuevo;
		ultimoCircular = nuevo;
		primeroCircular->siguienteCircular = primeroCircular;
		primeroCircular->atrasCircular = ultimoCircular;
	}
	else {
		ultimoCircular->siguienteCircular = nuevo;
		nuevo->atrasCircular = ultimoCircular;
		nuevo->siguienteCircular = primeroCircular;
		ultimoCircular = nuevo;
		primeroCircular->atrasCircular = ultimoCircular;
	}
	cout << "\n Nodo Ingresado\n\n";

}

void buscarNodoCircular() {
	nodoCircular* actual = new nodoCircular();
	actual = primeroCircular;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar: ";
	cin >> nodoBuscado;
	if (primero != NULL) {
		do {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado\n\n";
				encontrado = true;
			}

			actual = actual->siguienteCircular;
		} while (actual != primeroCircular && encontrado != true);

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}

	}
	else {
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

void modificarNodoCircular() {
	nodoCircular* actual = new nodoCircular();
	actual = primeroCircular;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Modificar: ";
	cin >> nodoBuscado;
	if (primeroCircular != NULL) {
		do {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";

				cout << "\n Ingrese el nuevo dato para este Nodo: ";
				cin >> actual->dato;
				cout << "\n Nodo Modificado\n\n";

				encontrado = true;
			}

			actual = actual->siguienteCircular;
		} while (actual != primeroCircular && encontrado != true);

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}

	}
	else {
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

// primero = 67    ultimo = 12                nuevo = 12            actual = 12           anterior = 8       encontrado = false     nodoBuscado = 45               

// lista circular doble  =            (12) <- 67 -> <- 45 -> <- 8 -> <- 12 -> (67)

void eliminarNodoCircular() {
	nodoCircular* actual = new nodoCircular();
	actual = primeroCircular;
	nodoCircular* anteriorCircular = new nodoCircular();
	anteriorCircular = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if (primero != NULL) {
		do {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";

				if (actual == primeroCircular) {
					primeroCircular = primeroCircular->siguienteCircular;
					primeroCircular->atrasCircular = ultimoCircular;
					ultimoCircular->siguienteCircular = primeroCircular;
				}
				else if (actual == ultimoCircular) {
					ultimoCircular = anteriorCircular;
					ultimoCircular->siguienteCircular = primeroCircular;
					primeroCircular->atrasCircular = ultimoCircular;
				}
				else {
					anteriorCircular->siguienteCircular = actual->siguienteCircular;
					actual->siguienteCircular->atrasCircular = anteriorCircular;
				}

				cout << "\n Nodo Eliminado\n\n";
				encontrado = true;
			}

			anteriorCircular = actual;
			actual = actual->siguienteCircular;
		} while (actual != primeroCircular && encontrado != true);

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}

	}
	else {
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

void desplegarListaPUCircular() {
	nodoCircular* actual = new nodoCircular();
	actual = primeroCircular;
	if (primeroCircular != NULL) {
		do {
			cout << "\n " << actual->dato;
			actual = actual->siguienteCircular;
		} while (actual != primeroCircular);

	}
	else {
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

void desplegarListaUPCircular() {
	nodoCircular* actual = new nodoCircular();
	actual = ultimoCircular;
	if (primeroCircular != NULL) {
		do {
			cout << "\n " << actual->dato;
			actual = actual->atrasCircular;
		} while (actual != ultimoCircular);

	}
	else {
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}



/*
*/

void insertarNodoPila() {
	nodoPila* nuevo = new nodoPila();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	nuevo->siguientePila = primeroPila;
	primeroPila = nuevo;
	cout << endl << " Nodo Ingresado " << endl << endl;
}

void buscarNodoPila() {
	nodoPila* actual = new nodoPila();
	actual = primeroPila;
	int nodoBuscado = 0;
	bool encontrado = false;
	cout << " Ingrese el dato del Nodo a Buscar: ";
	cin >> nodoBuscado;
	if (primeroPila != NULL) {
		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado" << endl << endl;
				encontrado = true;
			}

			actual = actual->siguientePila;
		}
		if (encontrado == false) {
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}
	else {
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}
}

void modificarNodoPila() {
	nodoPila* actual = new nodoPila();
	actual = primeroPila;
	int nodoBuscado = 0;
	bool encontrado = false;
	cout << " Ingrese el dato del Nodo a Buscar par Modificar: ";
	cin >> nodoBuscado;
	if (primeroPila != NULL) {
		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				cout << endl << " Ingrese el nuevo dato para este Nodo: ";
				cin >> actual->dato;
				cout << endl << " Nodo Modificado " << endl << endl;
				encontrado = true;
			}

			actual = actual->siguientePila;
		}
		if (encontrado == false) {
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}
	else {
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}
}

// primero = 9       actual =  9    anterior = null     nodoBuscado = 9   encontrado = false            4,7,8,9

//PILA  -     9 -> 8 -> 7 -> 4 -> null                       9   8  7  4

void eliminarNodoPila() {
	nodoPila* actual = new nodoPila();
	actual = primeroPila;
	nodoPila* anteriorPila = new nodoPila();
	anteriorPila = NULL;
	int nodoBuscado = 0;
	bool encontrado = false;
	cout << " Ingrese el dato del Nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if (primeroPila != NULL) {
		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado";

				if (actual == primeroPila) {
					primeroPila = primeroPila->siguientePila;
				}
				else {
					anteriorPila->siguientePila = actual->siguientePila;
				}
				cout << endl << " Nodo Eliminado" << endl << endl;
				encontrado = true;
			}
			anteriorPila = actual;
			actual = actual->siguientePila;
		}
		if (encontrado == false) {
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}
	else {
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}
}

void desplegarPilaPila() {
	nodoPila* actual = new nodoPila();
	actual = primeroPila;
	if (primeroPila != NULL) {
		while (actual != NULL) {
			cout << endl << " " << actual->dato;
			actual = actual->siguientePila;
		}
	}
	else {
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}
}







/*

*/


void insertarNodoCola() {
	nodoCola* nuevo = new nodoCola();
	cout << " Ingrese el dato del nuevo Nodo: ";
	cin >> nuevo->dato;

	if (primeroCola == NULL) {
		primeroCola = nuevo;
		primeroCola->siguienteCola = NULL;
		ultimoCola = primeroCola;
	}
	else {
		ultimoCola->siguienteCola = nuevo;
		nuevo->siguienteCola = NULL;
		ultimoCola = nuevo;
	}
	cout << endl << " Nodo Ingresado " << endl << endl;
}

void buscarNodoCola() {
	nodoCola* actual = new nodoCola();
	actual = primeroCola;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar: ";
	cin >> nodoBuscado;
	if (primeroCola != NULL) {
		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				encontrado = true;
			}

			actual = actual->siguienteCola;
		}
		if (!encontrado) {
			cout << "\n Nodo No Encontrado";
		}
	}
	else {
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
}

void modificarNodoCola() {
	nodoCola* actual = new nodoCola();
	actual = primeroCola;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Modificar: ";
	cin >> nodoBuscado;
	if (primeroCola != NULL) {
		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				cout << "\n Ingrese el nuevo dato para este Nodo: ";
				cin >> actual->dato;
				cout << "\n Nodo Modificado\n\n";
				encontrado = true;
			}

			actual = actual->siguienteCola;
		}
		if (!encontrado) {
			cout << "\n Nodo No Encontrado\n\n";
		}
	}
	else {
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
}

// primero = 45    ultimo = 12      actual = 12   anterior = null      encontrado = false         nodoBuscado = 6              45, 6, 7 , 12

// COLA            45 -> 6 -> 7 ->  12 -> NULL      

void eliminarNodoCola() {
	nodoCola* actual = new nodoCola();
	actual = primeroCola;
	nodoCola* anteriorCola = new nodoCola();
	anteriorCola = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if (primeroCola != NULL) {

		while (actual != NULL && encontrado != true) {

			if (actual->dato == nodoBuscado) {
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";

				if (actual == primeroCola) {
					primeroCola = primeroCola->siguienteCola;
				}
				else if (actual == ultimoCola) {
					anteriorCola->siguienteCola = NULL;
					ultimoCola = anteriorCola;
				}
				else {
					anteriorCola->siguienteCola = actual->siguienteCola;
				}

				cout << "\n Nodo Eliminado\n\n";

				encontrado = true;
			}
			anteriorCola = actual;
			actual = actual->siguienteCola;
		}
		if (!encontrado) {
			cout << "\n Nodo No Encontrado\n\n";
		}
	}
	else {
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
}

void desplegarColaCola() {
	nodoCola* actual = new nodoCola();
	actual = primeroCola;
	if (primeroCola != NULL) {
		while (actual != NULL) {
			cout << endl << " " << actual->dato;
			actual = actual->siguienteCola;
		}
	}
	else {
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
}


/*
*/




/**/
#include <cstdlib>


struct nodoABB {
	int nro;
	struct nodoABB* izq, * der;
};

typedef struct nodoABB* ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

ABB crearNodo(int x)
{
	ABB nuevoNodo = new(struct nodoABB);
	nuevoNodo->nro = x;
	nuevoNodo->izq = NULL;
	nuevoNodo->der = NULL;

	return nuevoNodo;
}
void insertar(ABB& arbol, int x)
{
	if (arbol == NULL)
	{
		arbol = crearNodo(x);
	}
	else if (x < arbol->nro)
		insertar(arbol->izq, x);
	else if (x > arbol->nro)
		insertar(arbol->der, x);
}

void preOrden(ABB arbol)
{
	if (arbol != NULL)
	{
		cout << arbol->nro << " ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

void enOrden(ABB arbol)
{
	if (arbol != NULL)
	{
		enOrden(arbol->izq);
		cout << arbol->nro << " ";
		enOrden(arbol->der);
	}
}

void postOrden(ABB arbol)
{
	if (arbol != NULL)
	{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout << arbol->nro << " ";
	}
}

void verArbol(ABB arbol, int n)
{
	if (arbol == NULL)
		return;
	verArbol(arbol->der, n + 1);

	for (int i = 0; i < n; i++)
		cout << "   ";

	cout << arbol->nro << endl;

	verArbol(arbol->izq, n + 1);
}

void ArbolBB()
{
	ABB arbol = NULL;   // creado Arbol

	int n;  // numero de nodos del arbol
	int x; // elemento a insertar en cada nodo

	cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";

	cout << " Numero de nodos del arbol:  ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << " Numero del nodo " << i + 1 << ": ";
		cin >> x;
		insertar(arbol, x);
	}

	cout << "\n Mostrando ABB \n\n";
	verArbol(arbol, 0);

	cout << "\n Recorridos del ABB";

	cout << "\n\n En orden   :  ";   enOrden(arbol);
	cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
	cout << "\n\n Post Orden :  ";   postOrden(arbol);

	cout << endl << endl;

	system("pause");
	return;
}

//Bublle sort

int ordenar(int[], int);
int imprimir(int[]);

void BubbleSort()
{
	int c, lista[9], ord;
	for (c = 0; c <= 9; c++)
	{
		cout << "Numero " << c + 1 << ": "; cin >> lista[c];
	}
	cout << " Ascendente [1] Descendente [2] --> Opcion: "; cin >> ord;
	if (ord == 1 || ord == 2)
	{
		ordenar(lista, ord);
		imprimir(lista);
	}
	return;
}

int ordenar(int lista[], int ord)
{
	int c1, c2, aux;
	for (c1 = 0; c1 <= 9; c1++)
	{
		for (c2 = 0; c2 < 9; c2++)
		{
			if (ord == 1)
			{
				if (lista[c2] > lista[c2 + 1])
				{
					aux = lista[c2];
					lista[c2] = lista[c2 + 1];
					lista[c2 + 1] = aux;
				}
			}
			else
			{
				if (lista[c2] < lista[c2 + 1])
				{
					aux = lista[c2];
					lista[c2] = lista[c2 + 1];
					lista[c2 + 1] = aux;
				}
			}
		}
	}
	return 0;
}

int imprimir(int lista[])
{
	int c;
	for (c = 0; c <= 9; c++)
		cout << lista[c] << " ";
	cin.get(); cin.get();
	return 0;
}

//INSERTION SORT
void InsertionSort()
{
	int arr[50], tot, i, j, k, elem, index;
	cout << "Ingrese el tamano para la matriz: ";
	cin >> tot;
	cout << "Enter " << tot << " Elementos de matriz: ";
	for (i = 0; i < tot; i++)
		cin >> arr[i];
	for (i = 1; i < tot; i++)
	{
		elem = arr[i];
		if (elem < arr[i - 1])
		{
			for (j = 0; j <= i; j++)
			{
				if (elem < arr[j])
				{
					index = j;
					for (k = i; k > j; k--)
						arr[k] = arr[k - 1];
					break;
				}

			}
		}
		else
			continue;
		arr[index] = elem;
	}
	cout << "\nLa nueva matriz (matriz ordenada):\n";
	for (i = 0; i < tot; i++)
		cout << arr[i] << "  ";
	cout << endl;
	return;
}

//COUNTING SORT
#include <iostream>
using namespace std;

void countSort(int array[], int size) {
	// The size of count must be at least the (max+1) but
	// we cannot assign declare it as int count(max+1) in C++ as
	// it does not support dynamic memory allocation.
	// So, its size is provided statically.
	int output[10];
	int count[10];
	int max = array[0];

	// Find the largest element of the array
	for (int i = 1; i < size; i++) {
		if (array[i] > max)
			max = array[i];
	}

	// Initialize count array with all zeros.
	for (int i = 0; i <= max; ++i) {
		count[i] = 0;
	}

	// Store the count of each element
	for (int i = 0; i < size; i++) {
		count[array[i]]++;
	}

	// Store the cummulative count of each array
	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
	}

	// Find the index of each element of the original array in count array, and
	// place the elements in output array
	for (int i = size - 1; i >= 0; i--) {
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}

	// Copy the sorted elements into original array
	for (int i = 0; i < size; i++) {
		array[i] = output[i];
	}
}

// Function to print an array
void printArray(int array[], int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

// Driver code
void CountingSort() {
	int array[] = { 4, 2, 2, 8, 3, 3, 1 };
	int n = sizeof(array) / sizeof(array[0]);
	countSort(array, n);
	printArray(array, n);
}

//MERGE SORT
void merge(int array[], int const left, int const mid,
	int const right)
{
	auto const subArrayOne = mid - left + 1;
	auto const subArrayTwo = right - mid;


	auto* leftArray = new int[subArrayOne],
		* rightArray = new int[subArrayTwo];

	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto indexOfSubArrayOne
		= 0,
		indexOfSubArrayTwo
		= 0;

	int indexOfMergedArray
		= left;

	while (indexOfSubArrayOne < subArrayOne
		&& indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne]
			<= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray]
				= leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray]
				= rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}
	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray]
			= leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}
	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray]
			= rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
	delete[] leftArray;
	delete[] rightArray;
}

void mergeSort(int array[], int const begin, int const end)
{
	if (begin >= end)
		return;

	auto mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

void printArraya(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

void mergeSort()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Matriz desordenada es \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nMatriz Ordenada \n";
	printArray(arr, arr_size);
	return;
}



///////////////////////////////

int shellSort(int arr[], int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{

		for (int i = gap; i < n; i += 1)
		{

			int temp = arr[i];


			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];


			arr[j] = temp;
		}
	}
	return 0;
}

void printArray2(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

void shellsort1()
{
	int arr[] = { 12, 34, 54, 2, 3 }, i;
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Lista desordenada: \n";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nLista Ordenada: \n";
	printArray(arr, n);

	return;
}

////////////////////////////////////////

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{

		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		if (min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}
void printArrayb(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void SelecccionSort()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return;
}




//////////////////////////////7
#include <cstdlib>
#include <vector>
class Vertice
{
public:
	vector<int> adyacencias;
	int valor;
	Vertice();
	Vertice(int);
};

Vertice::Vertice() {

}

Vertice::Vertice(int pValor) {
	valor = pValor;
}

class Grafo
{
public:
	int tamano;
	vector<Vertice> lista;
	void agregarAdyacencia(int, int);
	void agregarVertice(Vertice);
	vector< vector<int> > caminos;
	vector< vector<int> > path(int, int);
	Grafo();
};
Grafo::Grafo() {
}

void Grafo::agregarAdyacencia(int pos, int pos2) {
	bool existe = false;
	bool yaEsta = false;
	if (caminos.size() == 0) {
		vector<int> temp;
		temp.push_back(pos);
		temp.push_back(pos2);
		caminos.push_back(temp);
	}

	else {
		int i = 0;
		while (i < caminos.size()) {
			if (caminos[i].size() == 2) {
				if (caminos[i][0] == pos && caminos[i][1] == pos2) {
					yaEsta = true;
					break;
				}
				else i += 1;
			}
			else i += 1;

		}
		i = 0;
		while (i < caminos.size()) {
			int j = caminos[i].size() - 1;
			if (caminos[i][j] == pos) {
				existe = true;
				break;
			}
			else {
				i += 1;
			}
		}
		if (existe) {
			vector<int> temp2;
			int j = 0;
			while (j < caminos[i].size()) {
				temp2.push_back(caminos[i][j]);
				j += 1;
			}
			temp2.push_back(pos2);
			existe = false;
			caminos.push_back(temp2);
		}
		if (!yaEsta) {
			vector<int> temp2;
			temp2.push_back(pos);
			temp2.push_back(pos2);
			yaEsta = false;
			caminos.push_back(temp2);
		}
		else {
			vector<int> temp;
			temp.push_back(pos);
			temp.push_back(pos2);
			caminos.push_back(temp);
			existe = false;
		}
	}
}

void Grafo::agregarVertice(Vertice vertice) {
	lista.push_back(vertice);
}

vector< vector<int> > Grafo::path(int id1, int id2) {
	for (int i = 0; i < caminos.size(); i++) {
		if (caminos[i][0] == id1 && caminos[i][caminos[i].size() - 1] == id2) {
			vector< vector<int> > Lista;
			Lista.push_back(caminos[i]);
			return Lista;
		}
	}
}

void grafoxd() {
	Vertice vertice1 = Vertice(50);
	Vertice vertice2 = Vertice(25);
	Vertice vertice3 = Vertice(13);
	Vertice vertice4 = Vertice(24);
	Vertice vertice5 = Vertice(33);
	Grafo graph = Grafo();
	graph.agregarVertice(vertice1);
	graph.agregarVertice(vertice2);
	graph.agregarVertice(vertice3);
	graph.agregarVertice(vertice4);
	graph.agregarVertice(vertice5);
	graph.agregarAdyacencia(50, 25);
	graph.agregarAdyacencia(25, 13);
	graph.agregarAdyacencia(13, 24);
	graph.agregarAdyacencia(24, 33);
	vector< vector<int> > Lista = graph.path(50, 33);
	for (int i = 0; i < Lista[0].size(); i++) {
		cout << Lista[0][i];
		cout << "-";
	}
	cout << "" << endl;
	vector< vector<int> > Lista2 = graph.path(50, 13);
	for (int j = 0; j < Lista2[0].size(); j++) {
		cout << Lista2[0][j];
		cout << "-";
	}
	cout << "" << endl;
	vector< vector<int> > Lista3 = graph.path(24, 33);
	for (int j = 0; j < Lista3[0].size(); j++) {
		cout << Lista3[0][j];
		cout << "-";
	}
	cin.get();
	cin.get();
	return;
}