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
    int N, M, a, count = 0;
    float MinSquare = 0;
    std::cout << "Enter the quantity of tetragons and pyramids" << std::endl;
    std::cin >> N >> M;
    std::cout << "Enter a" << std::endl;
    std::cin >> a;
    Tetragon *t = static_cast<Tetragon*>(operator new[](N*sizeof(Tetragon)));
    Pyramid *p = static_cast<Pyramid*>(operator new[] (M*sizeof(Pyramid)));
    
    for(int i = 0; i < N; i++)
    {
        std::cin >> t[i];
        if(i==0)
        {
            MinSquare = t[i].s();
        }
        else if(t[i].s()<MinSquare)
        {
            MinSquare = t[i].s();
        }
        
        std::cout << t[i];
    }
    for(int i = 0; i < M; i++)
    {
        std::cin >> p[i];
        std::cout << p[i];
        if(p[i].ap() > a)
        {
            count++;
        }
    }
    std::cout << "Min square is equal " << MinSquare << "\n" << "Quantity of pyramids which heigth is greater than a is equal " << count << std::endl;
    operator delete[] (t); 

    operator delete[] (p); 
    
    return 0;
}
