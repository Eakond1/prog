#include <iostream>
#include <string>
using namespace std;
int main() {
string st;
st= "CCBCCCCCCCCCCCACCCBCABCCCAACCCCCCBCCCCCCCCCCCCCACBBCCCCCCCCCCCCCCBCCCCCCBCCCCCCCCCCCCCCACCCCCBCCABCACCCCCCACCCCBCACCCBCCCCCCBBCBCCCCCCCBCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCACCACACCCCBCAACCCCCCCCCBCBCCCCACCCCCCCCCACBCCCCBABCCACCCCCCCCCCCCCCACCBCCCCACCBCCACCCCCABCCBCCACBCBCCCCACBCCBCCCCCCCCBCCCCBCCACCCCCCCCCBCACCCAACCCCACACCCCCCACCCCCCCACCCCCCBCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCBCCACCCCCCCCCCCCCCCCBCCBCCCCBCACCCCCBCCCCBBCCCBCBACCCCBCCCCCCCCCACBCCCCCCCCACBCCCCCBCCCACBBCAACBCCCCCCCCBCACCCCCCCCCCCABCCCCCCCCCCCCCCCCCCCCCCCBCACCACCCCCBCCACCCCCCCCCCCCCCABCCCCCCAACCCCCCCBCCCCCCCCBCCCCCCCCBCCCCCCACBCCACCACCCACCCCCCCCCAAACACCCBBCCCCCACCCCCCCCCCCBCCACCCCCCCCCCBCCCCCCCCCCCCBCCCCCCCCCACCBCCCCCBCCCCCCCCCCCCBCCACCCCCBCACCCCCCACCBCCCCCCCCCBCCCCCCCCCCCCCCCCCBCBCCCCCBCCCCCCCCBCCCCCCCCCCACCCCCCCCCCCCCCCCCCCBCCACCCCCCCCACBCCCCCCACCCCCCCCCCCCCCACCCCBCCCACCBCACCCACCCCCCCCCCCCCBCCCCCCCCCCBCABCCBCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCACCCCCCCCCCCCCCCCCCCAACCCCCCCCCCBCCCCCCCCCABCACBCCCCCCCCCCCCCCC";
int kol = 0, maxi = 0  ;
for(int i = 0; i < st.size(); i++){
    if( st[i] == 'C'){
        kol ++;
    }
    else {
        if(kol > maxi)
                maxi = kol;
        kol= 0 ;
    }
}
if(kol > maxi)
                maxi = kol;
cout<< maxi;
return 0;
}
