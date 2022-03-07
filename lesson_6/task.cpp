/*Nagorniy Nikolay

lesson 6
В одном tack.cpp файле / проекте:1


    1.)Выделить в памяти динамический одномерный массив типа int. Размер массива запросить у пользователя. Инициализировать
    его числами степенями двойки: 1, 2, 4, 8, 16, 32, 64, 128 ...
    Вывести массив на экран. Не забыть освободить память. =)
    Разбить программу на функции.

    2).Динамически выделить матрицу 4х4 типа int. Инициализировать е
    е псевдослучайными числами через функцию rand. Вывести на экран.
    Разбейте вашу программу на функции которые вызываются из main.

    3).Написать программу, которая создаст два текстовых файла (*.txt),
    примерно по 50-100 символов в каждом (особого значения не имеет с каким именно содержимым).
    Имена файлов запросить у польлзователя.

    4).* Написать функцию, «склеивающую» эти файлы в третий текстовый файл (имя файлов спросить у пользователя).

    5).* Написать программу, которая проверяет присутствует ли указанное пользователем
    при запуске программы слово в указанном пользователем файле
    (для простоты работаем только с латиницей).
    Используем функцию find которая есть в строках std::string.



*/

#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <cstdarg>

void task1();

void task2();

void task3();

void task4();

void task5();

int main() {

//    task1();
//    task2();
    task3();
//    task4();
//    task5();

    return 0;
}

void printArray(const int *pArr, const size_t SIZE) {
    if (pArr == nullptr || SIZE == 0)
        std::cerr << "Can not print your array" << std::endl;
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << pArr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(const int **pArr, const size_t m, const size_t n) {

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << pArr[i][j] << " | ";
        }
        std::cout << std::endl;
    }
}


int *highlighting_ram(int *pArr, const size_t SIZE) {

    pArr = new(std::nothrow) int[SIZE]; //Выделяем память под одномерный массив
    return pArr;

}

int **highlighting_ram(int **pArr, const size_t n, const size_t m) {
    pArr = new int *[m];
    for (size_t i = 0; i < m; i++) {
        pArr[i] = new int[n]; // Выделяем массив под одномерный int массив
    }
    return pArr;

}

void complete_arr(int **pArr, const size_t m, size_t n) {
//заполнение массива от -10 до 10
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            pArr[i][j] = rand() % 21 - 10;
        }
    }

}

void complete_arr(int *pArr, const size_t SIZE) {
    if (pArr != nullptr) {
        int result = 2;
        int a = 2;
        for (size_t i = 0; i < SIZE; i++) {
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

int *clearing_ram(int *pArr) {

    delete[] pArr;//Очистка памяти
    pArr = nullptr;
    return pArr;

}

int **clearing_ram(int **pArr,const size_t m) {

    for (size_t i=0; i < m; i++) // освобождение памяти каждого одномерного массива в двумерном массиве - удаление столбцов
        delete[] pArr[i];
    delete[] pArr;// освобождение памяти двумерного массива
    pArr = nullptr;
    return pArr;

}

void task1() {

    int *arr;
    int a = 0;
    std::cout << "Enter size of your array: ";
    std::cin >> a;
    if (a > 0) {
        arr = highlighting_ram(arr, a);
        complete_arr(arr, a);
        printArray(arr, a);
        arr = clearing_ram(arr);
        printArray(arr, a);
    }
}

void task2() {
    int **arr;
    const size_t n = 4;
    const size_t m = 4;
    arr = highlighting_ram(arr, n, m);
    complete_arr(arr, n, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " | ";
        }
        std::cout << std::endl;
    }
//    printArray(arr, n, m); // Не понял почему не работает если можете подскажите
    arr = clearing_ram(arr,m);
//    printArrayTest(arr, n, m);
    if (arr != nullptr & n != 0 & m != 0) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << arr[i][j] << " | ";
            }
            std::cout << std::endl;
        }

    }
};


void task3() {
//    char file_name_one = "";

}

void task4() {


}


void task5() {
    int a = 0;


}