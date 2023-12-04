#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=140,ans=0;
bool check(int ii,int l,int r, vector<vector<char>>v){
    for(int i=ii-1;i<ii+2;i++){
        for(int j=l;j<r+1;j++){
            if(i>=0 && i<N && j>=0 && j<N && v[i][j]!='.' && (v[i][j]<48 || v[i][j]>57))return true;
        }
    }

    return false;
}
void solve(){
    vector<vector<char>>v (N,vector<char>(N));

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>v[i][j];
        }
    }
    int l,r;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){

            if(v[i][j]>=48 && v[i][j]<=57){
                l=j-1;
                while(v[i][j]>=48 && v[i][j]<=57){
                    j++;
                }    
                r=j;
                if(check(i,l,r,v)){
                    int m=1;
                    int sum=0;
                    for(int k=r-1;k>l;k--){
                        sum+=(v[i][k]-'0')*m;
                        m=m*10;
                    }
                    ans+=sum;
                }
            }
        }
    }
    cout<<ans<<"\n";

}

signed main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
         
            // For getting input from input.txt file
            freopen("input.txt", "r", stdin);
         
            // Printing the Output to output.txt file
            freopen("output.txt", "w", stdout);
         
            #endif

    //int _t;cin>>_t;while(_t--)
    solve();
}
