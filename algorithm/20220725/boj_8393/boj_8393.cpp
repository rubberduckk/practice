//
//  boj_8393.cpp
//  20220725
//
//  Created by κΉμμ on 2022/07/25.
//

#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    for (int i=1; i<=num; i++) {
        sum += i;
    }
    cout << sum << endl;
}
