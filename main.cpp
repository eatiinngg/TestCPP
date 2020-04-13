#include <stdio.h>
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
};

Algorithm::Algorithm(int a, int b)
{
    x = a;
    y = b;
}


int main(int argc, const char * argv[])
{
    Algorithm fxxk(15,85);

    cout << fxxk.sum() << endl;

    printf("Hello\n");
    return 0;
}
