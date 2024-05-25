//#include <iostream>
//#include <cmath>
//
//int main()
//{
//    int w;
//    std::cout << "Input the weight: ";
//    std::cin >> w;
//
//    int n;
//    float power;
//    int floatingPart;
//    while (w != 0)
//    {
//        if (w > 0)
//        {
//            power = log(w) / log(3);
//            floatingPart = (power - (int)power) * 100;
//            n = floatingPart >= 45 ?
//                pow(3, ceil(power)) :
//                pow(3, round(power));
//
//            std::cout << "Left cup: " << n << '\n';
//            w -= n;
//        }
//        if (w < 0)
//        {
//            power = log(abs(w)) / log(3);
//            floatingPart = (power - (int)power) * 100;
//            n = floatingPart >= 45 ?
//                pow(3, ceil(power)):
//                pow(3, round(power));
//
//            std::cout << "Right cup: " << n << '\n';
//            w += n;
//        }
//    }
//
//    return 0;
//}



#include <iostream>
#include <cmath>

int main()
{
    int w;  // вес измеряемого груза
    std::cout << "Input the weight: ";
    std::cin >> w;

    
    int n;              // вес гири
    float power;        // степень тройки
    int floatingPart;   // число после плавающей запятой
    while (w != 0)
    {
        power = log(abs(w)) / log(3);   // определение степени тройки с использованием логарифма с основанием 3 от измеряемого груза 'w'
        floatingPart = (power - (int)power) * 100;  // определение дробной части получившейся степени 'power'

        n = floatingPart >= 45 ?    // если дробная часть степени 'power' >= 45,
            pow(3, ceil(power)) :   // то степень 'power' округляется в бОльшую сторону,
            pow(3, round(power));   // иначе округляется математически стандартно

        if (w > 0)
        {
            std::cout << "Left cup: " << n << '\n';
            w -= n;
        }
        else if (w < 0)
        {
            std::cout << "Right cup: " << n << '\n';
            w += n;
        }
    }

    return 0;
}