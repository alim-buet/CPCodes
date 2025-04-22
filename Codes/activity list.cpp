public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<int,int> pairs;
        for(int i=0;i<n;i++){
            pairs.pushback(make_pair(start[i],end[i]));

        }
        sort(paris.begin(),pairs.end()
            [](vector<int,int> & a , vector<int,int> &b){
                return a.second < b.second;
            });
        int ct = 0;
        int last = pairs[0].second;
        for(int i=1;i<n;i++){
            if(last<pairs[i].first){
                ct++;
                last= pairs[i].second;
            }
        }
        cout<<ct<<endl;
        
        
    }