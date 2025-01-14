#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt , size;
    float maxVaccinated;
    cin >> tt;
    while(tt--){
        cin >> size >> maxVaccinated;
        float arr[size];
        int risk = 0, notRisk = 0;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if( arr[i] >= 80 || arr[i] <= 9){
                risk++;
            }
            else{
                notRisk++;
            }
        }
        int riskTime = ceil(risk / maxVaccinated);
        int notRiskTime = ceil( notRisk/ maxVaccinated);
        cout << riskTime + notRiskTime << '\n';
    }

}
