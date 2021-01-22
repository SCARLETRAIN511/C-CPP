#include <iostream>
#include <vector>
using namespace std;

//异或运算
class Solution{
    public:
    int singleNumber(vector<int> &nums){
        int ret = 0;
        for (auto e:nums){
            ret ^= e;
        }
        return ret;
    }
};

int main(){
    Solution s;
    vector<int> vec = {1,2,2,1,3,3,199};
    cout << s.singleNumber(vec)<<endl;
    for (auto i:vec){
        cout << i<<endl;
    }
}