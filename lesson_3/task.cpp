/*Nagorniy Nikolay

lesson 3
В одном tack.cpp файле / проекте:

    1.Написать программу, вычисляющую выражение a * (b + (c / d)) и выводящую результат с
    плавающей точкой, где a, b, c, d – целочисленные константы.
    Используйте static_cast или С-Style cast к float чтобы выполнить точное деление.
    2.Дано целое число. Если оно меньше или равно 21,
    то выведите на экран разницу между этим числом и числом 21.
    Если же заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом и 21.
    При выполнении задания следует использовать тернарный оператор (?:).
    3.* Описать трёхмерный целочисленный массив, размером 3х3х3 и
    указатель на значения внутри массива и при помощи операции
    разыменования вывести на экран значение центральной
    ячейки получившегося куба [1][1][1].
    4.** Написать программу, вычисляющую выражение
    из первого задания, а переменные
    для неё объявлены и инициализировать
    в другом cpp файле. Используйте extern.
*/

#include <iostream>

extern unsigned const int a_extern, b_extern, c_extern, d_extern;
//extern unsigned const int b_extern;
//extern unsigned const int c_extern;
//extern unsigned const int d_extern;



void task1(unsigned const int a, unsigned const int b, unsigned const int c, unsigned const int d);

void task2(int number_x);

void task3();

int main() {

    task1(1, 2, 3, 4);
//    int test = 0; //Оставлю такой вариант тоже
//    std::cin >> test;
//    task2(test);
    task2(5);
    task2(31);
    task1(a_extern, b_extern, c_extern, d_extern);
    task3();
    return 0;
}

void task1(unsigned const int a, unsigned const int b, unsigned const int c, unsigned const int d) {
    //Прошу дать комментарии если речь не об этом была
    float ans = static_cast<float>(a * (b + (c / d))) / 20;
    std::cout << "Значения " << ans << " Тип: " << typeid(ans).name() << std::endl;
}

void task2(int number_x) {
    int number_static = 21;
    int number_y = (number_x <= number_static) ? number_static - number_x : 2 * (number_x - number_static);
    std::cout << "Ответ " << number_y << std::endl;
}

void task3() {
    //Прошу дать комментарии если речь не об этом была
    int aArray[3][3][3];
    int *pArr = NULL;
    pArr = &aArray[1][1][1];
    std::cout << *pArr << std::endl;

    *pArr= 200;
    std::cout << *pArr << std::endl;
};

