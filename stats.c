/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Application that performs statistical analytics on a dataset.
 *
 * Application where the maximum, minimum, mean and median value of a data set will be obtained through functions.
 *
 * @author Arturo Rivera
 * @date 28/08/2022
 *
 */

#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
#define SIZE_2 (6)

void main()
{
  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};
}

void print_satistics(unsigned char data[], unsigned int size)
{

}

void print_array(unsigned char *ptr, unsigned int size)
{
  
}

double find_median(unsigned char *ptr, unsigned int size)
{
  
}

double find_mean(unsigned char *ptr, unsigned int size)
{
  
}

unsigned char find_maximum(unsigned char *ptr, unsigned int size)
{
  
}

unsigned char find_minimum(unsigned char *ptr, unsigned int size)
{
 
}

void sort_array(unsigned char *ptr, unsigned int size)
{
  
}
