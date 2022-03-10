//
// Created by nik on 09.03.2022.
//

#include "mylib.h"
#include <iostream>

void printArray(const float *array, int size) // Реализация функции (вывод массива на экран)
{
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
}
float *call_printArray (){

    int a = 0;
    std::cout << "Enter size of your array: ";
    std::cin >> a;
    float *arr[a];
    return arr;
//    printArray(arr,a);

}

void count_quantity(int *pArr, const int size) {
    if (pArr != nullptr) {
        int result = 2;
        int a = 2;
        for (size_t i = 0; i < size; i++) {
            if (i > 1) {
                result *= a;
                pArr[i] = result;
            } else {
                if (i == 0) {
                    pArr[i] = 1;
                } else if (i == 1) {
                    pArr[i] = result;
                }
            }
        }

    } else {
        std::cerr << "Can not complete your array" << std::endl;
    }

}