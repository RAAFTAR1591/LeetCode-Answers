class Solution {
public:
    bool isPalindrome(int x) {
        string t = to_string(x);
        int l=t.length(), i;

        for (i=0;i<l/2;i++)
        {
            swap(t[i], t[l - i - 1]);
        }
        
        cout << t;

        if (t == to_string(x))
        return true;
        else
        return false;
    }
};