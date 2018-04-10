
//  main.cpp
//  alogrithm
//
//  Created by Zen on 17/02/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#include <iostream>
#include "adjacency_struct.hpp"
#include "label_setting.hpp"
#include "dijkstra.hpp"
#include "linear_algebra.hpp"
#include "basic.hpp"

int main(int argc, const char * argv[]) {
    
//    struct adjacency_struct adjacency_struct_matrix = returnMatrix();
//    struct adjacency_struct list = returnList();
    
//    std::cout<<"dijkstra_matrix"<<std::endl;
//    dijkstra_matrix(returnMatrix(), 0, 8);
    
//    std::cout<<"dijkstra_list"<<std::endl;
//    dijkstra_list(returnList(), 3, 2);
    
//    label_setting(adjacency_struct_matrix, 0);
//    dijkstra_matrix(adjacency_struct_matrix, 0, 6);
//    dijkstra_list(list, 0, 6);

//    float matrix[2][2];
//    matrix[0][0] = 6.0;
//    matrix[0][1] = 3.0;
//    matrix[1][0] = 2.0;
//    matrix[1][1] = 9.0;
//    
//
//    float ans = dimensionNxN(matrix);
//
//    
//    std::cout<<ans<<" <<<<<<< answer here"<<std::endl;

    
//    int *matrix = new_array(3);
//    *(matrix+2) = 79979;
//    for (int i=0; i<10; i++) {
//        std::cout<<&matrix[i]<<std::endl;
//    }
//    
//    std::cout<<"Before delete"<<std::endl;
//    std::cout<<&matrix<<std::endl;
//    
//    free(matrix);
//    
//    std::cout<<"after delete"<<std::endl;
//    std::cout<<&matrix<<std::endl;
    
//    float **matrix[3][3];
//    **matrix[0][0]=1;
//    **matrix[0][1]=1;
//    **matrix[0][2]=1;
//    **matrix[1][0]=1;
//    **matrix[1][1]=1;
//    **matrix[1][2]=1;
//    **matrix[2][0]=1;
//    **matrix[2][1]=1;
//    **matrix[2][2]=1;
    
    
//    dimensionNxN(**matrix);
    
//    new_TwoDim_array();
    
//    int ROW = 5;
//    int COL = 5;
//    
//    float matrix[5][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9}};
//    
//    float **p;
//    p = new float*[ROW];
//    
//    for (int i =0; i<ROW; i++) {
//        p[i] = new float[COL];
//    }
//    
//    for (int i=0; i<ROW; i++) {
//        for (int j=0; j<COL; j++) {
//            p[i][j] = matrix[i][j];
//        }
//    }
    
    
    float **p = createMatrix(3, 3);
    dimensionNxN(3, 3, p);
//    dimensionNxN(ROW, COL, p);
    
    return 0;
}
