// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int l=1,r=n,m,ans=0;
        bool p;
        while(l<=r)
        {
            m=(l+r)/2;
            p=isBadVersion(m);
            if(p==true){ans=m;r=m-1;}
            else l=m+1;
        }
        return ans;
    }
};
