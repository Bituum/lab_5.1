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
    Tetragon t3;
    
    Pyramid p1(5, 5.0);
    Tetragon *obj1 = &p1;
    Pyramid p2(8, 4.0);
    Tetragon *obj2 = &p2; 
    Pyramid p3(12, 4.0);
    Tetragon *obj3 = &p3;
    
  
    
    return 0;
}
