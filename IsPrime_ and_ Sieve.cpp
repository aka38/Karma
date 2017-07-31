bitset<MAX> P;
vector<int> prime;
void soe()
{
  P.set(); P[1]=0;
  for(int i=2;i*i<MAX;i++) if(P[i])
  for(int j=i*i;j<MAX;j+=i)P[j]=0;
  prime.PB(2);
  for(int i=3;i<MAX;i+=2) if(P[i])prime.PB(i);
}



bool is_prime(LL n) {
    if (n<2) return false;
    if (n<4) return true;
    if (n%2==0 || n%3==0) return false;
    if (n<25) return true;
    for (LL i = 5; i*i <= n; i += 6)
        if (n%i==0 || n%(i+2)== 0) return false;
    return true; 
}
