int Solution::seats(string A) {
	vector<int> crosspos;
	int n = A.length();
	for(int i=0;i<n;i++){
		if(A[i] == 'x'){
			crosspos.push_back(i);
		}
	}
	int mod = 1e7 + 3;
	int m = crosspos.size();
	if(m==0){
		return 0;
	}
	else{
		int start = crosspos[m/2];
	int middle = start+1;
	int ans = 0;
	int leftdone = 0;

	for(int i=m/2;i>=0;i--){
		ans += abs(start - crosspos[i]);
		ans%=mod;
		start--;
	}
	for(int i = m/2 +1;i<m;i++){
		ans += abs(middle - crosspos[i]);
		ans%=mod;
		middle++;
	}
	return ans%mod;
	}
	


}