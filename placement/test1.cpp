#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

unordered_map<string,int>mymap;

string Small[20]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen",
                     "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
string Tens[8]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
string Large[4]={"Hundred","Thousand","Million","Billion"};

string tolow(string s){
        for(int i=0;i<s.length();i++)
            if(s[i]>='A'&&s[i]<='Z')s[i]+='a'-'A';
        return s;
    }
    
void initt()
{
      
      for(int i=0;i<20;i++)mymap[tolow(Small[i])]=i;
      for(int i=0;i<8;i++)mymap[tolow(Tens[i])]=10*(i+2);
      for(int i=0,b=100;i<4;i++){
          mymap[tolow(Large[i])]=b;
          b*=(i==0?10:1000);
      }
}
    
long stringToNumber(string s)

{
            
            s=tolow(s);
            int n=s.length();
            int res=0;
            long ans=0;
            bool negative=false;
            
            for(int i=0;i<n;i++){
                string t;
                for(;i<n&&s[i]>='a'&&s[i]<='z';i++)t+=s[i];
                
                if(!t.empty()){                    
                    if(t=="negative"){negative=true;continue;}
                    if(mymap.count(t)==0)continue;//illegal word

                    int v=mymap[t];
                    if(v<100)res+=v;
                    else if(v==100)res*=100;
                    else{
                        ans+=(long)res*v;
                        res=0;
                    }
                }
            }
            ans+=res;
            return (negative?-ans:ans);
}      

signed main()
{
    IOS
    initt();
 
    ll t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<stringToNumber(s)<<"\n";
    }

}

