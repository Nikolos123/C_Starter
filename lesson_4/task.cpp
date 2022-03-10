/*Nagorniy Nikolay

lesson 4
В одном tack.cpp файле / проекте:


    1.Написать программу, проверяющую что сумма двух (введенных с клавиатуры)
    чисел лежит в пределах от 10 до 20 (включительно),
    если да – вывести строку "true", в противном случае – "false";

    2.Написать программу, выводящую на экран строку “true”,
    если две целочисленные константы, объявленные в её начале либо
    обе равны десяти сами по себе, либо их
    сумма равна десяти. Иначе "false".

    3.Написать программу которая выводит на экран список всех нечетных
    чисел он 1 до 50. Например: "Your numbers: 1 3 5 7 9 11 13 ...".
    Для решения используйте любой С++ цикл.

    4.Со звёздочкой. Написать программу, проверяющую, является ли
    некоторое число - простым. Простое число — это целое положительное число,
    которое делится без остатка только на единицу и себя само.

    5.Со звёздочкой. Пользователь вводит с клавиатуры число (год): от 1 до 3000.
    Написать программу, которая определяет является ли этот год
    високосным. Каждый 4-й год является високосным,
    кроме каждого 100-го, при этом каждый 400-й – високосный.
    Вывести результаты работы программы в консоль.


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
    task3();
    task4();
//    task5();
    return 0;
}

void task1() {
    int a = 0; //Оставлю такой вариант тоже
    int b = 0; //Оставлю такой вариант тоже
    std::cout << "Введите первое число " << std::endl;
    std::cin >> a;
    std::cout << "Введите второе число " << std::endl;
    std::cin >> b;
    if (a + b >= 10 and a + b <= 20) {
        std::cout << "Сумма чисел входит в диапозон между 10 - 20 " << std::endl;
        std::cout << "True " << std::endl;
    } else {
        std::cout << "Сумма чисел не входит в диапозон между 10 - 20 " << std::endl;
        std::cout << "False " << std::endl;
    }
}

void task2() {
    //Надеюсь речь была об этом
    unsigned const int a = 5;
    unsigned const int b = 5;

//    int a_ = 0; //Осталю тут для управления с клавиатуры
//    int b_ = 0;
//    std::cin >> a_;
//    std::cin >> b_;


    if (a and b == 10) {
        std::cout << "True " << std::endl;
    } else {
        if (a + b == 10) {
            std::cout << "True " << std::endl;
        } else {
            std::cout << "False " << std::endl;
        }
    }

}

void task3() {
    int nNumber = 50;
    int nCheck = 0;
    std::vector<int> aArra;
    while (nCheck <= nNumber) {
        if (nCheck != 50) {
            int d = nCheck % 2;
            if (d != 0) {
                std::cout << nCheck << " ";
            };

        }
        nCheck++;
    }
    std::cout<< "\n" << std::endl;
//    int i_ = 0;
//    int size_ = aArra.size();
//    for (int i = 0; i < size_; ++i) {
//        i_++;
//        if (i_ != size_) {
//            std::cout << aArra[i] << " ";
//        } else {
//            //Освобождаем
//            std::cout << aArra[i] << std::endl;
//        }
//    }

};

void  task4() {
    int n, i;
    bool isPrime = true;
    std::cout << "Введите число: ";
    std::cin >> n;
    for(i = 2; i <= n / 2; ++i) {
        if(n % i == 0) { isPrime = false; break; }
    }

    if (isPrime) std::cout << "Простое";
    else std::cout << "Cоставное";
}


void task5(){
    int n = 0;
    std::cout << "Введите число: " <<std::endl;
    std::cin >> n;
    if (n % 4 == 0 or n % 400 == 0 and n % 100 != 0){
        std::cout << n << " год високосным." <<std::endl;
    }
    else{
        std::cout << n << " год не високосным." <<std::endl;
    }
}