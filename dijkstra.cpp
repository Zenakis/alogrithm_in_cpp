//
//  dijkstra.cpp
//  alogrithm
//
//  Created by Zen on 22/02/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#include "dijkstra.hpp"

extern void find_path(struct adjacency_struct adjacency_struct, int x);

void dijkstra_zen(struct adjacency_struct adjacency_struct, int start, int target){
    
    
    
}

void dijkstra_list(struct adjacency_struct adjacency_struct, int source, int target){
        //初始化所有節點走訪為false,所有距離為無1e9（數字大的代表不通）
        for (int i=0; i<9; i++) adjacency_struct.visit[i] = false;
        for (int i=0; i<9; i++) adjacency_struct.distance[i] = 1e9;

        adjacency_struct.distance[source] = 0;
        adjacency_struct.parent[source] = source;

        for (int k=0; k<9; k++)
        {
            //a為目前搜尋的點,initial為-1
            int a = -1;
            //min為最小權重,initial為1e9
            int min = 1e9;
            
            //走訪vector中每個元素,這裡直接設定為9個
            for (int i=0; i<9; i++)
            {
                //假設走訪的節點為false，與距離小於預設的數字(min)===>代表兩節點有連通
                if (!adjacency_struct.visit[i] && adjacency_struct.distance[i] < min)
                {
                    //將走訪節點給a，準備開始進行路徑的計算
                    a = i;
                    min = adjacency_struct.distance[i];
                }
            }
            if (a == -1) break;
            adjacency_struct.visit[a] = true;


            for (int i=0; i<adjacency_struct.vector[a].size(); i++) {
                
                int b = adjacency_struct.vector[a][i].first;
                int w = adjacency_struct.vector[a][i].second;

                if (!adjacency_struct.visit[b] && adjacency_struct.distance[a] + w < adjacency_struct.distance[b]) {
                    adjacency_struct.distance[b] = adjacency_struct.distance[a] + w;
                    adjacency_struct.parent[b] = a;
                }
                
            }
        }
        if (adjacency_struct.distance[target]==1e9) {
            std::cout<<"We found no way to arrive your target."<<std::endl;
        }else{
            find_path(adjacency_struct, target);
        }
    
};


void dijkstra_matrix(struct adjacency_struct adjacency_struct, int source, int target){

    for (int i=0; i<9; i++) adjacency_struct.visit[i] = false;   // initialize
    for (int i=0; i<9; i++) adjacency_struct.distance[i] = 1e9;

    adjacency_struct.distance[source] = 0;
    adjacency_struct.parent[source] = source;

    for (int k=0; k<9; k++)
    {
//        std::cout<<"k :"<<k<<std::endl;
        int a = -1, b = -1, min = 1e9;
        for (int i=0; i<9; i++)
        {
            if (!adjacency_struct.visit[i] && adjacency_struct.distance[i] < min)
            {
                a = i;  // 記錄這一條邊
                min = adjacency_struct.distance[i];
            }
        }

        if (a == -1) break;     // 起點有連通的最短路徑都已找完
        //      if (min == 1e9) break;  // 不連通即是最短路徑長度無限長
        adjacency_struct.visit[a] = true;

        // 以邊ab進行relaxation
        for (b=0; b<9; b++)
        if (!adjacency_struct.visit[b] && adjacency_struct.distance[a] + adjacency_struct.matrix[a][b] < adjacency_struct.distance[b])
        {
            adjacency_struct.distance[b] = adjacency_struct.distance[a] + adjacency_struct.matrix[a][b];
            adjacency_struct.parent[b] = a;
        }
    }

    if (adjacency_struct.distance[target]==1e9) {
        std::cout<<"We found no way to arrive your target."<<std::endl;
    }else{
        find_path(adjacency_struct, target);
    }
};

void find_path(struct adjacency_struct adjacency_struct, int x)   // 印出由起點到x點的最短路徑
{
    if (x != adjacency_struct.parent[x]) // 先把之前的路徑都印出來
    find_path(adjacency_struct, adjacency_struct.parent[x]);
    std::cout << x << std::endl;  // 再把現在的位置印出來
};
