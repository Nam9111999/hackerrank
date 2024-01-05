void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int app=0,ora=0,tmp;
    for(int i = 0;i<apples.size(); i++) {
        tmp  = a+apples[i] ;
        if (tmp<=t&&tmp>=s) {
            app++;
        }
    }
    for(int i = 0;i<oranges.size(); i++) {
        tmp  =  b+oranges[i] ;
        if (tmp<=t&&tmp>=s) {
            ora++;
        }
    }
    
    cout<<app<<endl<<ora;
}