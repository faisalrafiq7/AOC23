#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=140,ans=0,idx=0,lasti[2],lastj[2],num1,num2;
int getnum(int i,int j,vector<vector<char>>v){
    int num=0;
    int m=1;
    while(v[i][j]>=48 && v[i][j]<=57){
        num+=(v[i][j]-'0')*m;
        m=m*10;
        j--;
    }
    return num;
}
bool check(int ii, int jj, vector<vector<char>>v){
    int key=0;
    for(int i=ii-1;i<ii+2;i++){
        for(int j=jj-1;j<jj+2;j++){
            if(v[i][j]>=48 && v[i][j]<=57){
                key++;
                while(v[i][j]>=48 && v[i][j]<=57)j++;
                lasti[idx]=i;
                lastj[idx]=j-1;
                idx=1-idx;
            }    
        }
    }
    if(key==2){
        num1=getnum(lasti[0],lastj[0],v);
        num2=getnum(lasti[1],lastj[1],v);
        return true;
    }
    num1=0;
    num2=0;
    idx=0;
    return false;
}
void solve(){
    vector<vector<char>>v (N,vector<char>(N));

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(v[i][j]=='*'){
                //found the symbol now check if there are two part numbers adjacent;
                if(check(i,j,v)){
                    ans+=num1*num2;
                    num1=0;
                    num2=0;
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
