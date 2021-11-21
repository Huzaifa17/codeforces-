#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, t, n, indx, m, c;
    char s[1500];
    c = 0;
    cin >> k;
    cin >> s;
    //n = strlen(s);
    int arr[26] = {0}, arr2[26] = {0};
    /*for(i=0;i<26;++i)
    {
        cout<<arr[i]<<endl;
    }*/
    for (i = 0; s[i] != '\0'; ++i)
    {
        arr[s[i] - 'a']++;
    }
    /*for(i=0;i<26;++i)
    {
        cout<<arr[i]<<endl;
    }
    */
    for (i = 0; i < 26; ++i)
    {
        if ((arr[i] % k) != 0)
        {
            c = 1;
            break;
        }
        else
        {
            arr2[i] = arr[i] / k;
        }
    }
    /*cout<<"In 2"<<endl;
    for(i=0;i<26;++i)
    {
        cout<<arr2[i]<<endl;
    }
    */
    if (c == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    string s2[1500];
    indx = 0;
    for (i = 0; i < 26; ++i)
    {
        j = arr2[i];
        while (j)
        {
            s2[indx] = (char)i + 'a';
            //cout<<s2[indx]<<" i: inx: "<<i<<indx<<endl;
            indx++;
            j--;
        }
    }
    /*cout<<indx<<endl;
    for(i=0;i<indx;++i)
    {
        cout<<s2[i];
    }
    cout<<endl;
    */
    s2[indx] = '\0';
    //cout<<s2<<endl;
    for (i = 0; i < k; ++i)
    {
        for(j=0;j<indx;++j)
        {
            cout<<s2[j];
        }
    }
    cout << endl;
    return 0;
}
