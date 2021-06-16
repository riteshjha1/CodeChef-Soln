#include <iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main() {
	
	/* ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); */
	
	long long int t,n,m,I,J;
	cin>>t;
	
	while(t--)
	{
	    int ans=-1;
	    cin>>n>>m;
	    int A[n];
	    int B[m];
        
	 
	    for(int a=0;a<n;a++) 
            cin>>A[a];
        for(int b=0;b<m;b++) 
            cin>>B[b];
        
        for(int x=0;x<m;x++)
        {
            if(A[B[x]-1]!=0)
                cout<<0<<' ';
            else
            {
                int i=0,j=n-1;
                unsigned int temp_i=INT_MAX,temp_j=INT_MAX;
                while(i<B[x]-1)
                {
                    if(A[i]==1)
                        temp_i=i;
                        
                    i++;
                }
                while(j>B[x]-1)
                {
                    if(A[j]==2)
                        temp_j=j;
                    j--;
                }
                if(temp_i==temp_j)
                   cout<<-1<<' ';
                else
                {
                    I=abs(int((B[x]-1)-temp_i));
                    J=abs(int(temp_j-(B[x]-1)));
                    ans=min(I,J);
                    cout<<ans<<' ';
                }
            }
        }
        cout<<endl;
	}
	return 0;
}