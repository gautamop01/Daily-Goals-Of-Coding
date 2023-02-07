//c
class Solution { 
    public int maximizeWin(int[] prizePositions, int k) { 
  int n = prizePositions.length; 
  Arrays.sort(prizePositions); 
  int[] after = new int[n]; 
  int[] maxafter = new int[n]; 
  for (int i = 0; i < n; i++) { 
   int ind = BinarySearch.floorIndex(prizePositions, prizePositions[i] + k); 
   after[i] = ind - i + 1; 
  } 
  for (int i = n - 1; i >= 0; i--) { 
   maxafter[i] = Math.max(after[i], (i < n - 1 ? maxafter[i + 1] : 0)); 
  } 
  int ans = 0; 
  for (int i = 0; i < n; i++) { 
   int ind = BinarySearch.floorIndex(prizePositions, prizePositions[i] + k) + 1; 
   ans = Math.max(ans, after[i] + (ind < n ? maxafter[ind] : 0)); 
  } 
  return ans; 
 } 
    static class BinarySearch { 
  static int ceilIndex(int arr[], int x) { 
   int low = 0; 
   int high = arr.length - 1; 
   int ind = -1; 
   boolean xmatched = false; 
   while (low <= high) { 
    int mid = (low + high) / 2; 
    if (arr[mid] > x) { 
     if (!xmatched) 
      ind = mid; 
     high = mid - 1; 
    } else if (arr[mid] == x) { 
     ind = mid; 
     low = mid + 1; 
     xmatched = true; 
    } else { 
     low = mid + 1; 
    } 
   } 
   return ind; 
  } 
 
  static int floorIndex(int[] arr, int x) { 
   int low = 0; 
   int high = arr.length - 1; 
   int ind = -1; 
   boolean xmatched = false; 
   while (low <= high) { 
    int mid = (low + high) / 2; 
    if (arr[mid] < x) { 
     if (!xmatched) 
      ind = mid; 
     low = mid + 1; 
    } else if (arr[mid] == x) { 
     ind = mid; 
     low = mid + 1; 
     xmatched = true; 
    } else { 
     high = mid - 1; 
    } 
   } 
   return ind; 
  } 
 } 
 
}
