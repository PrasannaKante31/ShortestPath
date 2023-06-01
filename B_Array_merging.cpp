//I am 1 oF MY KiND .PK

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<long long>
#define Map map<long long,long long>
#define Unmap unordered_map<long long,long long>
#define Set set<long long>
#define Unset unordered_set<long long>
#define push push_back

void Solve()
{

    int n;
    cin>>n;
    int a[n];
    int b[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    int i=0;
    int cnt1=0;
    int cnt2=0;
    int res= 0;
    bool trig=false;
    while (i<n){
        int j=i;

        while (a[j]==a[i] && j<n){
            cnt1++;
            j++;
            trig= true;
        }
        if (trig){
            j--;
        }
        
        // cout<<"the value of j is "<<j;

        i=j;

        for (int k=0; k<n; k++){
            if (a[i]==b[k]){
                cnt2++;
                
            }
            else {
                cnt2=0;
            }
            res= max(cnt1+cnt2,res);
        }
        cnt2=0;
     
        i++;
        // cout<<" the value mof i is "<<i<<endl;
        cnt1=0;
    }
    cout<<res<<endl;
}

signed main(){

    int t;
    cin>>t;
    while (t--){

        Solve();

    }

return 0;
}