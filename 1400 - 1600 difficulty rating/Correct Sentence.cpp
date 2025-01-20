#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		vector<string> v;   
		int ans=0;
		for (int i = 0; i < k; i++)
		{
			string s;
			cin >> s;
			v.push_back(s);   
		}
		for (int j = 0; j < k; j++)
		{
			string n = v[j];
			int cnt1=0,cnt2=0;
			for (int i = 0; i < n.size(); i++)

			{
				if ((n[i] >= 'a' and n[i] <= 'm')  )
				{
					cnt1++;
				}
				else if( (n[i] >= 'N' and n[i] <= 'Z')) cnt2++;
				if(cnt1==n.size() and cnt2==0){ 
					ans++;
				}
				else if( cnt2==n.size() and cnt1==0){
					ans++;
				}
			}
		}
		if(ans==k) 
		    cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
}
