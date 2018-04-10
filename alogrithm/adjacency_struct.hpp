//
//  adjacency_matrix.hpp
//  alogrithm
//
//  Created by Zen on 17/02/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#ifndef adjacency_struct_hpp
#define adjacency_struct_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

struct adjacency_struct{
    
    std::vector<std::pair<int, int>> vector[9];   // 一張有權重的圖(List)
    
//    int list[9][50];            //邊數上限是50
//    int size[9];                //記錄每一個列表的元素有多少個

    int matrix[9][9];           // 一張有權重的圖(matrix)
    int distance[9];            // 記錄起點到圖上各個點的最短路徑長度
    int parent[9];              // 記錄各個點在最短路徑樹上的父親是誰
    bool visit[9];              // 記錄各個點是不是已在最短路徑樹之中
};

struct adjacency_struct returnMatrix();

struct adjacency_struct returnList();




#endif /* adjacency_matrix_hpp */
