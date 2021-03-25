#include <iostream>

using namespace std;

int largestSubarray(int input1, int input2[])
{
    int count = 0, max = 0, len = 0;
    for(int i = 0; i < input1; i++)
    {
        len = 0;
        count = 0;
        for(int j = i; j < input1; j++)
        {
            if(input2[j] == 0)
            {
                count++;
                len++;
            }
            else
            {
                count--;
                len++;
            }
            if(len > max && count == 0)
                max = len;
        }
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
    cout << largestSubarray(input1, input2);
    return 0;
}
