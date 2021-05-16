/**
 * @file util.c
 * @brief Realizacija potrebnih pomocnih funkcija
 * @author Nemanja Miljatovic
 * @date 16.05.2021
 * @version 1.0
 */



#include "util.h"



void funkcija1(int *kp, int *up)
{
	int temp = *kp;
	*kp = *up;
	*up = temp;
}



void Sort(int16_t *array, int16_t array_length, int8_t mode)
{
	int16_t i, j;



	if(mode == 3){
		for (i = 0; i < array_length-1; i++)
		{



			for (j = 0; j < array_length-i-1; j++)
			{
				if (array[j] > array[j+1])
				{
					funkcija1(array[j], array[j+1]);
				}
			}
		}
	}
	else if (mode == 2)
	{
		for (i = 0; i < array_length-1; i++)
		{
			for (j = 0; j < array_length-i-1; j++)
			{
				if (array[j] < array[j+1])
				{
					funkcija1(array[j], array[j+1]);
				}
			}
		}



	}
}



