/**
 * @file 	main.c
 * @brief 	Glavni program zadatka
 * @author 	Nemanja Miljatovic
 * @date 	16/05/2021
 * @version 	1.0
 */



#include "util.h"



/**
 * Funkcija za rjesavanje zadatka.
 * @return Nema povratnu vrednost.
 */



int main()
{
	usartInit(9600);



	uint16_t *array, array_lenght, mode;

	while(1)
	{
		usartPutString_P(PSTR("Unesite duzinu niza: \r\n"));
		while(!usartAvailable());



	}
	return 0;
}
