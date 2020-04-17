#ifndef __EVEN_FILTER_H_
#define __EVEN_FILTER_H_

#define ARRAY_SIZE(arr) sizeof(arr) / sizeof(arr[0])
#define bool unsigned char

typedef struct
{
  int *array;
  int length;
} int_array;

void print_int_array(int_array *numbers);

int_array *filter_even(int *numbers, int length);

bool is_even(int number);

#endif