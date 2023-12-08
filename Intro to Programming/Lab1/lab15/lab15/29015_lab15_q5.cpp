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
fraction addition(fraction f1, fraction f2)
{
    int num = f1.num * f2.denom + f2.num * f1.denom;
    int denom = f1.denom * f2.denom;
    int res = simplify(num, denom);
    fraction temp;
    temp.num = num / res;
    temp.denom = denom / res;
    return temp;
}
int main()
{
    fraction f1;
    f1.num = 1;
    f1.denom = 2;
    fraction f2;
    f2.num = 3;
    f2.denom = 4;

    op(f1);
    op(f2);

    
    f1 = addition(f1, f2);
    op(f1);

}

