#include <iostream>

int main()
{
    int n1,n2, res;
    std::cout << "Num 1:";
    std::cin >> n1;
    std::cout << "Num 2:";
    std::cin >> n2;

    res = n1 + n2;
    std::cout << "Res 1:" <<res<<std::endl;
    res = 0;
    res = n1 - n2;
    std::cout << "Res 1:" <<res<<std::endl;
    res = 0;
    res = n1 * n2;
    std::cout << "Res 1:" <<res<<std::endl;
    res = 0;
    res = n1 / n2;
    std::cout << "Res 1:" <<res<<std::endl;

    return 0;
}
