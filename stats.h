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
 * @file stats.h 
 * @brief Application that performs statistical analytics on a dataset.
 *
 * Application where the maximum, minimum, mean and median value of a data set will be obtained through functions.
 *
 * @author Arturo Rivera
 * @date 28/08/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param char data[]: Array of unsigned char.
 * @param int size: Number of items in data set
 */
void print_satistics(unsigned char data[], unsigned int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * @param char * ptr: Pointer to a data set
 * @param int size: Number of items in data set
 */
void print_array(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the median value.
 *
 * @param char * ptr: Pointer to a data set
 * @param int size: Number of items in data set
 *
 * @return Median of the data set.
 */
double find_median(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the mean.
 *
 * @param char * ptr: Pointer to a data set
 * @param int size: Number of items in data set
 *
 * @return Mean of the data set.
 */
double find_mean(unsigned char *ptr, unsigned int size);

/**
 * @brief  Given an array of data and a length, returns the maximum.
 *
 * @param char * ptr: Pointer to a data set
 * @param int size: Number of items in data set
 *
 * @return Maximum of the data set.
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int size);

/**
 * @brief  Given an array of data and a length, returns the minimum.
 *
 * @param char * ptr: Pointer to a data set
 * @param int size: Number of items in data set
 *
 * @return Minimum of the data set.
 */
unsigned char find_minimum(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 *
 * The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. 
 * 
 * @param char * ptr: Pointer to a data set
 * @param int size: Number of items in data set
 */
void sort_array(unsigned char *ptr, unsigned int size);


#endif /* __STATS_H__ */
