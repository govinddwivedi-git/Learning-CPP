#include <bits/stdc++.h>
using namespace std;

int N=1000000;
vector<bool> sieve(N+1,true);
void createSieve(){
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=N;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=N;j+=i){
                sieve[j]=false;
            }
        }
    }
}
vector<int> generatePrimes(int N){
    vector <int> ds;
    for(int i=2;i<=N;i++){
        if(sieve[i]==true){
            ds.push_back(i);
        }
    }
    return ds;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    createSieve();

    int l,r;
    cin >> l >> r;
    vector <int> primes = generatePrimes(sqrt(r));

    vector <bool> dummy(r-l+1,true);

    for(auto pr : primes ){
        int firstMultiple = (l/pr)*pr;
        if (firstMultiple < l){
            firstMultiple += pr;
        }
        for(int j=max(firstMultiple,pr*pr);j<=r;j+=pr){
            dummy[j-l]=false;
        }
        
    }
    int count=0;
    for(int i=l;i<=r;i++){
        if(dummy[i-l]==true){
            cout << i << " " ; 
            count++;
        }
    }

    cout << endl << count << endl;
    
    return 0;
}