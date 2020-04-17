#include <stdio.h>
#include "even_filter.h"

int main(void)
{
  int numbers[] = {2, 4, 7, 8, 89, 78, -1, 0, 98, 55, 3, -12};
  int_array *even_numbers = filter_even(numbers, ARRAY_SIZE(numbers));
  print_int_array(even_numbers);

  return 0;
}