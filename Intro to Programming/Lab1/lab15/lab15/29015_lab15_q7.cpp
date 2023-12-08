#include <iostream>
using namespace std;

struct fraction
{
    int num;
    int denom;
};
int simplify(int num1, int num2)
{
    int result = num1 % num2;
    while (result != 0)
    {
        num1 = num2;
        num2 = result;
        result = num1 % num2;
    }
    return num2;
}
void op(fraction f)
{
    cout << f.num << "/" << f.denom << endl;
}
fraction CheckEqual(fraction f1, fraction f2)
{

    int res = simplify(f1.num, f1.denom);
    f1.num /= res;
    f1.denom /= res;
    int res2 = simplify(f2.num, f2.denom);
    f2.num /= res2;
    f2.denom /= res2;
    if (f1.num == f2.num && f1.denom == f2.denom)
    {
        cout << "both are equal";
    }
    else
    {
        cout << "both are not equal";
    }
    return f1,f2;
}
int main()
{
    fraction f1;
    f1.num = 1;
    f1.denom = 2;
    simplify(f1.num, f1.denom);
    fraction f2;
    f2.num = 3;
    f2.denom = 4;
    simplify(f2.num, f2.denom);
    op(f1);
    op(f2);
    CheckEqual(f1,f2);

}

