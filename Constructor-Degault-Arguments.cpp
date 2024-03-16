#include <iostream>
using namespace std;

class Simple
{

    int data1;
    int data2;
    int data3;

public:                                   // Here we used Constructor as Defaut Arguments..
    Simple(int a, int b = 66, int c = 77) // Yaha hum nay B or C ki value ko default kar dia ..
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{

    cout << " The value of Data1 , Data2 and Data3 is :  " << data1 << "," << data2 << " and " << data3 << endl;
}

int main()
{

    Simple s(55);
    s.printData();

    return 0;
}