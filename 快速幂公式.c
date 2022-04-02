
##########################整数######################
int quick_pow(int base, int pow){
    int res = 1;
    while(pow != 0){
        if(pow & 1) res = res * base;
        pow >>= 1;
        base = base * base;
    }
    return res;
}


##########################矩阵######################

vector<vector<int>>(vector<vector<int>>& base, int m, int n, int num){
    vector<vector<int>> res = vector<vector<int>>(m, vector<int>(n, 0));
    while(num != 0){
        if(num & 1) res = mutmul(res, base);
        num >>= 1;
        base = matmul(base ,base);
    }
    return res;
}

vector<vector<int>> matmul(vector<vector<int>>& a, vector<vector<int>>& b){
    int m = a.size(), n=b[0].size(), l=a[0].size();
    vector<vector<int>> c = vector<vector<int>>(m, vector<int>(n, 0));
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        for(int k=0; k<l; k++){
            c[i][j] = c[i][j] + a[m][k] * b[k][n]; 
        }
      }
    }
    return c;
}
