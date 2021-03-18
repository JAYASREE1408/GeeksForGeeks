// Input: 
// N1 = "12"
// N2 = "15"
// Output: 1
// Explanation: 12 * 15 = 180 which is an 
// even number.


int EvenOdd(string n1 , string n2)
{
    if( (n1[n1.length()-1] * n2[n2.length()-1] ) % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
