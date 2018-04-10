//
//  linear_algebra.hpp
//  alogrithm
//
//  Created by Zen on 09/03/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#ifndef linear_algebra_hpp
#define linear_algebra_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

struct matrix_struct{
    
    float **matrix;
    
};

float dimension2x2(float matrix[2][2]);

float dimensionNxN(int row, int col, float **matrix);

void* new2d(int h, int w, int size);

float** createMatrix(int row, int col);

#endif /* linear_algebra_hpp */
