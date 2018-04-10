//
//  label_setting_algorithm.cpp
//  alogrithm
//
//  Created by Zen on 17/02/2017.
//  Copyright © 2017 Zen. All rights reserved.
//


#include "label_setting.hpp"


void label_setting(struct adjacency_struct adjacency_struct,int source) //Label Setting Algorithm
{

    
    for (int i=0; i<100; i++) adjacency_struct.visit[i] = false; // initialize
    
    adjacency_struct.distance[source] = 0;              // 設定起點的最短路徑長度
    adjacency_struct.parent[source] = source;    // 設定起點是樹根（父親為自己）
    adjacency_struct.visit[source] = true;       // 將起點加入到最短路徑樹
    
    for (int k=0; k<9-1; k++)   // 將剩餘所有點加入到最短路徑樹
    {
        // 從既有的最短路徑樹，找出一條聯外而且是最短的邊
        int a = -1, b = -1, min = 1e9;
        
        // 找一個已在最短路徑樹上的點
        for (int i=0; i<9; i++)
        if (adjacency_struct.visit[i])
        // 找一個不在最短路徑樹上的點
        for (int j=0; j<9; j++)
        if (!adjacency_struct.visit[j])
        if (adjacency_struct.distance[i] + adjacency_struct.matrix[i][j] < min)
        {
            a = i;  // 記錄這一條邊
            b = j;
            min = adjacency_struct.distance[i] + adjacency_struct.matrix[i][j];
        }
        
        // 起點有連通的最短路徑都已找完
        if (a == -1 || b == -1) break;
        //      // 不連通即是最短路徑長度無限長
        //      if (min == 1e9) break;
        
        adjacency_struct.distance[b] = min;         // 儲存由起點到b點的最短路徑長度
        adjacency_struct.parent[b] = a;      // b點是由a點延伸過去的
        adjacency_struct.visit[b] = true;    // 把b點加入到最短路徑樹之中
        
        //        std::cout << "visit[" << b << "]" <<std::endl;
        std::cout << b <<std::endl;
    }
}
