//
//  Palindrome.cpp
//  Lab8.2
//
//  Created by Thomas Tylek on 3/2/15.
//  Copyright (c) 2015 Thomas Tylek. All rights reserved.
//

#include "Palindrome.h"
#include <iostream>
#include <string>

using namespace std;

string palindromeConverter(string palindrome);
void palindromeCheck(string palindrome);
int main(void)
{
    string palindrome;
    cout << "Input a word: ";
    cin >> palindrome;
    palindromeCheck(palindrome);
    return 0;
}

void palindromeCheck(string palindrome)
{
    int palindromeLength = palindrome.length();
    int halfLength = palindromeLength/2;
    
    char firstChar, lastChar;
    bool test;
    for (int i = 0; i < halfLength; i++)
    {
        firstChar = palindrome[i];
        lastChar = palindrome[palindromeLength - 1 - i];
        if (firstChar == lastChar)
            test = true;
        else
            test = false;
        i = halfLength;
    }
    
    (test) ? cout << palindrome << ": "<< palindrome << endl :
    cout << palindrome << ": " << palindromeConverter(palindrome) << endl;
}

string palindromeConverter(string palindrome)
{
    int length = palindrome.length();
    string output = palindrome;
    char builder;
    for (int i = 0; i < length; i++)
    {
        builder = palindrome[length-i-1];
        output+=builder;
    }
    return output;
}
