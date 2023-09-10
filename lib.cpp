//
// Created by G.Careddu on 10/09/2023.
//

#include "lib.h"

float FindMax(float Array[], int dim_array) {
    float max_value = Array[0];
    for (int i = 0; i < dim_array; ++i) {
        if (Array[i]>max_value) {
            max_value=Array[i];
        }
    }
    return max_value;
}
