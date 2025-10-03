// User function Template for Java

class Solution {
    public int[] getFloorAndCeil(int x, int[] arr) {
       int floor = -1, ceil = -1;
        Arrays.sort(arr);
        int i = arr.length - 1;
        while (i >= 0 && arr[i] > x) {
            i--;
        }
        if (i >= 0) {
            floor = arr[i];
        }
        int j = 0;
        while (j < arr.length && arr[j] < x) {
            j++;
        }
        if (j < arr.length) {
            ceil = arr[j];
        }

        return new int[]{floor, ceil};
    }
}
