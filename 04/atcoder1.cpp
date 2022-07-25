#include<bits/stdc++.h>
int main(){
    int N, M;
    std::cin >> N >> M;
    std::vector<int> A(M), B(M);
    for (int i = 0;i < M; i++){
        std::cin >> A.at(i) >> B.at(i);
    }
    //main
    std::vector<std::vector<char>> score(N, std::vector<char>(N, '-'));
    for (int i = 0; i < M; i++){
        A.at(i)=A.at(i)-1;
        B.at(i)=B.at(i)-1;
        score.at(A.at(i)).at(B.at(i)) = 'o';
        score.at(B.at(i)).at(A.at(i)) = 'x';
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            std::cout << score.at(i).at(j);
            if (j+1==N) std::cout << std::endl;
            else std::cout << " ";
        }
    }
}
