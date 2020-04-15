#include <stdio.h>
#include "even_filter.h"

int main(void)
{
  int numbers[] = {2, 4, 7, 8};
  int_array even_numbers = filter_even(numbers, ARRAY_SIZE(numbers));

  for (int index = 0; index < even_numbers.length; index++)
  {
    printf("%d\n", even_numbers.array[index]);
  }

  return 0;
}