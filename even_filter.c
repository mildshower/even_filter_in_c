#include <stdlib.h>
#include "even_filter.h"

bool is_even(int number)
{
  return number % 2 == 0;
}

int_array filter_even(int numbers[], int length)
{
  int even_numbers_on_stack[length], index;
  int_array even_numbers = {NULL, 0};

  for (index = 0; index < length; index++)
  {
    if (is_even(numbers[index]))
    {
      even_numbers_on_stack[even_numbers.length] = numbers[index];
      even_numbers.length++;
    }
  }

  even_numbers.array = malloc(sizeof(int) * even_numbers.length);

  for (index = 0; index < even_numbers.length; index++)
  {
    even_numbers.array[index] = even_numbers_on_stack[index];
  }

  return even_numbers;
}