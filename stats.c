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
 * @brief Data analytics on the maximum, minimum, mean, and median of an usigned char data set array
 *
 * <Add Extended Description Here>
 *
 * @author Spyropoulos Basilis
 * @date 19/8/2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  test_ptr = test;
  print_statistics();
//  print_array(test_ptr, SIZE);

//  Calculate and print the Sorted (above "test") Array
  unsigned char sorted_array[SIZE];
  unsigned char *sorted_ptr;
  sorted_ptr = sorted_array;
  int i;
  for (i=0; i<SIZE; i++)
    *(sorted_ptr+i) = *(test_ptr+i);

  sort_array(sorted_ptr, SIZE);
  printf("\n------ Sorted Array -----\n");
  print_array(sorted_ptr, SIZE);
}

/* Add other Implementation File Code Here */

void print_statistics() {
  printf("\n");
  printf("The minimum is : %d\n", find_minimum(test_ptr, SIZE));
  printf("The maximum is : %d\n", find_maximum(test_ptr, SIZE));
  printf("The   mean  is : %d\n", find_mean(test_ptr, SIZE));
  printf("The  median is : %d\n", find_median(test_ptr, SIZE));
}

void print_array(unsigned char *table, int length) {
  int i;
  printf("Index\tValue\n");
  for (i=0; i<length; i++)
  printf(" %d \t %d\n",i+1, table[i]);
}

unsigned char find_mean(unsigned char *table, int length) {
  int i, sum = 0;
  unsigned char result;
  for (i=0; i<length; i++)
    sum += table[i];
  if (length > 0)
    result = sum/length;
  else
    result = table[0];
  return result;
}

unsigned char find_median(unsigned char *table, int length) {
  unsigned char sorted_array[length];
  unsigned char *sorted_ptr;
  sorted_ptr = sorted_array;
  int i;
  for (i=0; i<SIZE; i++)
    *(sorted_ptr+i) = *(test_ptr+i);

  sort_array(sorted_ptr, length);
  return sorted_array[((length + (length % 2)) / 2) - 1];
}

unsigned char find_maximum(unsigned char *table, int length) {
  int i;
  unsigned char result = table[0];
  for (i=0; i<length; i++)
    if (table[i] > result)
      result = table[i];
  return result;
}

unsigned char find_minimum(unsigned char *table, int length) {
  int i;
  unsigned char result = table[0];
  for (i=0; i<length; i++)
    if (table[i] < result)
      result = table[i];
return result;
}

void sort_array(unsigned char *table, int length) {
  unsigned char temp;
  int i,j;
  for (i=0; i<length; i++)
    for (j=length-1; j>i; j--)
      if (*(table+j) > *(table+i)) {
        temp = *(table+i);
        *(table+i) = *(table+j);
        *(table+j) = temp;
      }
}
