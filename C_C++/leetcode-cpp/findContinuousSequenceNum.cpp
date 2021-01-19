#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<vector<int>> findContinuousSequence(int target){
        vector<vector<int>> vec;
        vector<int> res;
        int sum = 0;
        int limit = (target - 1)/2;
        for (int i = 1;i<=limit;i++){
            for (int j = i;;j++){
                sum += j;
                if (sum > target){
                    sum = 0;
                    break;
                }else if(sum == target){
                    res.clear();
                    for (int k = i;k<=j;k++){
                        res.emplace_back(k);
                    }
                    vec.emplace_back(res);
                    sum = 0;
                    break;
                }
            }
        }
        return vec;
    }
};

int main(){
    Solution s;
    vector<vector<int>> vec = s.findContinuousSequence(6);
    for (int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[0].size(); j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
