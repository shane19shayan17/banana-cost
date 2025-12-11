#include <iostream>

using namespace std;

int calc_dollars(int cost, int number)
{
    return cost * (number * (number + 1) / 2);
}

int main()
{
    int cost, dollars, number;
    cin >> cost >> dollars >> number;

    int final_cost = calc_dollars(cost, number);
    int borrow = final_cost - dollars;
    if (borrow > 0)
    {
        cout << borrow << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}