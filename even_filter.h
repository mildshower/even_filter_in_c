#ifndef __EVEN_FILTER_H_
#define __EVEN_FILTER_H_

#define ARRAY_SIZE(arr) sizeof(arr) / sizeof(arr[0])
#define bool unsigned char
#define true 1
#define false 0

typedef struct
{
  int *array;
  int length;
} int_array;

int_array filter_even(int numbers[], int length);

bool is_even(int number);

#endif