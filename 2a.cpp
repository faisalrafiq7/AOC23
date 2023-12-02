#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=100,r=12,g=13,b=14,ans=0,gm=0;   
void solve(){
    while(N--){
        string s;
        getline(cin,s);
        gm++;
        int k=0;
        while(s[k]!=':')k++;//Start after the : character
        int last=0;
        bool check=1;
        for(int i=k;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                if(last==0){
                    last=s[i]-'0';
                }else{
                    last=(last*10)+(s[i]-'0');
                }
            }else if(s[i]=='r'){
                i=i+3;
                if(last>r){
                    check=0;
                    last=0;
                    break;
                }
                last=0;
            }else if(s[i]=='g'){
                i=i+4;
                if(last>g){
                    check=0;
                    last=0;
                    break;
                }
                last=0;
            }else if(s[i]=='b'){
                i=i+4;
                if(last>b){
                    check=0;
                    last=0;
                    break;
                }
                last=0;
            }
        }
        if(check)ans+=gm;

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
