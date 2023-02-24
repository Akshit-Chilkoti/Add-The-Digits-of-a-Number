#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, digit;

    cout << "Enter The Number: ";
    cin >> number;

    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    cout << "The Sum of The Digits of the Number is: " << sum;
    return 0;
}