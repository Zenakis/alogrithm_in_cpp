//
//  adjacency_matrix.cpp
//  alogrithm
//
//  Created by Zen on 17/02/2017.
//  Copyright © 2017 Zen. All rights reserved.
//


#include "adjacency_struct.hpp"

struct adjacency_struct returnList(){
    
    struct adjacency_struct adjacency_struct;
    
    for (int i=0; i<9; ++i) {
        adjacency_struct.vector[i].clear();
    }
    
    //Dummy Struct
    adjacency_struct.vector[0].push_back(std::make_pair(1,5));
    adjacency_struct.vector[0].push_back(std::make_pair(5,2));
    adjacency_struct.vector[0].push_back(std::make_pair(3,3));
    adjacency_struct.vector[1].push_back(std::make_pair(4,3));
    adjacency_struct.vector[2].push_back(std::make_pair(4,1));
    adjacency_struct.vector[3].push_back(std::make_pair(6,5));
    adjacency_struct.vector[4].push_back(std::make_pair(8,5));
    adjacency_struct.vector[5].push_back(std::make_pair(4,0));
    adjacency_struct.vector[5].push_back(std::make_pair(0,1));
    adjacency_struct.vector[6].push_back(std::make_pair(7,3));
    adjacency_struct.vector[7].push_back(std::make_pair(5,1));
    adjacency_struct.vector[8].push_back(std::make_pair(5,2));
    adjacency_struct.vector[8].push_back(std::make_pair(7,4));
    adjacency_struct.vector[8].push_back(std::make_pair(8,2));
    
    
    return adjacency_struct;
};

struct adjacency_struct returnMatrix(){
    
    struct adjacency_struct adjacency_struct;

    for (int i=0; i<9; ++i) {
        for (int j=0; j<9; ++j) {
            adjacency_struct.matrix[i][j] = 1e9;
        }
    }

    //Dummy Struct
    adjacency_struct.matrix[0][1] = 5;
    adjacency_struct.matrix[0][3] = 3;
    adjacency_struct.matrix[0][5] = 2;
    adjacency_struct.matrix[1][4] = -3;
    adjacency_struct.matrix[2][4] = -1;
    adjacency_struct.matrix[3][6] = 5;
    adjacency_struct.matrix[4][8] = 5;
    adjacency_struct.matrix[5][0] = 1;
    adjacency_struct.matrix[5][4] = 0;
    adjacency_struct.matrix[6][7] = 3;
    adjacency_struct.matrix[7][5] = 1;
    adjacency_struct.matrix[8][5] = 2;
    adjacency_struct.matrix[8][7] = 4;
    adjacency_struct.matrix[8][8] = 2;
    
    return adjacency_struct;
};
