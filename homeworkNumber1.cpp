#include <iostream>
#include <string>
#include <math.h>

int main(){
    std::cout << "Введите число" << std::endl;
    int n = 0;
    std::cin >> n;
    int middle = fmod(n, 100) / 10;
    int first = n / 100;
    n = middle * 100 + first * 10 + fmod(n, 10);
    std::cout << n << std::endl;
    return 0;
}
