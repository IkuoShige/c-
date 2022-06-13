#include<string>
//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
int main(){
    int h, w;
    std::cin >> h >> w;
    std::vector <std::string>A(h);
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
    std::cout << std::endl;
}
