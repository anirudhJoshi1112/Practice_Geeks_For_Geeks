//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Stack to store opening brackets.
        stack<char> st;

        // Traverse the input string.
        for (int i = 0; i < x.length(); i++)
        {
            // If the character is an opening bracket, push it onto the stack.
            if (x[i] == '{' || x[i] == '(' || x[i] == '[')
            {
                st.push(x[i]);
            }
            // If the character is a closing bracket, check for matching opening bracket.
            else
            {
                // If the stack is empty, no matching opening bracket.
                if (st.empty())
                {
                    return false;
                }
                
                char top = st.top();
                st.pop();

                // Check if the current closing bracket matches the top of the stack.
                if ((x[i] == ')' && top != '(') ||
                    (x[i] == '}' && top != '{') ||
                    (x[i] == ']' && top != '['))
                {
                    return false;
                }
            }
        }

        // If the stack is empty, all brackets were balanced.
        return st.empty();
    }
};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
