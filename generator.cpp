#include "testlib.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    int minValue = 1;
    int maxValue = 1000000;
    cout << rnd.next(minValue, maxValue);
    cout << endl;

    return 0;
}
