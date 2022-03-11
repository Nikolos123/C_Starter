
//
// Created by nik on 09.03.2022.
//

#include "mylib.h"
#include <iostream>

int size;

void printArray(const float *array) {
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";

    std::cout << std::endl;
}

float *call_printArray() {
    float *arr = new float[size];
    std::cout << "Enter size of your array: ";
    std::cin >> size;
    arr[size];
    return arr;

}

float *complete_arr(float *arr) {
    int min = -100;
    int max = 100;
    float a;
    for (int i = 0; i < size; i++) {
        a = ((float(rand()) / float(RAND_MAX)) * (max - min)) + min;
        arr[i] = a;
    }
    return arr;
}

void count_quantity(float *arr) {
    int a = 0;
    int b = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            a++;
        } else {
            b++;
        }
    }

    std::cout << "positive " << a << "\n" << "negative " << b << std::endl;

    delete[] arr;

}