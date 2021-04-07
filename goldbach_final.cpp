#include<bits/stdc++.h>
using namespace std;

#define N 1000000
int prime[N];
void seive(){

    for(int i=2; i <= N; ++i)
        prime[i] = 1;

    prime[0] = prime[1] = 0;

    int len = sqrt(N);

    for(int i = 2; i <= len; ++i){
        if(prime[i]){
            for( int k = i * i; k <= N; k += i )
                prime[k] = 0;
        }
    }

    prime[2] = 0;
}


int main() {

    seive();

   long long  int n;

    while((cin>>n) && n){

        for(long long int i = 3; i < n; i++){

            if( prime[i] ){


               long long int b = n - i;

                if( prime[b] ){
                    cout<<n<<" "<<"="<<" "<<i<<" "<<"+"<<" "<<b<<endl;
                    break;
                }

            }
        }

    }


    return 0;
}
