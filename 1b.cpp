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

        //for first
        for(int i=0;i<s.length();i++){
            //if first is a digit
            if(s[i]<97 || s[i]>122){
                first=(s[i]-'0')*10;
                break;
            }
            //one
            if(s[i]=='o'){
                if(i+2<s.length()){
                    if(s[i+1]=='n'&& s[i+2]=='e'){
                        first=10;
                        break;
                    }
                } 
            }
            //two and three
            if(s[i]=='t'){
                if(i+2<s.length()){
                    if(s[i+1]=='w' && s[i+2]=='o'){
                        first=20;
                        break;
                    }
                }
                if(i+4<s.length()){
                    if(s[i+1]=='h' && s[i+2]=='r' && s[i+3]=='e' && s[i+4]=='e'){
                        first=30;
                        break;
                    }
                }
            }
            //four five
            if(s[i]=='f'){
                if(i+3<s.length()){
                    if(s[i+1]=='o'&& s[i+2]=='u'&& s[i+3]=='r'){
                        first=40;
                        break;
                    }else if(s[i+1]=='i'&& s[i+2]=='v'&& s[i+3]=='e'){
                        first=50;
                        break;
                    }
                }
            }
            //six seven
            if(s[i]=='s'){
                if(i+2<s.length()){
                    if(s[i+1]=='i' && s[i+2]=='x'){
                        first=60;
                        break;
                    }
                }
                if(i+4<s.length()){
                    if(s[i+1]=='e' && s[i+2]=='v' && s[i+3]=='e' && s[i+4]=='n'){
                        first=70;
                        break;
                    }
                }
            }

            if(s[i]=='e'){
                if(i+4<s.length()){
                    if(s[i+1]=='i' && s[i+2]=='g' && s[i+3]=='h' && s[i+4]=='t'){
                        first=80;
                        break;
                    }
                }
            }

            if(s[i]=='n'){
                if(i+3<s.length()){
                    if(s[i+1]=='i' && s[i+2]=='n' && s[i+3]=='e'){
                        first=90;
                        break;
                    }
                }
            }
        }

        //for second
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]<97 || s[i]>122){
                second=(s[i]-'0');
                break;
            }

            if(s[i]=='e'){
                if(i-2>=0){
                    if(s[i-1]=='n'&& s[i-2]=='o'){
                        second=1;
                        break;
                    }
                }

                if(i-4>=0){
                    if(s[i-1]=='e'&& s[i-2]=='r'&& s[i-3]=='h'&& s[i-4]=='t'){
                        second=3;
                        break;
                    }
                }
                if(i-3>=0){
                    if(s[i-1]=='v'&& s[i-2]=='i'&& s[i-3]=='f'){
                        second=5;
                        break;
                    }
                }
                if(i-3>=0){
                    if(s[i-1]=='n'&& s[i-2]=='i'&& s[i-3]=='n'){
                        second=9;
                        break;
                    }
                }
            }
            if(s[i]=='o'){
                if(i-2>=0){
                    if(s[i-1]=='w'&& s[i-2]=='t'){
                        second=2;
                        break;
                    }
                }
            }

            if(s[i]=='r'){
               if(i-3>=0){
                    if(s[i-1]=='u'&& s[i-2]=='o'&& s[i-3]=='f'){
                        second=4;
                        break;
                    }
                } 
            }

            if(s[i]=='x'){
                if(i-2>=0){
                    if(s[i-1]=='i'&& s[i-2]=='s'){
                        second=6;
                        break;
                    }
                }
            }

            if(s[i]=='n'){
                if(i-4>=0){
                    if(s[i-1]=='e'&& s[i-2]=='v'&& s[i-3]=='e'&& s[i-4]=='s'){
                        second=7;
                        break;
                    }
                }
            }

            if(s[i]=='t'){
                if(i-4>=0){
                    if(s[i-1]=='h'&& s[i-2]=='g'&& s[i-3]=='i'&& s[i-4]=='e'){
                        second=8;
                        break;
                    }
                }
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
