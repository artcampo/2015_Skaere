#include <iostream>
#include <array>

int size = 10;

int main(int, char**) {
  int a, b;

  #pragma omp task
  {
    a = size;
  }
  
  #pragma omp task
  {
    b = a;
  }

  return 0;
}
