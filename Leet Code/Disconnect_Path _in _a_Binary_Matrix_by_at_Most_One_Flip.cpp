
class Solution { 
     public boolean isPossibleToCutPath(int[][] grid) { 
  int m = grid.length; 
  int n = grid[0].length; 
  boolean[][] marked = new boolean[m][n]; 
        marked[0][0]=true; 
  for (int i = 0; i < m; i++) { 
   for (int j = 0; j < n; j++) { 
                if(i==0&&j==0)continue; 
    marked[i][j] = grid[i][j] == 1 
      ? ((i > 0 ? marked[i - 1][j] : false) || (j > 0 ? marked[i][j - 1] : false)) 
      : false; 
   } 
  } 
  if (!marked[m - 1][n - 1]) 
   return true; 
 
  // finding answer if paths exists 
  Queue<int[]> q = new LinkedList<>(); 
  marked = new boolean[m][n]; 
  marked[0][0] = true; 
  q.add(new int[] { 0, 0 }); 
  while (!q.isEmpty()) { 
   if (q.size() == 1 && !(q.peek()[0] == 0 && q.peek()[1] == 0) 
     && !(q.peek()[0] == m - 1 && q.peek()[1] == n - 1)) 
    return true; 
   for (int i = 0; i < q.size(); i++) { 
    int[] del = q.remove(); 
    int x = del[0], y = del[1]; 
    if (x + 1 < m && grid[x + 1][y] == 1 && !marked[x + 1][y]) { 
     marked[x + 1][y] = true; 
     q.add(new int[] { x + 1, y }); 
    } 
    if (y + 1 < n && grid[x][y + 1] == 1 && !marked[x][y + 1]) { 
     marked[x][y + 1] = true; 
     q.add(new int[] { x, y + 1 }); 
    } 
   } 
  } 
  return false; 
 } 
 
}
