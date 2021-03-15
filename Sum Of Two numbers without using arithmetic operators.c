
class Solution
{
    public:
    int sum(int a , int b)
    {
        int s,carry;
        while(b!=0)
        {
        s = a ^ b;
        carry = (a & b) << 1;
        a = s;
        b = carry;
        }
        return a;
    }
    
};
