/*Nagorniy Nikolay

lesson 7
В одном tack.cpp файле / проекте:1


    1).Создайте проект из 2х cpp файлов и заголовочного (main.cpp, mylib.cpp, mylib.h)
    во втором модуле mylib объявить 3 функции: для инициализации массива
    (типа float), печати его на экран и подсчета количества отрицательных и
    положительных элементов. Вызывайте эти 3-и функции из main для работы с массивом.

    2).Описать макрокоманду (через директиву define),
    проверяющую, входит ли переданное ей число (введенное с клавиатуры) в
    диапазон от нуля (включительно) до переданного ей второго аргумента
    (исключительно) и возвращает true или false, вывести на экран «true» или «false».

    3).Задайте массив типа int. Пусть его размер задается через директиву препроцессора #define.
    Инициализируйте его через ввод с клавиатуры.
    Напишите для него свою функцию сортировки (например Пузырьком).
    Реализуйте перестановку элементов как макрокоманду SwapINT(a, b).
    Вызывайте ее из цикла сортировки.

    4).* Объявить структуру Сотрудник с различными полями.
    Сделайте для нее побайтовое выравнивание с помощью директивы pragma pack.
    Выделите динамически переменную этого типа. Инициализируйте ее.
    Выведите ее на экран и ее размер с помощью sizeof. Сохраните эту структуру в текстовый файл.

    5).* Сделайте задание 1 добавив свой неймспейс во втором модуле.





*/

#include <iostream>
#include "mylib.h"
void task1();
void task2();
void task3();
void task4();

#define big_t(x,y)  (x>0 and x <= y? "true":"false")
#define ARRAY_SIZE 10
#pragma pack(push, 1)
int main() {
//    task1();
//    task2();
//    task3();
    task4();
    return 0;
}


void task1() {
    float *arr;
    arr = call_printArray();
    arr= complete_arr(arr);
    MyNameSpace::printArray(arr);
    count_quantity(arr);

}
void task2() {
    std::cout << "Enter number: ";
    int x = 0;
    int y = 506;
    std::cin >> x;
    std::cout <<big_t(x,y)<< std::endl;

};

void task3() {
    int arr[ARRAY_SIZE];
    std::cout << "Enter 10 number for complete array: " << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }

    std::cout << "Array view: ";

    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << arr[i] << " ";
    }

}

void task4() {
    struct Person {
        char first_name; // 1 byte
        short last_name; // 2 bytes
        float salary; // 4 byte
        int age; // 4 bytes
    };
    std::cout << sizeof(Person) << " "<< std::endl;


}

