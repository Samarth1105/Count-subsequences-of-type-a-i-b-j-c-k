class Solution{
  public:
    int fun(string &s) {
        int n=s.length();
        
        long long a=0,b=0,c=0;
        
        for(unsigned int i=0;i<n;i++){
            if(s[i]=='a'){
                a=(1+2*a)% 1000000007;
            }
            else if(s[i]=='b'){
                b=(a+2*b)% 1000000007;
            }
            else if(s[i]=='c'){
                c=(b+2*c)% 1000000007;
            }
        }
        return c;
    }
};
