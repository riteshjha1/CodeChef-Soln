#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int T;
	cin>>T;
	while(T--){
	    long long int D,d,P,Q;
	    cin>>D>>d>>P>>Q;
	    long long int ans=0,p=0,q=0;
	    p+=P*D;
	    long long int diff=(D/d)-1;
	    q+=Q*d*(((diff)*(diff+1))/2);
	    int rem=D%d;
	    q+=(rem*(diff+1)*Q);
	    ans=p+q;
	    cout<<ans<<endl;
	}
	return 0;
}
