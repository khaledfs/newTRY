#include <iostream>
#include <stdio.h>
#include <cmath>
#include "ex1.h"
#include <vector>
using namespace std;

// name function :GetTheValueWithAlgo1
// its return the value after dooing algo1
double GetTheValueWithAlgo1(vector<double> v1, vector<double> v2)
{
    int i = 0;
    double GetTheDiffrence = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        // algorithm 1 needs this
        GetTheDiffrence += (v1.at(i) - v2.at(i)) * (v1.at(i) - v2.at(i));
    }
    // its difention of algo 1
    return sqrt(GetTheDiffrence);
}
// name function :GetTheValueWithAlgo2
// its return the value after dooing algo 2
double GetTheValueWithAlgo2(vector<double> v1, vector<double> v2)
{
    int i = 0;
    double GetTheDiffrence = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        // algorithm 2 needs this
        GetTheDiffrence += abs((v1.at(i) - v2.at(i)));
    }
    // its difention of algo 1

    return GetTheDiffrence;
}
// name function :GetTheValueWithAlgo3
// its return the value after dooing algo 3
double GetTheValueWithAlgo3(vector<double> v1, vector<double> v2)
{
    int i = 0;
    double GetTheDiffrence = 0;
    double max = 0;
    double max2 = 0;
    // start the max with the first
    max = abs(v1.at(v1.size() - 1) - v2.at(v2.size() - 1));
    for (int i = 0; i < v1.size(); i++)
    {
        max2 = abs(v1.at(i) - v2.at(i));
        // get the max of the minus
        if (max > max2)
        {
            max = max;
        }
        if (max2 > max)
        {
            max = max2;
        }
    }
    // its algo3 defention
    return max;
}
// name function :GetTheValueWithAlgo4
// its return the value after dooing algo4
double GetTheValueWithAlgo4(vector<double> v1, vector<double> v2)
{
    int i = 0;
    double GetTheDiffrence = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        // algo  4 need this
        GetTheDiffrence += abs(v1.at(i) - v2.at(i)) / (abs(v1.at(i)) + abs(v2.at(i)));
    }
    // algo 4 defintion
    return GetTheDiffrence;
}
// name function :GetTheValueWithAlgo5
// its return the value after dooing algo  5
double GetTheValueWithAlgo5(vector<double> v1, vector<double> v2)
{
    int i = 0;
    double GetTheDiffrence = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        // with p=2
        // its now equal to 1
        // algo 5 defention
        GetTheDiffrence += (v1.at(i) - v2.at(i)) * (v1.at(i) - v2.at(i));
    }
    // algo 5 defention
    return sqrt(GetTheDiffrence);
}
