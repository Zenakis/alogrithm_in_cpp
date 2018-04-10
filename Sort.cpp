//
//  Sort.cpp
//  alogrithm
//
//  Created by Zen on 01/03/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#include "Sort.hpp"



void brute_force(int array[], int N)
{
    int max_value = -1e9;
    int min_value = 1e9;
    for (int i=0; i<N; ++i)
    {
        max_value = std::max(max_value, array[i]);
        min_value = std::min(min_value, array[i]);
    }
    
    for (int i=min_value; i<=max_value; ++i)
    {
        // 看看陣列裡面有沒有
        for (int j=0; j<N; ++j)
            if (array[j] == i)
                std::cout << i;
    }
}

void selection_sort(int array[], int N)
{
    for (int i=0; i<N; ++i) // N改為N-1更精準
    {
        // 從尚未排序的數字當中，找出最小的數字。
        // （它也是全部數字當中第i小的數字。）
        int min_index = i;
        for (int j=i+1; j<N; ++j)
            if (array[j] < array[min_index])
                min_index = j;
        
        // 把第i小的數字，放在第i個位置。
        std::swap(array[i], array[min_index]);
    }
}

void bubble_sort(int array[], int N)
{
    for (int i=0; i<N; ++i) // N改為N-1更精準
        for (int j=0; j<N-i-1; ++j)
            if (array[j] > array[j+1])
                std::swap(array[j], array[j+1]);
}

void gnome_sort(int array[], int N)
{
    for (int i=0; i<N; )
        if (i == 0 || array[i-1] < array[i])
            i++;
        else
        {
            std::swap(array[i-1], array[i]);
            i--;
        }
}

void insertion_sort(int array[], int N)
{
    for (int i=2; i<N; ++i)
    {
        int pivot = array[i];
        
        int j;
        for (j=i-1; j>=0; --j)
            if (pivot < array[j])
                array[j+1] = array[j];  // 先行往右挪
            else
                break;
        
        array[j+1] = pivot; // 插入
    }
}

//void shell_sort(int array[], int N)
//{
//    for (int gap = N/2; gap > 0; gap /= 2)
//        for (int i = gap; i < N; ++i)
//            for (int j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
//                swap(v[j], v[j+gap]);
//}
