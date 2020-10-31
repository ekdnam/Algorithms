// Algorithm to find the sum of all substrings of a given number 
// Example: Input: S = 1234 Output: 1670 Explanation: Sum = 1 + 2 + 3 + 4 + 12 + …

long long sumSubstrings(string s){
    const int p = 1000000007;
    int n = s.length();
    long long  dp[n];
    dp[0] = (s[0]-'0');
    long long sum=dp[0];
    for(int i=1;i<n;i++){
        dp[i] = ((i+1)*(s[i]-'0') + 10*dp[i-1])%p;
        sum+=dp[i];
        if(sum>p){
            sum = (sum%p);
        }
    }
    return sum;
}
