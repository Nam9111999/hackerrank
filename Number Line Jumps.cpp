string kangaroo(int x1, int v1, int x2, int v2) {
    float a;
    if((v1-v2) == 0) return "NO";
    a =  static_cast<float>(x2-x1)/(v1-v2);
    if (floor(a) == a && a >=0) {
        return "YES";
    }
    return "NO";
}
