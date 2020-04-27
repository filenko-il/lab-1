#include <iostream>
#include "notebook.h"

int main()
{
    float model = 666.999;              ///переменная для изменения поля model в объектах
    std::string memory = "HellHammer";  ///переменная для изменения поля memory в объектах
    int CPU = 512;                      ///переменная для изменения поля CPU в объектах

    std::cout << "1";
    Notebook notebook_1;    ///создаём дефолтный notebook
    notebook_1.print();     ///выводим информацию о нём посредством метода print

    std::cout << "\n\n\n2";
    Notebook notebook_2( &model , &memory , CPU );  ///применение конструктора с 3 параметрами
    notebook_2.print();

    std::cout << "\n\n\n3";
    Notebook notebook_3( &notebook_2 );     ///применение конструктора копирования
    notebook_3.print();

    std::cout << "\n\n\n4";
    Notebook notebook_4( &(notebook_2.getModel()) );    ///применение конструктора с параметром для поля model (с использованием для демонстрации метода getModel)
    notebook_4.print();

    std::cout << "\n\n\n5";
    Notebook notebook_5( &(notebook_2.getMemory()) );   ///применение конструктора с параметром для поля memory (с использованием для демонстрации метода getMemory)
    notebook_5.print();

    std::cout << "\n\n\n6";
    Notebook notebook_6( notebook_2.getCPU() ); ///применение конструктора с параметром для поля CPU (с использованием для демонстрации метода getCPU)
    notebook_6.print();

    return 1;
}
