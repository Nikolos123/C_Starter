/*Nagorniy Nikolay

lesson 2
В одном main.cpp файле / проекте:
1. Создать и инициализировать переменные пройденных типов данных (short int, int, long long, char, bool, float, double).
2. Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.
3. Создать массив, способный содержать значения такого перечисления и инициализировать его.
4. * Создать структуру (struct) данных «Для игры в крестики-нолики» и снабдить
 его всеми необходимыми свойствами (подумайте что может понадобиться).
5. ** Создать структуру (struct MyVariant) объединяющую: union
 MyData (int, float, char) и 3-и битовых поля (флага) указывающими
 какого типа значение в данный момент содержится в объединении
 (isInt, isFloat, isChar). Продемонстрировать пример использования в коде этой структуры.
*/

#include <iostream>

using namespace  std;
void task1();

int main(){

  return 0;
}

void task1(){
    //Занимаем 1 байт  точно не определян размер
    bool false_true = 0; // все что больше 0 это true

    //Занимаем 1 байт 1 символ
    char one_ascii = "Host"; //char one_ascii = "Хозяин"; не рабочий варинат

    //Занимаем 2 байта
    short int min_short_int = -32768;
    short int max_short_int = 32767;

    //Занимаем 2 байта или 4 взависимости от архитектуры(16/32(бита))
    int max_int = 2147483647; // может быть также и
    int min_int = -2147483648;

    //Занимаем 8 байта
    long long  long_long_max =  9 223'372'036'854'775'807;
    long long  long_long_min = -9 223'372'036'854'775'808;


    << cout << "char ascii" << one_ascii  << "\n";
    << cout << "short int  max and min" << max_short_int  << " - " <<min_short_int << "\n";
    << cout << "int  max and min" << max_int  << " - " <<min_int << "\n";
    << cout << "long long   max and min" << long_long_max  << " - " <<long_long_min << "\n";



}