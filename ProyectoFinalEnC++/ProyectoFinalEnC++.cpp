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

void Grafoos();
void BubbleS();
void InsertionS();
void CountingS();
void MergeS();

void SelectionS();
void QuickS();
void ShellS();
void quicksort123();
void burbuja();

void InsersionSo();

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
void listaCirculares();
void BubbleSort();
void InsertionSort();
void CountingSort();
void mergeSort();
void ShellSort();
void TreeBS();void RadixS();
void ListaCircular();

void SelecccionSort();

#include<conio.h>

struct nodo {
	char nombre;//nombre del vertice o nodo
	struct nodo* sgte;
	struct arista* ady;//puntero hacia la primera arista del nodo
};
struct arista {
	struct nodo* destino;//puntero al nodo de llegada
	struct arista* sgte;
};
typedef struct nodo* Tnodo;//  Tipo Nodo
typedef struct arista* Tarista; //Tipo Arista

Tnodo p;//puntero cabeza

void insertar_nodo();
void agrega_arista(Tnodo&, Tnodo&, Tarista&);
void insertar_arista();
void vaciar_aristas(Tnodo&);
void eliminar_nodo();
void eliminar_arista();
void mostrar_grafo();
void mostrar_aristas();
int main()
{
	
     p = NULL;
	int opcion = 0;
	
	    // opcion del menu


	system("color 0b");
    do {
        menu();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ListaSimples();
            break;

       case 2:
            ListaCircular();
            break;
	   case 3:
		   ListaDobles();
		   break;

        case 4:
            ListaDobleCirculares();
            break;
        case 5:
            Pilas();
            break;
        case 6:
            Colas();
            break;
        case 7:
            Arboles();
            break;
		case 8:
			Grafoos();
			break;
        case 9:
            BubbleS();
            break;
        case 10:
            InsertionS();
            break;
        case 11:
			CountingS();
            break;
        case 12:
            MergeS();
            break;
      
        case 13:
            SelectionS();
            break;
        case 14:
            QuickS();
            break;
		case 15:
			ShellSort();
			break;
			
        case 18:
			cout << "\n\n Programa finalizado...";
			exit(EXIT_SUCCESS);
			break;
        default:
            cout << "\n\nOPCION NO VALIDA" << endl;
            break;
        }

    } while (opcion != 18);

    return 0;
}

