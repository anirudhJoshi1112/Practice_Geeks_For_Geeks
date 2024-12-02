class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
        vector<int> indices;
        int txtLen = txt.length();
        int patLen = pat.length();
        if (pat.empty() || txt.empty() || patLen > txtLen) {
            return {};
        }
        vector<int> lps(patLen, 0); 
        for (int i = 1, len = 0; i < patLen;) {
            if (pat[i] == pat[len]) {
                lps[i++] = ++len;
            } else if (len > 0) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
        for (int i = 0, j = 0; i < txtLen;) {
            if (txt[i] == pat[j]) {
                i++, j++;
            }
            if (j == patLen) {
                indices.push_back(i - j); 
                j = lps[j - 1];
            } 
            else if (i < txtLen && txt[i] != pat[j]) {
                if (j > 0) {
                    j = lps[j - 1]; 
                } 
                else {
                    i++;
                }
            }
        }

        return indices;
    }
};
