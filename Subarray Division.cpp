int birthday(vector<int> s, int d, int m) {
    int res=0, count, sum;
    for(int i =0;i<s.size();i++) {
        count = 0;
        sum = 0;
        for(int j=i;j<s.size();j++) {
            count++;
            sum += s[j];
            if(count == m && sum == d) {
                res ++;
                break;
            }
           
        }
    }
    return res;
}
