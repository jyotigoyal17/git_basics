#include<bits/stdc++.h>
using namespace std;
void coin_comb(vector<int> &coins,int target){
    vector<int> strg(target+1,0);
    strg[0] = 1;
    for(int i=0;i<coins.size();i++){

        for(int j=1;j<target+1;j++){
            if(j >= coins[i])
                strg[j] = strg[j] + strg[j-coins[i]];

        }

    }
    cout<<endl;
    for(int i=0;i<target+1;i++)
        cout<<strg[i]<<" ";
    cout<<endl;
    cout<<strg[target]<<endl;
}
int main(){
    int target = 7;

    vector<int> coins = {2,3,5};
    // get  combinations i.e. 2 2 3,not ( 2 3 2 , 3 2 2,) 2 5 ,(not5 2)

// combination lvel is coins and option is target
    coin_comb(coins,target);
    return 0;

}

