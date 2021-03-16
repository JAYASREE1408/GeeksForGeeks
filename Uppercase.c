string transform(string s)
{
    for(int i = 0;i < s.length();i++){
        if(s[i] == ' '){
            s[i+1] = s[i+1] -'a' + 'A';
        }
    }
        s[0] = s[0] - 'a' +'A';
        return s;
}
