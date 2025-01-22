#include <iostream>
using namespace std;

int holes(string &s){
    int count1=0;
    int count2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='R'||s[i]=='Q'){
            count1++;
        }
        if(s[i]=='B'){
            count2++;
        }
    }
    return count1+2*count2;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<holes(s)<<endl;
    }
	// your code goes here
	return 0;
}
