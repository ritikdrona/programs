#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, int> xorMap;

int getMaxXOR(int N, vector<int> Arr) {
    if (xorMap.find(N) != xorMap.end()) {
        return xorMap[N];
    }

    if (N == 0) {
        return 0;
    }

    int maxXORRest = getMaxXOR(N - 1, Arr);
    int xorWithCurrent = maxXORRest ^ Arr.at(N-1);
    xorMap[N] = std::max(maxXORRest, xorWithCurrent);

    return xorMap[N];
}

// vector<int> getXors(int N, vector<int> Arr) {
//     if (N == 1) {
//         vector<int> r;
//         r.push_back(Arr.front());
//         return r;
//     }

//     vector<int> xors = getXors(N-1, Arr);
//     vector<int> moreXors;

// }

int calculateValidParenthesis(int n, int c = 0, int co = 0, int cc = 0) {
    if (cc > co)
        return 0;
    if (c == 2*n) {
        if (cc == co) return 1;
        else return 0;
    }

    int vpIfO = calculateValidParenthesis(n, c+1, co+1, cc);
    int vpIfC = calculateValidParenthesis(n, c+1, co, cc+1);

    return vpIfO + vpIfC;
}

int MXC(int N, int K, vector<int> Arr) {
    int maxXOR = getMaxXOR(N, Arr);
    // cout << maxXOR << endl;
    return K * calculateValidParenthesis(maxXOR);
}

int main() {
    // int N = 3, K = 2, a[] = {1, 2, 3};
    // int N = 5, K = 3, a[] = {1, 1, 1, 1, 1};
    int N = 5, K = 2, a[] = {1, 2, 3, 4, 5};

    vector<int> Arr;
    for (int i = 0; i < N; i++) {
        Arr.push_back(a[i]);
    }

    cout << MXC(N, K, Arr) << endl;

    // for (auto x: xorMap) {
    //     cout << x.first << " - " << x.second << endl;
    // }

    // cout << 2 * calculateValidParenthesis(7);

    return 0;
}
