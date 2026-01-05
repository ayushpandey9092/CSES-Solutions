#include <bits/stdc++.h>
using namespace std;
// combination of placing all- combination of attack
// hint - check for all 8 directon knight cann move and remove dublicates.
int main() {
	// your code goes here
	long long int n ;
	cin>>n;
        for(long long int i=1;i<=n;i++)
        {
            if(i==1)cout<<0<<endl;
            else
            {
                long long count=0;
                long long q=i*i;
                count+=(q*(q-1))/2;
                count-=(i-2)*(i-1)*4;
                cout<<count<<endl;
            }
        }
	

}

