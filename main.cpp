#include <thread>
#include <iostream>

void threadFunction1()
{
    std::cout << "����� 1 � ������� �������� ��� ����������\n";
}

void threadFunction2(int i, double d)
{
    std::cout << "����� 2 � ������� �������� � �����������: " << i << ' ' << d << '\n';
}

int main()
{
    setlocale(LC_ALL, "rus");

    std::thread myThread1(threadFunction1);
    myThread1.join();

    std::thread myThread2(threadFunction2, 1, 2.34);
    myThread2.join();

    return 0;
}