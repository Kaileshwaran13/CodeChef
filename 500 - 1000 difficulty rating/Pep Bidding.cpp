#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     int aA[n], dA[n];
	     int aP[n], dP[n];
	     int attacksumA=0 ,defencesumA=0 ;
	       int attacksumP=0 ,defencesumP=0 ;
	       
	       
	    for(int i=0;i<n;i++){
	       cin>>aA[i];
	       attacksumA = attacksumA + aA[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>dA[i];
	         defencesumA = defencesumA + dA[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>aP[i];
	        attacksumP = attacksumP + aP[i];
	    }
	     
	    for(int i=0;i<n;i++){
	        cin>>dP[i];
	         defencesumP = defencesumP + dP[i];
	    }
	    if(attacksumA > attacksumP && defencesumA >defencesumP) cout<<"A"<<endl;
	    else if(attacksumP > attacksumA && defencesumP >defencesumA) cout<<"P"<<endl;
	    
	    else  cout<<"DRAW"<<endl;
	}

}
