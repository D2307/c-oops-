#include <iostream>
using namespace std;
class emplee
{
    int a, b, c;

public:
    int e, d;
    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void emplee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    emplee harry;
    harry.e = 89;
    harry.d = 45;
    harry.setdata(1, 2, 3);
    harry.getdata();
}