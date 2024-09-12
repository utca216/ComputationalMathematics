#include <bits/stdc++.h>
#include "half.hpp"
using namespace std;
using half_float::half;
int main()
{
    half E(1);
    int n = 0;
    while (1 + E != 1) {
        n++;
        E = E / 10;
        cout << E << endl;
    }

    cout << n;
}
