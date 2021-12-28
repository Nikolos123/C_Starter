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
#include <string>
#include <vector>

using namespace  std;
void task1();
void task2();
void task3();
void task4();
void task5();
void displayBoard(const vector<char> &board);
int main(){
    task1();
    task2();
    task3();
    task4();
    task5();
    return 0;
}

void task1(){
    //Занимаем 1 байт  точно не определян размер
    bool false_true = 0; // все что больше 0 это true

    //Занимаем 1 байт 1 символ
    char one_ascii = 'Y';
    //Занимаем 2 байта
    short int min_short_int = -32768;
    short int max_short_int = 32767;

    //Занимаем 2 байта или 4 взависимости от архитектуры(16/32(бита))
    int max_int = 2147483647; // может быть также и
    int min_int = -2147483648;

    //Занимаем 8 байта
    long long  long_long_max =  9223372036854775807;
    long long  long_long_min = -9223372036854775807;

    //Занимаем 4 байта
    float num_float = 3.211111f; // точность до 7 цифр

    //Занимаем 8 байта
    long double num_doble = 3.21111111111111f;// точность до 15 цифр

//    void


    cout << "bool false_true " << false_true  << "\n";
    cout << "char ascii " << one_ascii  << "\n";
    cout << "short int  max and min " << max_short_int  << " / " <<min_short_int << "\n";
    cout << "int  max and min " << max_int  << " / " <<min_int << "\n";
    cout << "long long   max and min " << long_long_max  << " / " <<long_long_min << "\n";
    cout << "float num_float " << num_float  << "\n";
    cout << "double num_double " << num_doble  << "\n";



}

void task2(){
    //более зашищенный от сравнения нежели просто num
    enum  class Tic_Tac_Toe{X, O};

    Tic_Tac_Toe ZERO = Tic_Tac_Toe::O;
    Tic_Tac_Toe CROSS = Tic_Tac_Toe::X;

    if (ZERO == Tic_Tac_Toe::O){
        cout << "The is Zero!\n";
    }else{
        cout << "The is not Zero!\n";
    }

    if (CROSS == Tic_Tac_Toe::X){
        cout << "The is CROSS!\n";
    }else{
        cout << "The is not CROSS!\n";
    }
}

void task3(){

    enum   Tic_Tac_Toe{X, O};

    Tic_Tac_Toe symbol_zero[1] = {X,};
    Tic_Tac_Toe symbol_cross[1] = {O};

    //Выводим в консоль
    cout << "zero" << symbol_zero[0] << endl; //очищаем поток и переносим на новую строку
    cout << "cross" << symbol_cross[0] << endl; //очищаем поток и переносим на новую строку

    //Меняем местами значения
    symbol_zero[0] = X;
    symbol_cross[0] = O;

    //Выводим в консоль
    cout << "cross" << symbol_zero[0] << endl; //очищаем поток и переносим на новую строку
    cout << "zero" << symbol_cross[0] << endl; //очищаем поток и переносим на новую строку


}

void task4(){
//    vector<char> board;
    struct TicTacToe{
        const int num_squares = 9;
        vector<char> board;
        char zero;
        char cross;
        bool draw;
        char empty;
        string computer;
        string person;
        int score_computer;
        int score_person;
    };

    TicTacToe One;
    One.zero = 'O';
    One.cross = 'X';
    One.empty = ' ';
    One.computer = "Mega";
    One.person = "Nikolay";
    One.draw = false;
    One.score_computer = 1;
    One.score_person = 3;
    One.board = vector<char>(One.num_squares,One.empty);

    cout <<"Cтруктура для игры\n\n";
    cout << "zero: " << One.zero << endl;
    cout << "cross: " << One.cross << endl;
    cout << "empty: " << One.empty << endl;
    cout << "name computer: " << One.computer << endl;
    cout << "name person: " << One.person << endl;
    cout << "статус ничьей : " << One.draw << endl;
    cout << "очки компьютера : " << One.score_computer << endl;
    cout << "очки человека : " << One.score_person << endl;
    displayBoard(One.board);


}
void displayBoard(const vector<char> &board) {

    /*
        Эта функция отображает переданное ей игровое поле. Поскольку в игре присут-
        ствуют элементы всего трех видов: Х, О или пробел, функция может отображать
        каждый из этих элементов. Чтобы нарисовать красивое поле для игры в •Крестики-
        нолики•, я использую и некоторые символы с клавиатуры:
     */


    cout << "\n\t " << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t " << "_________";
    cout << "\n\t " << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t " << "_________";
    cout << "\n\t " << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\t ";

}
void task5(){


}