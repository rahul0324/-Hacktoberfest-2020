#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int MIN_VALUE = 0;
const int MAX_VALUE = 1000000000;

int valueGivenAsInput;
int check(int guess)
{
    if(guess > valueGivenAsInput)
        return -1;
    else if(guess < valueGivenAsInput)
        return 1;
    return 0;
}

int binarySearch(int minVal, int maxVal) {
    int p = minVal;
    int r = maxVal;

    while(p < r)
    {
        int q = (p + r) / 2;
        cout << "Guessing value: " << q << endl;
        
        int checkResult = check(q);
        if(checkResult == 0)
        {
            return q;
        }
        else if(checkResult == -1)
        {
            cout << "Guessed too high! Adjusting..." << endl;
            r = q - 1;
        }
        else if(checkResult == 1)
        {
            cout << "Guessed too low! Adjusting..." << endl;
            p = q + 1;
        }
    }

    return p;
}

int main(){
    cout << "Enter a value in range [" << MIN_VALUE << ", " << MAX_VALUE << "]" << endl;
    cin >> valueGivenAsInput;
    if(valueGivenAsInput < MIN_VALUE || valueGivenAsInput > MAX_VALUE)
    {
        cout << "Value is out of bounds!" << endl;
    }
    else
    {
        int result = binarySearch(MIN_VALUE, MAX_VALUE);
        cout << "FOUND! Value entered is  " << result << endl;
    }
    
    return 0;
}



