//
//  dijkstra.hpp
//  alogrithm
//
//  Created by Zen on 22/02/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#ifndef dijkstra_hpp
#define dijkstra_hpp

#include <stdio.h>
#include "iostream"
#include "adjacency_struct.hpp"

void dijkstra_matrix(struct adjacency_struct adjacency_struct, int source, int target);
void dijkstra_list(struct adjacency_struct adjacency_struct, int source, int target);
void dijkstra_zen(struct adjacency_struct adjacency_struct, int start, int target);

#endif /* dijkstra_hpp */
