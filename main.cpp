#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int dim_array=0;
    cin >> dim_array;
    float Array[dim_array];
    for (int i = 0; i < dim_array; ++i) {
        cin >> Array[i];
    }
    cout << FindMax(Array,dim_array);
    return 0;
}
