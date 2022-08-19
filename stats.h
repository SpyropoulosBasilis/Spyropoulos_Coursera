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
 * @brief Data analytics on the maximum, minimum, mean, and median of an usigned char data set array
 *
 * <Add Extended Description Here>
 *
 * @author Spyropoulos Basilis
 * @date 19/8/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics();							// A function that prints the statistics of an array including minimum, maximum, mean, and median.
void print_array(unsigned char *table, int length);	// Given an array of data and a length, prints the array to the screen
unsigned char find_mean(unsigned char *table, int length);		// Given an array of data and a length, returns the mean
unsigned char find_median(unsigned char *table, int length);		// Given an array of data and a length, returns the median value
unsigned char find_maximum(unsigned char *table, int length);		// Given an array of data and a length, returns the maximum
unsigned char find_minimum(unsigned char *table, int length);		// Given an array of data and a length, returns the minimum
void sort_array(unsigned char *table, int length);		// Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
unsigned char *test_ptr;

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
