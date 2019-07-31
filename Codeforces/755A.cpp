#include<bits/stdc++.h>
using namespace std;
int isPrime[ 1010000 ] ;
void sieve() {
	for( long long i = 2 ; i <= 1000010; i ++ ) {
		isPrime[ i ] = 1 ;
	}
	for( long long  i = 2 ; i <= 1000010 ; i ++ ) {
		for( long long j = i * i ; j <= 1000010 ; j += i ) {
			isPrime[ j ] = 0 ;
		}
	}
}
int main()
{
    int n ,i;
    cin>>n;
 
    sieve();
    for(i=1;i<=1000;i++){
        if(isPrime[n*i+1]==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}