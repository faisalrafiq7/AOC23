#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=1000,ans=0,sum=0;
void solve(){
    while(N--){
        sum=0;
        int first=0;
        int second=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]<97 || s[i]>122){
                first=(s[i]-'0')*10;
                break;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]<97 || s[i]>122){
                second=(s[i]-'0');
                break;
            }
        }

        sum=first+second;
        ans+=sum;
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
