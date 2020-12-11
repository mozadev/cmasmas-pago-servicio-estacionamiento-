/*

Calcule el monto a pagar por el servicio de estacionamiento, teniendo en cuenta que por la
primera hora de estadía se tiene una tarifa de 10 y las restantes tienen un costo de 6. Se
tienen como datos la hora de entrada (hhmm) y la hora de salida (hhmm). Recuerde que
iniciada una hora se contabiliza como hora total. La hora de entrada y salida serán
ingresadas como números enteros.



*/



#include<iostream>
#include<conio.h>
#define mensaje "no puede comprar"
#include<string>


using namespace std;

int main()
{
	//declaracion de variables
	int hhmmentrada, hhmmsalida;
	int hhentrada, mmentrada, hhsalida, mmsalida;
	int minutostransc;
	int horas, minutos;
	float pago;
	//lectura de datos
	cout << "ingrese horas de entrada: ";
	cin >> hhmmentrada;
	cout << "ingrese horas de salida: ";
	cin >> hhmmsalida;
	//calculo
	hhentrada = hhmmentrada / 100;
	mmentrada = hhmmentrada % 100;
	hhsalida = hhmmsalida / 100;
	mmsalida = hhmmsalida % 100;

	minutostransc = (hhsalida * 60 + mmsalida) - (hhentrada * 60 + mmentrada);//minutos transcurridos
	horas = minutostransc / 60 + (minutostransc % 60 > 0);
	pago = 10 + (horas >= 2) * 6 * (horas - 1);//siempre se paga 10 asi estes  un minuto
											   //impresion de resultados
	cout << "total a pagar" << pago;

	_getch();
}