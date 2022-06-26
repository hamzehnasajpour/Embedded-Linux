#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int calc(int a)
{
        return a / (a - 1);
}

int main(int n, char** args)
{
        for (int i = 1; i < n; i++)
        {
                int a = atoi(args[i]);
                cout << calc(a) << endl;
        }
        return 0;
}
