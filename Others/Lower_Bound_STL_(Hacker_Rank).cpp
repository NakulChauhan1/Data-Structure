// Commented section is my Solution/ my idea.
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int N;
    cin>>N;
    vector <int> arr;
    arr.resize(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];

    int q;
    cin>>q;
    for(int j=0;j<q;j++)
    {
        int n; cin>>n;
        for(int jj=0;jj<N;jj++)
    {
        vector<int>::iterator low;
        low = lower_bound(arr.begin(), arr.end(), n);
         if (arr[low - arr.begin()] == n){
           cout << "Yes " << (low - arr.begin() + 1) << endl;
           break;}
       else
           {cout << "No " << (low - arr.begin() + 1) << endl;
           break;}
        //low2 = lower_bound(arr.begin(), arr.end(), 55);
        /*if(n==arr[jj]){
            cout<<"Yes "<<jj+1<<endl;
            break;}
        else if(arr[jj]>n){
        cout<<"No "<<jj+1<<endl;
        break;}*/
    }
    }
    return 0;
}
