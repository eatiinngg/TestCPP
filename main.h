#ifndef MAIN_H
#define MAIN_H

#include <iostream>

using namespace std;


class Algorithm
{
    int x,y;

    public:
    Algorithm(int a, int b);
    int sum(void)
    {
        return x + y;
    }
    void Print(void)
    {
        cout << x << endl;
    }
};


Algorithm::Algorithm(int a, int b)
{
    x = a;
    y = b;
}
