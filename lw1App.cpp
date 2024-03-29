﻿#include <iostream>
#include <cstdlib>
#include <clocale>
#include <limits>
/*
D:\reposC++\QualityControll\lw1App\x64\Debug\lw1App.exe

D:\reposC++\QualityControll\lw1App\x64\Debug\lw1App.exe 12345678910123456789101234567891012345678910123456789101234567891012345678910123456789101234567891012345678910 12345678910123456789101234567891012345678910123456789101234567891012345678910123456789101234567891012345678910 101012345678910123456789101234567891012345678910123456789101234567891012345678910123456789101234567891012345678910


12345678910123456789101234567891012345678910123456789101234567891012345678910123456789101234567891012345678910 12345678910123456789101234567891012345678910123456789101234567891012345678910123456789101234567891012345678910 101012345678910123456789101234567891012345678910123456789101234567891012345678910123456789101234567891012345678910
*/

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Russian");

    if (argc != 4) {
        std::cout << "ошибка: неверное количество аргументов. Формат запуска: .exe a b c " << std::endl;
        return 1;
    }

    double a, b, c;
    try {
        a = std::atof(argv[1]);
        b = std::atof(argv[2]);
        c = std::atof(argv[3]);
    }
    catch (const std::invalid_argument&)
    {
        std::cout << "ошибка: некорректные данные." << std::endl;
        return 1;
    }


    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "ошибка: некорректные данные." << std::endl;
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {

        std::cout << "не треугольник" << std::endl;
        return 0;
    }

    if (a == b && b == c) {

        std::cout << "равносторонний" << std::endl;
    }
    else if (a == b || a == c || b == c) {
        std::cout << "равнобедренный" << std::endl;
    }
    else {
        std::cout << "обычный" << std::endl;
    }



    return 0;
}


