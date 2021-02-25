#include<bits/stdc++.h>
using namespace std;

int countdist(string str, int k)
{
    int n = str.length();

    // Initialize result
    int res = 0;

    // To store count of characters from 'a' to 'z'
    int cnt[26];

    // Consider all substrings beginning with
    // str[i]
    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;

        // Initializing array with 0
        memset(cnt, 0, sizeof(cnt));

        // Consider all substrings between str[i..j]
        for (int j=i; j<n; j++)
        {
            // If this is a new character for this
            // substring, increment dist_count.
            if (cnt[str[j] - 'a'] == 0)
                dist_count++;

            // Increment count of current character
            cnt[str[j] - 'a']++;

            // If distinct character count becomes k,
            // then increment result.
            if (dist_count == k)
                res++;
            if(dist_count > k) break;
        }
    }

    return res;
}
int main()
{
    int n,k;
    cin >> n>>k;
    string s;
    vector <char> vec[k];
    for(int i=0; i<n; i++)
    {
        cin >> s;
        for(int j=0; j<s.size(); j++)
        {
            vec[j].push_back(s[j]);
        }
    }
    string str[1000];
    int l = 0;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n; j++)
        {
            str[l] = vec[i][j];
            l++;
        }
    }
    string st;
    for(int i=0; i<l; i++)
    {
        st += str[i];
    }
    cout << st <<endl;
    int arr[30], y=0;
    for(int i=0; i<st.size();)
    {
        arr[y] = countdist(st.substr(i, n), 3);
        i+=n;
        y++;
    }
    for(int i=0; i<y; i++)
    {
        cout << arr[i]<<endl;
    }
    sort(arr, arr+y);
    cout << arr[0] <<endl;
}
