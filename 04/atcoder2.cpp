#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
int main(){
    std::vector<std::vector<int>> A(3, std::vector<int>(3));
    int sum=0;
    //std::vector<std::vector<int>> B(3, std::vector<int>(3));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cin >> A.at(i).at(j);
        }
    }
    //calculate
    sum = A.at(0).at(0)*((A.at(1).at(1)*A.at(2).at(2))-(A.at(1).at(2)*A.at(2).at(1)));
    sum -= A.at(1).at(0)*((A.at(0).at(1)*A.at(2).at(2))-(A.at(0).at(2)*A.at(2).at(1)));
    sum += A.at(2).at(0)*((A.at(0).at(1)*A.at(1).at(2))-(A.at(0).at(2)*A.at(1).at(1)));
    std::cout << sum << std::endl;
}
