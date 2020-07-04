#include <iostream>

template <int N>
struct Fibonacci
{
    static const int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template <>
struct Fibonacci<1>
{
    static const int value = 1;
};

template <>
struct Fibonacci<2>
{
    static const int value = 1;
};

int main()
{
    std::cout << "6번째 Fibonacci -> " << Fibonacci<6>::value << std::endl;
    return 0;
}