#include<string>
//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
int main(){
    int h, w,sum;
    std::cin >> h >> w;
    sum = h*w;
    /*std::vector <std::string>A(h);
    for (int i = 0;i<w+2;i++){
        std::cout << "#";
    }
    std::cout << std::endl;
    for (int i=0;i<h;i++){
        std::cin >> A.at(i);
        std::cout << "#" << A.at(i) << "#" << std::endl;
    }
    for (int i = 0;i<w+2;i++){
        std::cout << "#";
    }
    std::cout << std::endl;*/
    std::vector<std::vector<char>> A(h, std::vector<char>(w));
    for (int i = 0;i<h;i++){
        for (int j = 0;j<w;j++){
            std::cin >> A.at(i).at(j);
        }
    }
    //output
    for (int i=0;i<w+2;i++){
        std::cout << "#";
    }
    std::cout << std::endl;
    for (int i=0;i<h;i++){
        std::cout << "#";
        for (int j=0;j<w;j++){
            std::cout << A.at(i).at(j);
            if (j+1==w){
                std::cout << "#" << std::endl;
            }
        }
    }
    for (int i=0;i<w+2;i++){
        std::cout << "#";
    }
    std::cout << std::endl;
    /*for (int i = 0;i<h;i++){//output
        for (int j = 0;j<w;j++){
             std::cout << A.at(i).at(j) << std::endl;
         }
    }*/
}
