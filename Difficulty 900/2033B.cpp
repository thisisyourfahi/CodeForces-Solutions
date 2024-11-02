#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> &matrix, int i, int j, int n, vector<vector<bool>> &processed) {
    int k = i, l = j, neg_value = matrix[i][j];
    while(k < n && l < n) {
        if(matrix[k][l] < 0) {
            neg_value = min(neg_value, matrix[k][l]);
        }

        // marking the index as processed 
        processed[k][l] = true;
        k++; l++;
        
    }
    return neg_value;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int n;
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        int total_magics = 0;
        // another vector to mark the processed indexes
        vector<vector<bool>> processed(n, vector<bool>(n, false));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] < 0 && !processed[i][j]) {
                    total_magics += solution(matrix, i, j, n, processed);
                }
            }
        }
        cout << abs(total_magics) << endl;
    }
    return 0;
}