void menu()
{
    cout << "\n|---------------------------------------------|";
    cout << "\n|            °PROYECTO FINAL EN C++°          |";
    cout << "\n|-------------------------|-------------------|";
	cout << "\n|      ESTRUCTURAS DE     |  ALGORITMOS DE    |";
	cout << "\n|          DATOS          |   ORDENAMIENTO    |";
	cout << "\n|                         |                   |";
    cout << "\n| 1. Lista Simple         | 9. Bubble Sort    |";
	cout << "\n| 2. Lista Circular       | 10. Insertion Sort|";
    cout << "\n| 3. Lista Doble Enlazada | 11. Counting Sort |";
    cout << "\n| 4. Lista Doble Circular | 12. Merge Sort    |";
    cout << "\n| 5. Pila                 | 13. Selection Sort|";
    cout << "\n| 6. Cola                 | 14. Quick Sort    |";
    cout << "\n| 7. Arbol                | 15. Shell Sort    |";
    cout << "\n| 8. Grafos               | 16. Radix Sort    |";
    cout << "\n|                         | 17. Tree Binary S |";
    cout << "\n|                         |                   |";
    cout << "\n|                  |------|-----|             |";
    cout << "\n|                  |  18.Salir  |             |";
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

//////////////////////////////////////////////////////////////////
void ListaCircular()
{
	int opcion = 0;

	do {
		cout << "Lista Circular" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° LISTA CIRCULAR  °       |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Ver Orden de Lista               |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Lista Ordenada " << endl << endl;
			listaCirculares(); break;
		case 2:
			cout << endl << endl << " Programa finalizado..." << endl << endl;

			break;
		}
	} while (opcion != 2);
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
// //////////////////////////////////////////////////////////
void Grafoos()
{
	int opcion = 0;

	do {
		cout << "Grafos" << endl;
		cout << "\n|---------------------------------------|";
		cout << "\n|           ° GRAFO DIRIGIDO °          |";
		cout << "\n|-------------------|-------------------|";
		cout << "\n| 1. Insertar nodo  | 5. Mostrar Grafo  |";
		cout << "\n| 2. Insertar Arista| 6. Mostrar Arista |";
		cout << "\n| 3. Eliminar nodo  | 7. Menu           |";
		cout << "\n| 4. Eliminar Arista|                   |";
		cout << "\n|-------------------|-------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			insertar_nodo();
			break;
		case 2: insertar_arista();
			break;
		case 3: eliminar_nodo();
			break;
		case 4: eliminar_arista();
			break;
		case 5: mostrar_grafo();
			break;
		case 6: mostrar_aristas();
			break;

		case 7:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;


		}


	} while (opcion != 2);
}
///////////////////////////////////////////////
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
			burbuja();break;
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
			InsersionSo();break;
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
// ///////////////////////////////////////////////
void ShellSort()
{
	int opcion = 0;

	do {
		cout << "Shell Sort" << endl;
		cout << endl << "|-------------------------------------|";
		cout << endl << "|           ° SHELL SORT  °           |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Crear Lista                        |";
		cout << endl << "| 2. Menu                             |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << endl << endl << " Lista  " << endl << endl;
			ShellS();

			break;
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
			quicksort123();
		
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
	ABB arbol = NULL;   

	int n;  
	int x; 

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

static void bubblesort(int Array[], int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (Array[j] > Array[j + 1]) {
				temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
}
static void bubblesort2(int Array[], int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (Array[j] < Array[j + 1]) {
				temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
}

static void PrintArrayBS(int Array[], int n) {
	for (int i = 0; i < n; i++)
		cout << Array[i] << " ";
	cout << "\n";
}

void burbuja() {
	int MyArray[] = { 8, 10, 23, 100, 4, 9, 2 };
	int n = sizeof(MyArray) / sizeof(MyArray[0]);
	cout << "Arreglo Desordenado\n";
	PrintArrayBS(MyArray, n);

	bubblesort(MyArray, n);
	cout << "\nArreglo Ascendentemente\n";
	PrintArrayBS(MyArray, n);

	bubblesort2(MyArray, n);
	cout << "\nArreglo Descendentemente\n";
	PrintArrayBS(MyArray, n);
	return;
}

//INSERTION SORT
static void insertionsort1(int Array[], int n) {
	for (int i = 0; i < n; i++) {
		int curr = Array[i];
		int j = i - 1;
		while (j >= 0 && curr < Array[j]) {
			Array[j + 1] = Array[j];
			Array[j] = curr;
			j = j - 1;
		}
	}
}
static void insertionsort2(int Array[], int n) {
	for (int i = 0; i < n; i++) {
		int curr = Array[i];
		int j = i - 1;
		while (j >= 0 && curr > Array[j]) {
			Array[j + 1] = Array[j];
			Array[j] = curr;
			j = j - 1;
		}
	}
}

static void PrintArrayIS(int Array[], int n) {
	for (int i = 0; i < n; i++)
		cout << Array[i] << " ";
	cout << "\n";
}

void InsersionSo() {
	int MyArray[] = { 5, 45, 23, 65, 9, 89, 3 };
	int n = sizeof(MyArray) / sizeof(MyArray[0]);
	cout << "Arreglo desordenado\n";
	PrintArrayIS(MyArray, n);

	insertionsort1(MyArray, n);
	cout << "\nArreglo Ascendentemente\n";
	PrintArrayIS(MyArray, n);

	insertionsort2(MyArray, n);
	cout << "\nArreglo Descendentemente\n";
	PrintArrayIS(MyArray, n);
	return;
}

//COUNTING SORT
#include <iostream>
using namespace std;

void countSort(int array[], int size) {
	
	int output[10];
	int count[10];
	int max = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] > max)
			max = array[i];
	}

	for (int i = 0; i <= max; ++i) {
		count[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		count[array[i]]++;
	}

	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
	}

	for (int i = size - 1; i >= 0; i--) {
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}

	for (int i = 0; i < size; i++) {
		array[i] = output[i];
	}
}

void countSort2(int array[], int size) {

	int output[10];
	int count[10];
	int max = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] > max)
			max = array[i];
	}

	for (int i = 0; i <= max; ++i) {
		count[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		count[array[i]]++;
	}

	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
	}

	for (int i = size - 1; i >= 0; i--) {
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}

	for (int i = 0; i < size; i++) {
		array[i] = output[i];
	}
}

void printArrayCS(int array[], int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}


