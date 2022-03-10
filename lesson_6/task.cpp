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
#include <fstream>

void task1();

void task2();

void task3();

void task4();

void task5();

std::string file_name_first,file_name_twice;

int main() {

//    task1();
//    task2();
//    task3();
//    task4();
    task5();

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

std::string  generator(int size) {
    srand(time(NULL));

    std::string text;

    for ( int i = 0, j = 0; i < size; i++ ) {
        j = rand() % 10 + 1;

        if ( j > size - i ) j = size - i;
        i += j;

        for ( int k = 0; k < j; k++ ) {
            text += (char)(rand() % 26 + 97);
        }
        text += ' ';
    }
    text[text.size()-1] = '.';
    return text;
}

std::string cin_name(std::string name){
    std::cout << "Enter name " << name << " file :" << std::endl;
    std::string file_name = "";
    std::cin >> file_name;
    return file_name+".txt";
}

void create_file(std::string name , std::string text){
    std::ofstream fout;
    fout.open(name);
    if(fout.is_open()){
        fout<<text<<std::endl;
        fout.close();
    }

}

int cin_size(std::string name){
    std::cout << "Enter size text for file " << name  << std::endl;
    int n = 0;
    std::cin >> n;
    return n;
}

std::string open_file(std::string name){
    std::string text="";
    std::string response="";

    std::ifstream fin;
    fin.open(name);
    if(fin.is_open()){
//        std::string text="";
//        while (!fin.eof()){
        while (!fin.eof()){
            getline(fin,text);
            response+=text;
        }
        fin.close();
    }
//    fin.close();
    return response;
}

void unite_file(std::string third){
    std::ifstream fin;
    std::ofstream fout;
    std::string first_text = open_file(file_name_first);
    std::string twice_text = open_file(file_name_twice);
    fin.open(file_name_first);
    if(fin.is_open()){
        fout.open(third);
        fout<<first_text<<std::endl;
        fout<<twice_text<<std::endl;
        fout.close();
    }

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
    //create first file
    file_name_first = cin_name("first");
    int size_first_file = cin_size(file_name_first);
    std::string text_for_first_file = generator(size_first_file);
    create_file(file_name_first,text_for_first_file);


    //create twice file
    file_name_twice = cin_name("twice");
    int size_twice_file = cin_size(file_name_twice);
    std::string text_for_twice_file = generator(size_twice_file);
    create_file(file_name_twice,text_for_twice_file);

}

void task4() {
    //unite first file and twice file
    std::string file_name_third = cin_name("third");
    unite_file(file_name_third);

}


void task5() {
    //enter name file
    std::cout << "Enter name file where will search " << std::endl;
    std::string name;
    std::cin >> name;

    //read file
    name = open_file(name);

    //look for line in file
    std::cout << "Enter line for search  in file " << std::endl;
    std::string line_find;
    std::cin >> line_find;

    if(name.find(line_find) != std::string::npos){
        std::cout << "Our string was found in the file " << line_find << std::endl;
    }
    else
    {
        std::cout << "Our string was not found in the file " << line_find << std::endl;
    }


}