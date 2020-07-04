class Solution {
public:
    int findComplement(int num) {
        
        int n = num;
        for(int i=0;i<32 and n;i++)
        {
            num = num^(1<<i);
            n = n>>1;
        }
    return num;
    }        
};
