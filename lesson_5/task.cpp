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
#include <cstdlib>
#include <cstdarg>


void task1();

void task2();

void task3();

void task4();

void task5();

int main() {

    task1();
    task2();
    task3();
    task4();
    task5();

    return 0;
}

void printArray(const int* pArr, const size_t SIZE) {
    if(pArr== nullptr || SIZE == 0)
        std::cerr << "Can not print your array" <<  std::endl;
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << pArr[i] << " ";
    }
    std::cout << std::endl;
}

void changeArray(const int* pArr, const size_t SIZE) {
    if(pArr== nullptr || SIZE == 0)
        std::cerr << "Can not change your array" <<  std::endl;
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << pArr[i] << " ";
    }
}

void addRandomArray(int* pArr, const size_t SIZE) {
    if(pArr== nullptr || SIZE == 0)
        std::cerr << "Can not add random number your array" <<  std::endl;
    for (size_t i = 0; i < SIZE; i++) {
       pArr[i] = rand()%100;
    }
}

void intArray(int* pArr, const size_t SIZE) {
    for (size_t i = 0; i < SIZE-2; i++) {
        pArr[i] = pArr[i+SIZE];
    }
}

void addArray(int* pArr, const size_t SIZE) {
    if(pArr== nullptr || SIZE == 0)
        std::cerr << "Can not change your array" <<  std::endl;
    int num =1;
    for (size_t i = 0; i < SIZE; i++) {
        pArr[i] = num;
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

    const size_t SIZE = 10;
    const size_t SIZE_ADD = 10;
    int arr[SIZE_ADD];
    addRandomArray(arr,SIZE_ADD);
    printArray(arr,SIZE);
    changeArray(arr,SIZE);
    printArray(arr,SIZE);

}


int slice_array(int *input_array, int n){
    int i;
    int response = 0;
    for(i=0; i <= n; i++) {
        response +=input_array[i];
//        sliced_array[i] = input_array[i];
    }
    return response;
};

void task5(){
    int a = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> a;
    const size_t SIZE_ADD = a;
    int arr[SIZE_ADD];
//    int arr[] = {5,1,3,1};
    addRandomArray(arr,SIZE_ADD);
    printArray(arr,SIZE_ADD);
    bool flag = false;
    for (size_t i = 0; i < SIZE_ADD; i++) {

        int response_left = slice_array(arr,i);
        int response_right = slice_array(arr,SIZE_ADD-1);
        int ans =response_right-response_left;
        if (response_left == ans){
            flag = true;
            break;
        }
        else if(response_left > ans){
            break;
        }
    }

    if(flag){
        std::cout << "The array has a place where there are matches" << std::endl;}

    else{
        std::cout <<"There is no place in the array where there are matches" << std::endl;
    }


}