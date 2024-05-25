#include <iostream>
#include <cmath>

void WeightsFuncEnglish(int* w)
{
    int n;              // weights
    float power;        // power of 3
    int floatingPart;   // fractional part of the 'power'
    while (*w != 0)
    {
        power = log(abs(*w)) / log(3);   // determining the power of 3 using the base 3 logarithm of the main weight 'w'
        floatingPart = (power - (int)power) * 100;  // determining the fractional part of the 'power'

        n = floatingPart >= 45 ?    // if the fractional part of the 'power' >= 45,
            pow(3, ceil(power)) :   // then 'power' is rounding up,
            pow(3, round(power));   // else it's rounding mathematically correct

        if (*w > 0)
        {
            std::cout << "Left cup: " << n << '\n';
            *w -= n;
        }
        else if (*w < 0)
        {
            std::cout << "Right cup: " << n << '\n';
            *w += n;
        }
    }
}

void WeightsFunc(int* w)
{
    int n;              // вес гири
    float power;        // степень тройки
    int floatingPart;   // дробная часть переменной 'power'
    while (*w != 0)
    {
        power = log(abs(*w)) / log(3);   // определение степени тройки с использованием логарифма с основанием 3 от измеряемого груза 'w'
        floatingPart = (power - (int)power) * 100;  // определение дробной части получившейся степени 'power'

        n = floatingPart >= 45 ?    // если дробная часть степени 'power' >= 45,
            pow(3, ceil(power)) :   // то степень 'power' округляется в бОльшую сторону,
            pow(3, round(power));   // иначе округляется математически стандартно

        if (*w > 0)
        {
            std::cout << "Left cup: " << n << '\n';
            *w -= n;
        }
        else if (*w < 0)
        {
            std::cout << "Right cup: " << n << '\n';
            *w += n;
        }
    }
}

int main()
{
    int w;  // вес измеряемого груза
    std::cout << "Input the weight: ";
    std::cin >> w;

    WeightsFunc(&w);

    return 0;
}