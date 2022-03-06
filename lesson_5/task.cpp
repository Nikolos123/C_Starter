/*Nagorniy Nikolay

lesson 5
В одном tack.cpp файле / проекте:1


   1.Написать функцию которая выводит массив double чисел на экран.
     Параметры функции это сам массив и его размер. Вызвать эту функцию из main

   2.Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ].
     Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0. Выводить на экран массив до изменений и после.

   3.Задать пустой целочисленный массив размером 8. Написать функцию,
     которая с помощью цикла заполнит его
     значениями 1 4 7 10 13 16 19 22. Вывести массив на экран.

   4.* Написать функцию, которой на вход подаётся одномерный массив и
       число n (может быть положительным, или отрицательным),
       при этом метод должен циклически сместить все элементы массива на n позиций.

   5.**Написать функцию, которой передается не пустой одномерный целочисленный массив,
       она должна вернуть истину если в массиве есть место, в котором сумма левой и
       правой части массива равны. Примеры: checkBalance([1, 1, 1, || 2, 1]) → true,
       checkBalance ([2, 1, 1, 2, 1]) → false,
       checkBalance ([10, || 1, 2, 3, 4]) → true.
       Абстрактная граница показана символами ||, эти символы в массив не входят.
*/

#include <iostream>
#include <vector>


void task1();

void task2();

void task3();

void task4();

void task5();

int main() {

//    task1();
//    task2();
//    task3();

    task4();

    return 0;
}

void printArray(const int* pArr, const size_t SIZE) {
    if(pArr== nullptr || SIZE == 0)
        return;
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << pArr[i] << " ";
    }
    std::cout << std::endl;
}

void changeArray(const int* pArr, const size_t SIZE) {
    if(pArr== nullptr || SIZE == 0)
        return;
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << pArr[i] << " ";
    }
}

void intArray(int* arr, const size_t SIZE) {
    for (size_t i = 0; i < SIZE-2; i++) {
        arr[i] = arr[i+SIZE];
    }
}

void addArray(int arr[], int size) {
    int num =1;
    for (size_t i = 0; i < size; i++) {
        arr[i] = num;
        num +=3;
    }
}

bool doubleArray(double arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return true;
}

void task1() {
    const size_t SIZE = 3;//если передадим больше чем указали заполнится рандомно
    double arr[] = {1.11111, 2.33333, 3.44444};
    if (doubleArray(arr, SIZE)) {
        std::cout << "Done" << std::endl;
    }

}

void task2() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const size_t SIZE = 10;
    printArray(arr, SIZE);
    intArray(arr, SIZE);
    printArray(arr, SIZE);

};

void task3(){
    const size_t SIZE = 8;
    int arr[SIZE];
    addArray(arr, SIZE);
    printArray(arr, SIZE);
}

void task4(){

    const size_t SIZE = -3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr,SIZE);
    changeArray(arr,SIZE);
    printArray(arr,SIZE);

}