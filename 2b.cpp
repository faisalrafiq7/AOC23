#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=100,ans=0;   
void solve(){
    while(N--){
        int maxr=0,maxg=0,maxb=0;
        string s;
        getline(cin,s);
        int k=0;
        while(s[k]!=':')k++;//Start after the : character
        int last=0;
        for(int i=k;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                if(last==0){
                    last=s[i]-'0';
                }else{
                    last=(last*10)+(s[i]-'0');
                }
            }else if(s[i]=='r'){
                i=i+3;
                if(last>maxr){
                    maxr=last;
                    last=0;
                }
                last=0;
            }else if(s[i]=='g'){
                i=i+4;
                if(last>maxg){
                    maxg=last;
                    last=0;
                }
                last=0;
            }else if(s[i]=='b'){
                i=i+4;
                if(last>maxb){
                    maxb=last;
                    last=0;
                }
                last=0;
            }
        }
        ans+=(maxr*maxb*maxg);

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
