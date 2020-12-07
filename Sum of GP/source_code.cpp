#include <bits/stdc++.h>

using namespace std;

double nthTerm(double input1, double input2, int input3)
{
    double sum;
    double r = input2 / input1;
    double a = input1 / r;
    if(r == 1)
        sum = a * input3;
    else if(r > 1)
        sum = a * ((pow(r, input3) - 1) / (r - 1));
    else
        sum = a * ((1 - pow(r, input3)) / (1 - r));
    sum = round(sum * 1000.0) / 1000.0;
    return sum;
}

int main()
{
    double input1, input2;
    int input3;
    cin >> input1 >> input2 >> input3;
    cout << nthTerm(input1, input2, input3);
    return 0;
}
