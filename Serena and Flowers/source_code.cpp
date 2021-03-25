#include <iostream>

using namespace std;

int SerenaFlowers(int input1, int input2, int input3[])
{
    int count = 1;
    for(int i = 1; i < input2; i++)
    {
        int j = 0;
        for(j = 0; j < i; j++)
        {
            if(input3[i] == input3[j])
                break;
        }
        if(i == j)
            count++;
    }
    return count;
}

int main()
{
    int input1, input2;
    cin >> input1 >> input2;
    int input3[input1];
    for(int i = 0; i < input1; i++)
        cin >> input3[i];
    cout << SerenaFlowers(input1, input2, input3);
    return 0;
}
