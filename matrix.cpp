/*
Instituto Tecnológico de Costa Rica Curso MT-7003
Tarea 2 Manejo de Máquinas Virtuales
Creadores: Adrián Monge Barahon y Carlos Coronado Zúñiga
*/


//llamado a las librerías necesarias


#include <iostream>			//define los objetos flujo: entrada y salida

#include <pthread.h>		//para crear los hilos de ejecución

#include <math.h>			//para utilizar funcion raiz cuadrada

#include <time.h>			//para determinar tiempo ejecución

#include <cstdlib>

#include <Windows.h> 

using namespace std;		//incluir palabras reservada en el espacio de nombre


//Se declaran la variables globales

char arr[36] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};

int main(){
	system("color 02");
	for (int i=0; i<1000; i++){
		
		int caracteres = rand() % 10;
		
		int posicion1 = rand() % 50;
		int posicion2 = rand() % 50;
		int posicion3 = rand() % 50;
		int posicion4 = rand() % 50;
		int posicion5 = rand() % 50;
		
		int cual1 = rand() % 37;
		int cual2 = rand() % 37;
		int cual3 = rand() % 37;
		int cual4 = rand() % 37;
		int cual5 = rand() % 37;
		
		
		for (int j=0; j< posicion1; j++){
			
			cout << " ";
		}
		
		cout << arr[cual1];
		Sleep(2);
		
		for (int j=0; j< posicion2; j++){
			
			cout << " ";
		}
		
		cout << arr[cual2];
		Sleep(2);
		
		for (int j=0; j< posicion3; j++){
			
			cout << " ";
		}
		
		cout << arr[cual3];
		Sleep(2);
		
		for (int j=0; j< posicion4; j++){
			
			cout << " ";
		}
		
		cout << arr[cual4];
		Sleep(2);
		
		for (int j=0; j< posicion5; j++){
			
			cout << " ";
		}
		
		cout << arr[cual5] << "\n";
		Sleep(2);
	}
	return 0;
}
