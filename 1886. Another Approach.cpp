bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target) return true;
        int n = mat.size();
        for(int t=0; t<3; t++){
            vector<vector<int>> temp(n, vector<int> (n));
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++)
                    temp[j][n-1-i] = mat[i][j];
            }
            swap(temp, mat);
            if(mat == target)
                return true;
            
        }
        return false;
    }
