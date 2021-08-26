#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const int SIZE=1000005;
int ans[SIZE],u[SIZE],t[SIZE],ansu[SIZE];


void solve(){
    int n,a,b,c,d,cnt=1;
    while(cin >> n,n){
        cout << "Game " << cnt++ << ":" << '\n';
        for(int i=0;i<n;i++){
            cin >> ans[i];
        }
        while(1){
            memset(u,0,sizeof(u));
            memset(ansu,0,sizeof(ansu));
            for(int i=0;i<n;i++){
                cin >> t[i];
            }
            if(t[0]==0)break;
            int A=0,B=0;
            for(int i=0;i<n;i++){
                if(ans[i]==t[i]){
                    A++;
                    u[i]=1;
                    ansu[i]=1;
                }
            }
            /*for(int i=0;i<n;i++){
                cout << u[i] << " ";
            }
            cout << '\n';*/
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(u[i]==0 && ans[j]==t[i] && ansu[j]==0){
                        B++;
                        u[i]=1;
                        ansu[j]=1;
                        break;
                    }
                }
            }
            /*for(int i=0;i<n;i++){
                cout << ansu[i] << " ";
            }
            cout << '\n';*/
            cout << "    (" << A << "," << B << ")" << '\n';
        }
    }

}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
   /* int tt;
    cin >> tt;
    while(tt--)*/
    solve();
}
