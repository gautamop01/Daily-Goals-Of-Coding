class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        int visited[n][2];
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            visited[i][0] = 1;
            visited[i][1] = 1;
        }

        int rowSum = 0, colSum = 0;
        int i = queries.size() - 1;

        while (i >= 0) {
            if (visited[queries[i][1]][queries[i][0]]) {
                queries[i][0] == 0 ? rowSum++ : colSum++;
                sum += (n - (queries[i][0] == 0 ? colSum : rowSum)) * queries[i][2];
                visited[queries[i][1]][queries[i][0]] = 0;
            }
            i--;
        }

        return sum;
    }
};
