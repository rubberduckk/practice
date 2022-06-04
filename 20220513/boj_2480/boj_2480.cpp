//
//  main.cpp
//  20220513
//
//  Created by 김예은 on 2022/05/13.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getWinning(vector<int> number) {
    int winning = 0;
    
    sort(number.begin(), number.end());
    if ()
    
    return winning;
}

int main(int argc, const char * argv[]) {
    // inputs
    int diceNum, i;
    vector<int> dice;
    for (i=0; i<3; i++) {
        cin >> diceNum;
        dice.push_back(diceNum);
    }
    // func: get winning price under the conditions
    cout << getWinning(dice) << endl;
    
    return 0;
}
