//
//  linear_algebra.cpp
//  alogrithm
//
//  Created by Zen on 09/03/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#include "linear_algebra.hpp"

float dimension2x2(float **matrix){
    
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    
};

//傳入矩陣，並做計算
float dimensionNxN(int row, int col, float **matrix){
    
    
    
//    std::cout<<sizeof(&matrix[0])<<std::endl;
    
//    std::cout<<(sizeof(*matrix)/sizeof(**matrix))<<std::endl;
    
//    std::cout<<col<<std::endl;
    
    //二階矩陣判斷
    if (row==2 and col==2) {
        
        std::cout<< dimension2x2(matrix) << std::endl;
        
    }
    //判斷第一個元素等於0，第一行與第二行交換
    else if (matrix[0][0] == 0){
        for (int i=0; i<col; i++) {
            float swap = matrix[1][i];
            matrix[1][i] = matrix[0][i];
            matrix[0][i] = swap;
            std::cout<<"轉換"<<std::endl;
        }
    }
    else{
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                
            }
        }
    }
    
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            std::cout<< matrix[i][j] << std::endl;
        }
    }
    
//    std::cout<<sizeof(matrix)/sizeof(matrix[0][0])<<std::endl;
    
//    for (int i=0; i<sizeof(matrix[0])/sizeof(matrix[0][0]); i++) {
//        
//    }
    
//    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    
    return 0.0;
    
};

float** createMatrix(int row, int col){
    int ROW = row;
    int COL = col;
    
//    float matrix[5][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9}};
    
    float matrix[3][3] = {{0,3,6},{1,4,7},{2,5,8}};
    
    float **p;
    p = new float*[ROW];
    
    for (int i =0; i<ROW; i++) {
        p[i] = new float[COL];
    }
    
    for (int i=0; i<ROW; i++) {
        for (int j=0; j<COL; j++) {
            p[i][j] = matrix[i][j];
//            p[i][j] = (rand() % 9) +1;
        }
    }
    
    return p;
}

void* new2d(int h, int w, int size)
{
    int i;
    void **p;
    
    p = (void**)new char[h*sizeof(void*) + h*w*size];
    for(i = 0; i < h; i++)
        p[i] = ((char *)(p + h)) + i*w*size;
    
    return p;
}
