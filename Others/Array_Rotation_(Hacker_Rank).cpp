// Remember output will be on file not on console.
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d)
{
    vector<int> rotLeft(vector<int> a, int d);
    vector<int> temp;
    for(int i=d;i<a.size();i++)
    {
        temp.push_back(a[i]);
    }
    for(int i=0;i<d;i++)
    {
        temp.push_back(a[i]);
    }

   /*Without Auxilary Array:
    for(int i=0;i<d;i++)
    {
        int t=a[0];
        for(int j=0;j<a.size()-1;j++)
        {
            a[j]=a[j+1];
        }
        a[a.size()-1]=t;
    }*/

    /* Second Attempt:
    #include<iostream>
#include<vector>
using namespace std;
main()
{
    vector<int> arr={1,2,3,4,5,6,7,8};
    int r;
    cin>>r;
    int n=8;
    for(int i=0;i<r;i++)
    {
        int t=arr[0];
    for(int j=0;j<n;j++)
    {
        if(j==n-1)
        {
            arr[j]=t;
        }
        else
            arr[j]=arr[j+1];
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    vector<int> result = rotLeft(a, d);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
