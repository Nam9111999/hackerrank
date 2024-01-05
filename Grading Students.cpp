vector<int> gradingStudents(vector<int> grades) {
    int tmp,round;
    for(int i=0;i<grades.size();i++) {
        tmp = grades[i] / 5;
        round = 5 * (tmp+1);
        if(round >= 40 && (round- grades[i]) < 3) {
           grades[i] = 5 * (tmp+1);
        }
    }
    return grades;
}
