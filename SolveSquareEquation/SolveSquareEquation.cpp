// SolveSquareEquation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main(int argc, char* argv[])
{
    float a, b, c;
    system("cls");
    std::cout << "Input coefficients of square equation\r\n";
    std::cin >> a >> b >> c;
    std::cout << "Try to solve the equation : " 
        << a << " * x ^ 2 + " 
        << b << " * x + " << c << " = 0\r\n";
    if ((a == 0) && (b == 0) && (c == 0))
    {
        std::cout << "The answer is any number\r\n";
    }
    else if ((a == 0) && (b == 0) && (c != 0))
    {
        std::cout << "The equation has no solution\r\n";
    }
    else if ((a == 0) && (b != 0) && (c != 0))
    {
        std::cout << "The equation has the following solution : " << (-c / b) << "\r\n";
    }
    else
    {
        float d = b * b - 4 * a * c;
        int sign = (d > 0) - (d < 0);
        int nRoots = sign + 1;
        if (nRoots > 0)
        {
            float x1 = (-b - sqrt(d)) / (2 * a);
            float x2 = (-b + sqrt(d)) / (2 * a);
            std::cout << "The equation has the following roots : \r\n";
            std::cout << "x1 = " << x1 << "\r\n";
            std::cout << "x2 = " << x2 << "\r\n";
        }
        else
            std::cout << "The equation has no roots\r\n";
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
