vector<int> breakingRecords(vector<int> scores) {
    if (scores.size() < 2) return {0,0};
    int minn = scores[0],maxx = scores[0];
    vector<int> a(2);
    for(auto x:scores) {
        if(maxx < x) {
            a[0]++;
            maxx = x;
            continue;
        }
        
        if(minn > x) {
            a[1]++;
            minn = x;
            continue;
        }
        
    }
    
    return a;
}
