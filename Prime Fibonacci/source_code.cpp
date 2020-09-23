#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

int concat(int a, int b)
{
    string str = to_string(a) + to_string(b);
    return(stoi(str));
}

bool search(int arr[], int size, int ele)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == ele)
            return true;
    }
    return false;
}

bool checkPrime(int num)
{
    if(num < 0)
        return false;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}

int combination(int arr[], int primeArray[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j != i)
            {
                int num = concat(arr[i], arr[j]);
                if(checkPrime(num))
                {
                    if(!search(primeArray, count, num))
                    {
                        primeArray[count] = num;
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

long long int fibonacci(long long int a, long long int b, int n)
{
    long long int temp;
    for(int i = 2; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return temp;
}

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    int arr[100];
    int n = 0;
    for(int i = n1; i <= n2; i++)
    {
        if(checkPrime(i))
        {
            arr[n] = i;
            n++;
        }
    }
    int primeArray[n * (n - 1)];
    int count = combination(arr, primeArray, n);
    long long int min = primeArray[0];
    for(int i = 0; i < count; i++)
    {
        if(primeArray[i] < min)
            min = primeArray[i];
    }
    long long int max = primeArray[0];
    for(int i = 0; i < count; i++)
    {
        if(primeArray[i] > max)
            max = primeArray[i];
    }
    long long int result = fibonacci(min, max, count);
    cout << result;
    return 0;
}
