#include <iostream>

using namespace std;

int lis(int input1, int input2[])
{
    int arr[input1];
    for(int i = 0; i < input1; i++)
        arr[i] = 1;
    int max = 0;
    for(int i = 1; i < input1; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(input2[i] > input2[j] && arr[i] < arr[j] + 1)
                arr[i] = arr[j] + 1;
        }
    }
    for(int i = 0; i < input1; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int input1;
    cin >> input1;
    int input2[input1];
    for(int i = 0; i < input1; i++)
        cin >> input2[i];
    cout << lis(input1, input2);
    return 0;
}
