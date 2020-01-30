#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	  
	for(int i=0;i<t;i++)
	{
	    long n;
	    cin>>n;
	    int flag=0,flag2=0;
	    long long k,temp,temp1;
	    cin>>k;

	    for(long j=0;j<n;j++)
	    {
	  vector<long long> arr;
	  flag=0;
	        cin>>temp;
	        if(temp<10 || temp>=k)
	        continue;
	        temp1=temp;
	        while(temp1>0)
	        {
	       arr.push_back(temp1%10);
	       temp1=temp1/10;
	        }
	       for(long l=0;l<arr.size()-1;l++)
	       {
	           if(abs(arr[l]-arr[l+1])!=1)
	           flag=1;
	       }
	       if(flag==0 && temp<k)
	       {
	           flag2=1;
	           cout<<temp<<" ";
	       }
	    }
	    if(flag2==0)
	    {
	        cout<<-1;
	    }
	    cout<<endl;
	}
	return 0;
}
