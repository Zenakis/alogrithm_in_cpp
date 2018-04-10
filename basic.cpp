//
//  basic.cpp
//  alogrithm
//
//  Created by Zen on 01/03/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#include "basic.hpp"
#include <string>

int i = 0;

//array 的變數宣告
char* s[10];


bool b = false;

struct Point {
    int x,y;
};


class Ball{
    
    public:
        Ball();
        Ball(double, const char*);
        Ball(double, std::string&);
        
        double radius();
        std::string& name();
        
        void radius(double);
        void name(const char*);
        void name(std::string&);
        
        double volumn();
        
    private:
        double _radius; // 半徑
        std::string _name;   // 名稱
    
};

int * new_array(int n){
    int *ptr;
    ptr = new int[n];
    return ptr;
};

void new_TwoDim_array(){
//    int i=0, j=0;
//    int cnt=0;
//    int row_cnt=0;
//    int col_cnt=0;
    
    int a1[2][3] = {{1,2,3},{4,5,6}};
    int a2[2][3] = {{1,2},{4}};
    int a3[][3] = {{1,2,3},{4,5,6}};
    
    //顯示a1陣列內容
    std::cout<< std::endl << "a1:" << std::endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            std::cout << a1[i][j] << "";
        }
        std::cout<< std::endl;
    }
    
    //顯示a2陣列內容
    std::cout<< std::endl << "a2:" << std::endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            std::cout << a2[i][j] << "";
        }
        std::cout<< std::endl;
    }
    
    //顯示a3陣列內容
    std::cout<< std::endl << "a3:" << std::endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            std::cout << a3[i][j] << "";
        }
        std::cout<< std::endl;
    }
    
    //所有元素個數的總和
    std::cout<< "所有元素個數的總和 : " << sizeof(a3[0][0]) << std::endl;
    //陣列的列數
    std::cout<< "陣列的列數 : " << sizeof(a3)/sizeof(a3[0]) << std::endl;
    //陣列的行數
    std::cout<< "陣列的行數 : " << sizeof(a3[0])/sizeof(a3[0][0]) << std::endl;
    
//    cnt = sizeof(a3)/sizeof(a3[0][0]);
//    row_cnt = sizeof(a3)/sizeof(a3[0]);
}

void double_pointer(){
    
}
