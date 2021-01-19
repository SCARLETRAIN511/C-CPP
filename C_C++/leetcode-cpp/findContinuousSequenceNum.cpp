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
        //从1开始枚举
        for (int i = 1;i<=limit;i++){
            //往后找连续数字 直到超出target或等于target;
            for (int j = i;;j++){
                sum += j;
                if (sum > target){
                    sum = 0;
                    //如果超出，重新改变初始值
                    break;
                }else if(sum == target){
                    res.clear();
                    //把数字加入组合 res
                    for (int k = i;k<=j;k++){
                        res.emplace_back(k);
                    }
                    //把组合加入数组
                    vec.emplace_back(res);
                    //initialization
                    sum = 0;
                    break;
                }
            }
        }
        return vec;
    }

    bool compare(){
        vector<int> num = {1,2,3};
        //与有符号数比较，-3 转为无符号数
        return num.size() < -3;
    }
};

int main(){
    Solution s;
    vector<vector<int>> vec = s.findContinuousSequence(9);
    //print the 2d vector;
    for (int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << s.compare()<<endl;
}
