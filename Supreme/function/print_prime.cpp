#include <iostream>
using namespace std;

//return true -> if N is a prime no.
//return false -> if N is not a prime no.

bool checkPrime(int n) {

	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			//remainder = 0 -> perfectly divisible
			//not a prime numbner
			return false;
		}
	}
	//yaha pr main keh skta hu
	//k [ 2,3,4,5 ------ n-1 ], koi bhi N ko perfectly divide
	//nahi kar paya hoga

	//it means, N is a prime no.
	return true;
	
}

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        bool isiprime = checkPrime(i);
        if(isiprime){
            cout<<i<<" ";
        }
    }
    
    return 0;
}