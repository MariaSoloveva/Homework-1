#include <iostream>
#include <string>
#include <math.h>

int main(){
   int n;
   std::cout << "Введите число" << std::endl;
   std::cin >> n;
   int middle;
   middle = fmod(n, 100) / 10;
   int first;
   first = n / 100;
   n = middle * 100 + first * 10 + fmod(n, 10);
   std::cout << n << std::endl;
   return 0;
}
