//
//  Set.cpp
//  alogrithm
//
//  Created by Zen on 01/03/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#include "Set.hpp"

typedef int Bitset[100];    // 一個集合，元素的數值範圍為 0 到 3199

// 求出element所在的陣列格子，即是element除以32的商數
int get_pos(int element)
{
    return element >> 5;
}

// 求出element在陣列格子當中是第幾個bit，即是element除以32的餘數
// 然後讓一個bit位移至適當位置，以利計算
int get_bit(int element)
{
    return 1 << (element & 31);
}

// 加入元素
void add_element(Bitset a, int element)
{
    a[get_pos(element)] |= get_bit(element);
}

// 除去元素
void delete_element(Bitset a, int element)
{
    a[get_pos(element)] &= ~get_bit(element);
}

// 聯集
void _union(Bitset a, Bitset b, Bitset c)
{
    for (int i=0; i<100; i++)
        c[i] = a[i] | b[i];
}

// 交集
void intersection(Bitset a, Bitset b, Bitset c)
{
    for (int i=0; i<100; i++)
        c[i] = a[i] & b[i];
}

// 差集
void difference(Bitset a, Bitset b, Bitset c)
{
    for (int i=0; i<100; i++)
        c[i] = a[i] & ~b[i];
}

// 補集
void complement(Bitset a, Bitset b)
{
    for (int i=0; i<100; i++)
        b[i] = !a[i];
}

// 判斷是否為空集合
bool empty(Bitset a)
{
    for (int i=0;i<100;i++)
        if (a[i])
            return false;
    return true;
}

// 判斷是否沒有交集
bool disjoint(Bitset a, Bitset b)
{
    for (int i=0;i<100;i++)
        if (a[i] & b[i])
            return false;
    return true;
}

// 判斷a有沒有包含b
bool contain(Bitset a, Bitset b)
{
    for (int i=0;i<100;i++)
        if (~a[i] & b[i])
            return false;
    return true;
}
