/*Создать
 Создать класс квадрат, члены класса – длина стороны.
Предусмотреть в классе методы вычисления и вывода сведений о
фигуре – диагоналей, периметр, площадь. Создать производный
класс – правильная пирамида с апофемой h, добавить в класс
метод определения объема фигуры, перегрузить методы расчета
площади и вывода сведений о фигуре. Написать программу,
демонстрирующую работу с классом: дано N квадратов и M
пирамид, найти квадрат с минимальной площадью и количество
пирамид с высотой более числа a (a вводить).
*/


#include "tetragon.hpp"
#include "pyramid.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <tuple>
int main()
{
    std::vector<Tetragon> Tvector;
    std::vector<Pyramid> Tpyramid;
    Tetragon t1;
    Tetragon t2;
    //Tetragon t3;
    
    t1.show(std::cout);
    t2.show(std::cout);
    //t3.show(std::cout);

    Pyramid p1;
    Tetragon *obj1 = &p1;
    Pyramid p2;
    Tetragon *obj2 = &p2; 
    //Pyramid p3;
    //Tetragon *obj3 = &p3; 
    p1.show(std::cout);
    p2.show(std::cout);
    //p3.show(std::cout);
    return 0;
}
