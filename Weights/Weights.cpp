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
    int w;  // ��� ����������� �����
    std::cout << "Input the weight: ";
    std::cin >> w;

    
    int n;              // ��� ����
    float power;        // ������� ������
    int floatingPart;   // ����� ����� ��������� �������
    while (w != 0)
    {
        power = log(abs(w)) / log(3);   // ����������� ������� ������ � �������������� ��������� � ���������� 3 �� ����������� ����� 'w'
        floatingPart = (power - (int)power) * 100;  // ����������� ������� ����� ������������ ������� 'power'

        n = floatingPart >= 45 ?    // ���� ������� ����� ������� 'power' >= 45,
            pow(3, ceil(power)) :   // �� ������� 'power' ����������� � ������� �������,
            pow(3, round(power));   // ����� ����������� ������������� ����������

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