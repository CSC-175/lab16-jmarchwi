int gcf(int a, int b) {
    int x, y, r;
    if (a > b){
        x = a;
        y = b;
    }
    else if (a < b) {
        x = b;
        y = a;
    }
    else{return a;}
    r = x % y;
    if(r==0){return y;}
    else {
        a = y;
        b = r;
        gcf(a,b);
    }
}