int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    vector<int> gasdble, costdble;
    int n = gas.size();
    for(int i = 0;i<2n;i++){
        gasdble[i] = gas[i%n];
        costdble[i] = cost[i%n];
    }
    int start= 0;
    int curr = A[0]-B[0];
    int curr_pos = 0;
    int flag = 0;
    while(curr_pos<2*n){
        if((start - curr_pos) == n){
            return start;
        }
        if(curr<0){
            curr = 0;
            start = curr_pos+1;
        }
        else{
            curr_pos++;
            curr += A[curr_pos] - B[curr_pos];

        }

    }
    return -1;
        
}