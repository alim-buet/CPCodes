class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<pair<int,int>>  ind_ratingssorted;
        for(int i=0;i<n;i++){
            ind_ratingssorted.push_back(make_pair(i,ratings[i]));
        }
        sort(ind_ratingssorted.begin(),ind_ratingssorted.end(),
            [](pair<int,int>&a , pair<int,int>&b){
                return b.second > a.second;  
            });
        vector<int> scores(n);
        int total_score = 0;
        for(int i = 0;i<n;i++){
            if(ind_ratingssorted[i].first == 0){
                if(ratings[1]<ratings[0]) {
                    total_score+= (scores[1]+1);
                    scores[0] = scores[1]+1;
                }
                else {
                    total_score++;
                    scores[0] = 1;
                }
            }
            else if(ind_ratingssorted[i].first == n-1){
                if(ratings[n-1]>ratings[n-2]){
                    total_score+= (scores[n-2] +1);
                    scores[n-1] = (scores[n-2]+1);
                }
                else{
                    total_score++;
                    scores[n-1] =1;
                }
            }
            else{
                if(ratings[ind_ratingssorted[i].first]>ratings[ind_ratingssorted[i].first - 1] && 
                   ratings[ind_ratingssorted[i].first]>ratings[ind_ratingssorted[i].first + 1]){
                    total_score+= max(scores[i-1],scores[i+1])+1;
                    scores[i] = max(scores[i-1],scores[i+1])+1;
                }
                else if(ratings[ind_ratingssorted[i].first]>ratings[ind_ratingssorted[i].first - 1] && 
                        !(ratings[ind_ratingssorted[i].first]>ratings[ind_ratingssorted[i].first + 1])){
                    total_score+= (scores[i-1])+1;
                    scores[i] = (scores[i-1])+1;
                }
                else if(!(ratings[ind_ratingssorted[i].first]>ratings[ind_ratingssorted[i].first - 1]) && 
                        (ratings[ind_ratingssorted[i].first]>ratings[ind_ratingssorted[i].first + 1])){
                    total_score+=(scores[i+1])+1;
                    scores[i] = scores[i+1] +1;
                }
                else{
                    total_score++;
                    scores[i] = 1;
                }
            }
        }
        return total_score;
    }
};