void CountingSort() {
	int array[] = { 4, 2, 2, 8, 3, 3, 1 ,8, 8 };
	int n = sizeof(array) / sizeof(array[0]);
	cout << "Arreglo desordenado\n";
	printArrayCS(array, n);

	countSort(array, n);
	cout << "\nArreglo Ascendentemente\n";
	printArrayCS(array, n);

	countSort2(array, n);
	cout << "\nArreglo Descendentemente\n";
	printArrayCS(array, n);
	


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
	printArrayCS(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nMatriz Ordenada \n";
	printArrayCS(arr, arr_size);
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
	cout << "Matriz desordenada es \n";
	printArrayCS(arr, n);
	selectionSort(arr, n);
	cout << "Arreglo Ordenado: \n";
	printArrayCS(arr, n);
	return;
}

/*                      INSERTAR NODO AL GRAFO
---------------------------------------------------------------------*/
void insertar_nodo()
{
	Tnodo t, nuevo = new struct nodo;
	cout << "INGRESE VARIABLE:";
	cin >> nuevo->nombre;
	nuevo->sgte = NULL;
	nuevo->ady = NULL;

	if (p == NULL)
	{
		p = nuevo;
		cout << "PRIMER NODO...!!!";
	}
	else
	{
		t = p;
		while (t->sgte != NULL)
		{
			t = t->sgte;
		}
		t->sgte = nuevo;
		cout << "NODO INGRESADO...!!!";
	}

}

/*                      AGREGAR ARISTA
	funcion que utilizada para agregar la arista a dos nodos
---------------------------------------------------------------------*/
void agrega_arista(Tnodo& aux, Tnodo& aux2, Tarista& nuevo)
{
	Tarista q;
	if (aux->ady == NULL)
	{
		aux->ady = nuevo;
		nuevo->destino = aux2;
		cout << "PRIMERA ARISTA....!";
	}
	else
	{
		q = aux->ady;
		while (q->sgte != NULL)
			q = q->sgte;
		nuevo->destino = aux2;
		q->sgte = nuevo;
		cout << "ARISTA AGREGADA...!!!!";
	}

}

void insertar_arista()
{
	char ini, fin;
	Tarista nuevo = new struct arista;
	Tnodo aux, aux2;

	if (p == NULL)
	{
		cout << "GRAFO VACIO...!!!!";
		return;
	}
	nuevo->sgte = NULL;
	cout << "INGRESE NODO DE INICIO:";
	cin >> ini;
	cout << "INGRESE NODO FINAL:";
	cin >> fin;
	aux = p;
	aux2 = p;
	while (aux2 != NULL)
	{
		if (aux2->nombre == fin)
		{
			break;
		}

		aux2 = aux2->sgte;
	}
	while (aux != NULL)
	{
		if (aux->nombre == ini)
		{
			agrega_arista(aux, aux2, nuevo);
			return;
		}

		aux = aux->sgte;
	}
}

void vaciar_aristas(Tnodo& aux)
{
	Tarista q, r;
	q = aux->ady;
	while (q->sgte != NULL)
	{
		r = q;
		q = q->sgte;
		delete(r);
	}
}
void eliminar_nodo()
{
	char var;
	Tnodo aux, ant = NULL;
	aux = p;
	cout << "ELIMINAR UN NODO\n";
	if (p == NULL)
	{
		cout << "GRAFO VACIO...!!!!";
		return;
	}
	cout << "INGRESE NOMBRE DE VARIABLE:";
	cin >> var;

	while (aux != NULL)
	{
		if (aux->nombre == var)
		{
			if (aux->ady != NULL)
				vaciar_aristas(aux);

			if (aux == p)
			{

				p = p->sgte;
				delete(aux);
				cout << "NODO ELIMINADO...!!!!";
				return;



			}
			else
			{
				ant->sgte = aux->sgte;
				delete(aux);
				cout << "NODO ELIMINADO...!!!!";
				return;
			}
		}
		else
		{
			ant = aux;
			aux = aux->sgte;
		}
	}

}

/*                      ELIMINAR ARISTA
	funcion utilizada para eliminar una arista
---------------------------------------------------------------------*/
void eliminar_arista()
{
	char ini, fin;
	Tnodo aux, aux2;
	Tarista q, r = NULL;
	cout << "\n ELIMINAR ARISTA\n";
	cout << "INGRESE NODO DE INICIO:";
	cin >> ini;
	cout << "INGRESE NODO FINAL:";
	cin >> fin;
	aux = p;
	aux2 = p;
	while (aux2 != NULL)
	{
		if (aux2->nombre == fin)
		{
			break;
		}
		else
			aux2 = aux2->sgte;
	}
	while (aux != NULL)
	{
		if (aux->nombre == ini)
		{
			q = aux->ady;
			while (q != NULL)
			{
				if (q->destino == aux2)
				{
					if (q == aux->ady)
						aux->ady = aux->ady->sgte;
					else
						r->sgte = q->sgte;
					delete(q);
					cout << "ARISTA  " << aux->nombre << "----->" << aux2->nombre << " ELIMINADA.....!!!!";
					return;
				}
			}
			r = q;
			q = q->sgte;
		}
		aux = aux->sgte;
	}
}
/*                      MOSTRAR GRAFO
	funcion que imprime un grafo en su forma enlazada
---------------------------------------------------------------------*/
void mostrar_grafo()
{
	Tnodo ptr;
	Tarista ar;
	ptr = p;
	cout << "NODO|LISTA DE ADYACENCIA\n";

	while (ptr != NULL)
	{
		cout << "   " << ptr->nombre << "|";
		if (ptr->ady != NULL)
		{
			ar = ptr->ady;
			while (ar != NULL)
			{
				cout << " " << ar->destino->nombre;
				ar = ar->sgte;
			}

		}
		ptr = ptr->sgte;
		cout << endl;
	}
}

/*                      MOSTRAR ARISTAS
	funcion que muestra todas las aristas de un nodo seleccionado
---------------------------------------------------------------------*/
void mostrar_aristas()
{
	Tnodo aux;
	Tarista ar;
	char var;
	cout << "MOSTRAR ARISTAS DE NODO\n";
	cout << "INGRESE NODO:";
	cin >> var;
	aux = p;
	while (aux != NULL)
	{
		if (aux->nombre == var)
		{
			if (aux->ady == NULL)
			{
				cout << "EL NODO NO TIENE ARISTAS...!!!!";
				return;
			}
			else
			{
				cout << "NODO|LISTA DE ADYACENCIA\n";
				cout << "   " << aux->nombre << "|";
				ar = aux->ady;

				while (ar != NULL)
				{
					cout << ar->destino->nombre << " ";
					ar = ar->sgte;
				}
				cout << endl;
				return;
			}
		}
		else
			aux = aux->sgte;
	}
}

#include <stdio.h>


typedef struct _nodo {
	int valor;
	struct _nodo* siguiente;
} tipoNodo;

typedef tipoNodo* pNodo;
typedef tipoNodo* Lista;

// Funciones con listas:
void Insertar(Lista* l, int v);
void Borrar(Lista* l, int v);
void BorrarLista(Lista*);
void MostrarLista(Lista l);




/////////////////lista circular///////////////////////////////////////////////

void listaCirculares() {
	Lista lista = NULL;
	pNodo p;

	Insertar(&lista, 10);
	Insertar(&lista, 40);
	Insertar(&lista, 30);
	Insertar(&lista, 20);
	Insertar(&lista, 50);

	MostrarLista(lista);

	Borrar(&lista, 30);
	Borrar(&lista, 50);

	MostrarLista(lista);

	BorrarLista(&lista);
	return;
}

void Insertar(Lista* lista, int v) {
	pNodo nodo;

	// Creamos un nodo para el nuvo valor a insertar
	nodo = (pNodo)malloc(sizeof(tipoNodo));
	nodo->valor = v;

	// Si la lista está vacía, la lista será el nuevo nodo
	// Si no lo está, insertamos el nuevo nodo a continuación del apuntado
	// por lista
	if (*lista == NULL) *lista = nodo;
	else nodo->siguiente = (*lista)->siguiente;
	// En cualquier caso, cerramos la lista circular
	(*lista)->siguiente = nodo;
}

void Borrar(Lista* lista, int v) {
	pNodo nodo;

	nodo = *lista;

	// Hacer que lista apunte al nodo anterior al de valor v
	do {
		if ((*lista)->siguiente->valor != v) *lista = (*lista)->siguiente;
	} while ((*lista)->siguiente->valor != v && *lista != nodo);
	// Si existe un nodo con el valor v:
	if ((*lista)->siguiente->valor == v) {
		// Y si la lista sólo tiene un nodo
		if (*lista == (*lista)->siguiente) {
			// Borrar toda la lista
			free(*lista);
			*lista = NULL;
		}
		else {
			// Si la lista tiene más de un nodo, borrar el nodo  de valor v
			nodo = (*lista)->siguiente;
			(*lista)->siguiente = nodo->siguiente;
			free(nodo);
		}
	}
}

void BorrarLista(Lista* lista) {
	pNodo nodo;

	// Mientras la lista tenga más de un nodo
	while ((*lista)->siguiente != *lista) {
		// Borrar el nodo siguiente al apuntado por lista
		nodo = (*lista)->siguiente;
		(*lista)->siguiente = nodo->siguiente;
		free(nodo);
	}
	// Y borrar el último nodo
	free(*lista);
	*lista = NULL;
}

void MostrarLista(Lista lista) {
	pNodo nodo = lista;

	do {
		printf("%d -> ", nodo->valor);
		nodo = nodo->siguiente;
	} while (nodo != lista);
	printf("\n");
}



//////////////////////////////////////77
static void shellsort(int Array[], int n) {
	int gap = n / 2;
	int temp, i, j;
	while (gap > 0) {
		for (i = gap; i < n; i++) {
			temp = Array[i];
			j = i;
			while (j >= gap && Array[j - gap] > temp) {
				Array[j] = Array[j - gap];
				j = j - gap;
			}
			Array[j] = temp;
		}
		gap = gap / 2;
	}
}
static void shellsort2(int Array[], int n) {
	int gap = n / 2;
	int temp, i, j;
	while (gap > 0) {
		for (i = gap; i < n; i++) {
			temp = Array[i];
			j = i;
			while (j >= gap && Array[j - gap] < temp) {
				Array[j] = Array[j - gap];
				j = j - gap;
			}
			Array[j] = temp;
		}
		gap = gap / 2;
	}
}
static void PrintArray(int Array[], int n) {
	for (int i = 0; i < n; i++)
		cout << Array[i] << " ";
	cout << "\n";
}

void  ShellS() {
	int MyArray[] = { 10, 1, 23, 50, 4, 9, 1 };
	int n = sizeof(MyArray) / sizeof(MyArray[0]);

	cout << "Arreglo desordenado\n";
	PrintArray(MyArray, n);

	shellsort(MyArray, n);
	cout << "\nArreglo ordenado Ascendentemente\n";
	PrintArray(MyArray, n);

	shellsort2(MyArray, n);
	cout << "\nArreglo ordenado Descendentemente\n";
	PrintArray(MyArray, n);
	return;
}


//////////////////////////////////////////////////////////////////////////////

static void quicksort(int Array[], int left, int right);
static void quicksort2(int Array[], int left, int right);
static int partition(int Array[], int left, int right);
static void PrintArray(int Array[], int n);


static void quicksort(int Array[], int left, int right) {
	if (left < right) {
		int pivot = partition(Array, left, right);
		quicksort(Array, left, pivot - 1);
		quicksort(Array, pivot + 1, right);
	}
}

static void quicksort2(int Array[], int left, int right) {
	if (left < right) {
		int pivot = partition(Array, left, right);
		quicksort(Array, left, pivot - 1);
		quicksort(Array, pivot + 1, right);
	}
}
static int partition(int Array[], int left, int right) {
	int i = left;
	int pivot = Array[right];
	int temp;
	for (int j = left; j <= right; j++) {
		if (Array[j] < pivot) {
			temp = Array[i];
			Array[i] = Array[j];
			Array[j] = temp;
			i++;
		}
	}
	temp = Array[right];
	Array[right] = Array[i];
	Array[i] = temp;
	return i;
}
static int partition2(int Array[], int left, int right) {
	int i = left;
	int pivot = Array[right];
	int temp;
	for (int j = left; j >= right; j++) {
		if (Array[j] > pivot) {
			temp = Array[i];
			Array[i] = Array[j];
			Array[j] = temp;
			i++;
		}
	}
	temp = Array[right];
	Array[right] = Array[i];
	Array[i] = temp;
	return i;
}

static void PrintArray34(int Array[], int n) {
	for (int i = 0; i < n; i++)
		cout << Array[i] << " ";
	cout << "\n";
}

void quicksort123() {
	int MyArray[] = { 8, 5, 25, 50, 8, 10, 23 };
	int n = sizeof(MyArray) / sizeof(MyArray[0]);
	cout << "Arreglo Desordenado\n";
	PrintArray34(MyArray, n);

	quicksort(MyArray, 0, n - 1);
	cout << "\nArreglo Ascendente\n";
	PrintArray34(MyArray, n);



	return;

}
