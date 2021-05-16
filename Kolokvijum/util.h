/**
 * @file   	 util.h
 * @brief    H fajl util biblioteke
 * @author   Nemanja Miljatovic
 * @date   	 16-05-2021
 * @version  1.0
 */
//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omgucava koriscenje funkcije _delay_ms()
#include <util/delay.h>
//Bibliteka koja omogucava pristup podacima u flash memoriji
#include <avr/pgmspace.h>
//Standardna C biblioteka
#include <stdio.h>
//Pristup statickoj usart biblioteci
#include "../usart/usart.h"
//Biblioteka koja sadrži definicije standardnih oznacenih i neoznacenih tipova podataka
#include <stdint.h>


#ifndef UTIL_H_
#define UTIL_H_

/**
 * Sort - Funkcija Sort treba da sortira niz array duzine array_length, na nacin
		  odabran parametrom mode. Parametar mode može imati vrednost konstanti UP
		  i DOWN definisanih pomocu makroa. Ukoliko mode ima vrednost UP, sortira
		  niz od najveceg do najmanjeg elementa, dok u slucaju vrednosti DOWN sortira
		  niz od najmanjeg do najveceg elementa.
 * @param array - ulaz tipa int16_t - pokazivac na niz
 * @param array_length - ulaz tipa int16_t - duzina niza
 * @param mode - ulaz tipa int8_t - nacin sortiranja
 * @return - Nema povratne vrednosti
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);
/**
 * Check - Funkcija Check vrsi proveru da li je uneti niz aritmeticki
 * @param array - ulaz tipa int16_t - pokazivac na niz
 * @return Povratna vrednost je tipa int8_t
 */
int8_t Check(int16_t *array);


#endif /* UTIL_H_ */
