class Solution {
public:
    int findGap(int gap) {
        if (gap <= 1)
            return 0;
        return (gap / 2) + (gap % 2);
    }
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        
        int gap = n + m;
        gap = findGap(gap);  
        while (gap) {
            int i = 0, j = gap;
            while (j < (n + m)) {
                if (j < n && a[i] > a[j]) {
                    swap(a[i], a[j]);
                } 
                else if (j >= n && i < n && a[i] > b[j - n]) {
                    swap(a[i], b[j - n]);
                }
                else if (i >= n && b[i - n] > b[j - n]) {
                    swap(b[i - n], b[j - n]);
                }

                i++;
                j++;
            }
            gap = findGap(gap);
        }
    }
};
