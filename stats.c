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
  
  double mean, median;

  print_array(test, SIZE);
  sort_array(test, SIZE);
  print_satistics(test, SIZE);
}

void print_satistics(unsigned char data[], unsigned int size)
{
  printf("\n\n\t==Statistics==\n\n");
  printf("%10s \t%4d\n", "Minimum:", find_minimum(data, size));
  printf("%10s \t%4d\n", "Maximum:", find_maximum(data, size));
  printf("%10s \t%7.2lf\n", "Mean:", find_mean(data, size));
  printf("%10s \t%7.2lf\n", "Median:", find_median(data, size));
  printf("\n");
}

void print_array(unsigned char *ptr, unsigned int size)
{
  int i;
  if (ptr == NULL)
  {
    return;
  }

  if (size <= 0)
  {
    size = 1;
  }

  printf("\n\t===Data Set===\n\n");
  for (i = 0; i < size; i++)
  {
    printf("%4d", *ptr);
    ptr++;
    if ((i + 1) % 8 == 0)
    {
      printf("\n");
    }
  }

  return;
}

double find_median(unsigned char *ptr, unsigned int size)
{
  double median;
  int half;
  if (size % 2 == 0)
  {
    half = size / 2;
    median = (*(ptr + (half - 1)) + *(ptr + half)) / 2.0;
    return median;
  }
  else
  {
    half = ceil(size / 2);
    median = (*(ptr + half));
    return median;
  }
}

double find_mean(unsigned char *ptr, unsigned int size)
{
  double sum, sizeLargeFloat = (double)size;
  if (ptr == NULL)
  {
    return 0;
  }

  if (size <= 0)
  {
    sizeLargeFloat = 1.0;
  }

  for (int i = 0; i < size; i++)
  {
    sum = sum + *ptr;
    ptr++;
  }

  return (sum / sizeLargeFloat);
}

unsigned char find_maximum(unsigned char *ptr, unsigned int size)
{
  return *ptr;
}

unsigned char find_minimum(unsigned char *ptr, unsigned int size)
{
  return *(ptr + (size - 1));
}

void sort_array(unsigned char *ptr, unsigned int size)
{
  int i, j, temp;
  int current, next;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      current = *(ptr + i);
      next = *(ptr + j);
      if (next > current)
      {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
    }
  }
}
