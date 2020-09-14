#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define forn(i,l,n) for(int i = int(l);i<int(n);i++)
#define forx(i,l,n) for(int i = int(l);i<=int(n);i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int mi=101,ma=0;
        forn(i,0,n)
        {
            cin>>a[i];
            mi = min(mi,a[i]);
            ma = max(ma,a[i]);
        }
        if(ma-mi+1>k)
        {
            cout<<-1<<endl;
        }
        else
        {
            int sum=0;
            forn(i,0,k)
            {
                sum+=a[i];
            }
            int flag = 0;
            forn(i,1,n-k)
            {
                int ss=0;
                forn(j,0,k)
                {
                    ss+=a[i+j];
                }
                if(ss!=sum)
                {
                    flag = 1;
                }
            }
            if(flag==0)
            {
                cout<<n<<endl;
                forn(i,0,n)
                    cout<<a[i]<<" ";
                cout<<endl;
            }
            // if(n==k)
            // {
            //     cout<<n<<endl;
            //     forn(i,0,n)
            //         cout<<a[i]<<" ";
            //     cout<<endl;
            // }
            else
            {   int f=1;
                if(ma-mi+1>k)
                    {
                        f=0;
                        cout<<-1<<endl;
                    }
                if(f)
                {
                    vector<int> tt;
                    //cout<<n*k<<endl;
                    forn(i,0,n)
                    {
                        forn(j,1,k+1)
                        {
                            tt.pb(j);
                        }
                    }
                    vector<int> ans;
                    int j=0;
                    forn(i,0,n*k)
                    {
                        if(tt[i]==a[j])
                        {
                            j++;
                        }
                        ans.pb(tt[i]);
                        if(j==n)
                            break;
                    }
                    cout<<ans.size()<<endl;
                    forn(i,0,ans.size())
                        cout<<ans[i]<<" ";
                    cout<<endl;

                    //cout<<endl;
                }
            }   
        }
    }
    return 0;
}