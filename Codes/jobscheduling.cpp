#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int custom_cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<pair<int, int>> startend;
        for (int i = 0;i < startTime.size();i++) {
            startend.push_back(make_pair(startTime[i], endTime[i]));
        }
        sort(startend.begin(), startend.end(), custom_cmp());
        vector<pair<int, int>> profit_endtime;
        for (int i = 0;i < endTime.size();i++) {
            profit_endtime.push_back(make_pair(profit[i], endTime[i]));
        }
        sort(profit_endtime.begin(), profit_endtime.end(), custom_cmp());
        int maxprofit = 0;
        for(int i=0;i<endTime.size() ; i++){
            

        }



    }
};

int main() {

    return 0;
}
