#include <iostream>
#include <vector>
#include "ex1.h"
#include <ctype.h>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    // get two victor
    vector<double> Victor1;
    vector<double> Victor2;
    double getVic1;
    double getVic2;
    int counter = 0;
    int vecnum = 0;
    // insert the first value to vector
    string Strko;
    string Strko2;
    // insert the value while (not enter)
    getline(cin, Strko);
    getline(cin, Strko2);
    // to save the values
    char Longstring[Strko.length() + 1];
    // get the value with split
    strcpy(Longstring, Strko.c_str());
    char *token = strtok(Longstring, " ");
    while (token != NULL)
    {
        // if the value is char
        try
        {
            Victor1.push_back(stod(token));
        }
        catch (exception e)
        {
            // exit if we have char
            cout << "invaild input" << endl;
            return 0;
        }
        token = strtok(NULL, " ");
    }

    char Longstring2[Strko2.length() + 1];
    // split the values
    strcpy(Longstring2, Strko2.c_str());
    char *token2 = strtok(Longstring2, " ");
    while (token2 != NULL)
    {
        // if char ,exit
        // continue other wise
        try
        {
            Victor2.push_back(stod(token2));
        }
        // if char
        catch (exception e)
        {
            cout << "invaild input" << endl;
            return 0;
        }
        token2 = strtok(NULL, " ");
    }
    //if one of the vectors is with length 0
    if (Victor2.size() == 0 || Victor1.size() == 0)
    {
        cout << "error ,its not ileegal" << endl;
        return 0;
    }
    //check if the victor with same length
    if (Victor1.size() > Victor2.size() || Victor2.size() > Victor1.size())
    {
        cout << "error,its not the same length" << endl;
        return 0;
    }
    //  print the values of the result of the algorithms (1-5)
    cout.precision(17);
    if (GetTheValueWithAlgo1(Victor1, Victor2) == (int)GetTheValueWithAlgo1(Victor1, Victor2))
    {
        cout << GetTheValueWithAlgo1(Victor1, Victor2) << ".0" << endl;
    }
    else
    {
        cout << GetTheValueWithAlgo1(Victor1, Victor2) << endl;
    }
    if (GetTheValueWithAlgo2(Victor1, Victor2) == (int)GetTheValueWithAlgo2(Victor1, Victor2))
    {
        cout << GetTheValueWithAlgo2(Victor1, Victor2) << ".0" << endl;
    }
    else
    {
        cout << GetTheValueWithAlgo2(Victor1, Victor2) << endl;
    }
    if (GetTheValueWithAlgo3(Victor1, Victor2) == (int)GetTheValueWithAlgo3(Victor1, Victor2))
    {
        cout << GetTheValueWithAlgo3(Victor1, Victor2) << ".0" << endl;
    }
    else
    {
        cout << GetTheValueWithAlgo3(Victor1, Victor2) << endl;
    }
    if (GetTheValueWithAlgo4(Victor1, Victor2) == (int)GetTheValueWithAlgo4(Victor1, Victor2))
    {
        cout << GetTheValueWithAlgo4(Victor1, Victor2) << ".0" << endl;
    }
    else
    {
        cout << GetTheValueWithAlgo4(Victor1, Victor2) << endl;
    }
    if (GetTheValueWithAlgo5(Victor1, Victor2) == (int)GetTheValueWithAlgo5(Victor1, Victor2))
    {
        cout << GetTheValueWithAlgo5(Victor1, Victor2) << ".0" << endl;
    }
    else
    {
        cout << GetTheValueWithAlgo5(Victor1, Victor2) << endl;
    }
}