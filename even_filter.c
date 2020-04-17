#include <stdio.h>
#include <stdlib.h>
#include "even_filter.h"

bool is_even(int number)
{
  return number % 2 == 0;
}

void print_int_array(int_array *numbers)
{
  for (unsigned index = 0; index < numbers->length; index++)
  {
    printf("%d\n", numbers->array[index]);
  }
}

int_array *filter_even(int *numbers, int length)
{
  int_array *even_numbers = malloc(sizeof(int_array));
  even_numbers->array = malloc(sizeof(int) * length);
  even_numbers->length = 0;

  for (unsigned index = 0; index < length; index++)
  {
    if (is_even(numbers[index]))
    {
      even_numbers->array[even_numbers->length] = numbers[index];
      even_numbers->length++;
    }
  }

  even_numbers->array = realloc(even_numbers->array, sizeof(int) * even_numbers->length);
  return even_numbers;
}