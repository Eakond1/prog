#include <iostream>
#include <string>

using namespace std;
long long itc_len(string str){
    int length = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    return length;
}
string summa(string a, string b){
string result;
int c = a.length();
int d = b.length();
int dlina;
if (d > c) {
    result = b;
    dlina = d - c;
    for (int i = 0; i < dlina; i++) {
        a = '0' + a;
    }
}
else if (d < c) {
    result = a;
    dlina = c - d;
    for (int i = 0; i < dlina; i++) {
        b = '0' + b;
    }
}
else {
    result = a;
}

int dlina1 = result.length();
bool edinica = false;

for (int i = dlina1 - 1; i >= 0; i--) {
    int summ = (a[i] - '0') + (b[i] - '0') + edinica;
    result[i] = (summ % 10) + '0';
    edinica = summ / 10;
}

if (edinica) {
    result = '1' + result;
}

return result;
}
string vychitanie(string a, string b) {
    int edinica = 0;
    string result = "";

    while (itc_len(a) < itc_len(b)) {
         a = "0" + a;
    }
    while (itc_len(b) < itc_len(a)) {
        b = "0" + b;
    }

    for (int i = itc_len(a) - 1; i >= 0; i--) {
int differ = (a[i] - '0') - (b[i] - '0') - edinica;
if (differ < 0) {
differ = differ + 10;
edinica = 1;
}
else {
edinica = 0;
}
result = to_string(differ)+ result;
}
result.erase(0, result.find_first_not_of('0'));
return result;
}
bool check(string s)
{
    if(itc_len(s)>1 && s[0]=='-' && s[1]!='0')
    {
        for(int i=1; i<s.length(); i++)
            if(s[i]<'0' || s[i]>'9') return false;
        return true;
    }
    else return false;
}
int main() {
string a, b;
int c;
char minusic = '-';
cin >> a>>b>>c;
if(c == 1){
        if(itc_len(a) >= itc_len(b)){
            if(check(a)==false && check(b)==false){
                cout<<summa(a,b);
            }
            else if(check(a)==false && check(b)==true){
                b.erase(0,1);
                /*if(stoi(a) >= stoi(b)) {*/
                string result = vychitanie(a,b);
                cout<<result;
                /*}
                else {
                    string result = vychitanie(b,a);
                    result.insert (result.begin(), minusic);
                    cout<<result;
                }*/

            }
             else if(check(a)==true && check(b)==false){
                a.erase(0,1);
                string result = vychitanie(a,b);
                result.insert (result.begin(), minusic);
                cout<<result;
            }
             else if(check(a)==true && check(b)==true){
                b.erase(0,1);
                a.erase(0,1);
                string result = summa(a,b);
                result.insert (result.begin(), minusic);
                cout<<result;
            }
}
if(itc_len(a) < itc_len(b)){
    if(check(a)==false && check(b)==false){
                cout<<summa(a,b);
            }
            else if(check(a)==false && check(b)==true){
                b.erase(0,1);
                string result = vychitanie(b,a);
                result.insert (result.begin(), minusic);
                cout<<result;
            }
             else if(check(a)==true && check(b)==false){
                a.erase(0,1);
                string result = vychitanie(b,a);
                cout<<result;
            }
             else if(check(a)==true && check(b)==true){
                b.erase(0,1);
                a.erase(0,1);
                string result = summa(a,b);
                result.insert (result.begin(), minusic);
                cout<<result;
            }
}
}
if(c==2){
       if(itc_len(a) >= itc_len(b)){
    if(check(a)==false && check(b)==false){
                cout<<vychitanie(a,b);
            }
            else if (check(a) == false && check(b)==true){
                b.erase(0,1);
                string result = summa(a,b);
                cout<<result;
            }
            else if (check(a) == true && check(b)==false){
                a.erase(0,1);
                string result = summa(a,b);
                result.insert (result.begin(), minusic);
                cout<< result;
            }
            else if (check(a) == true && check(b)==true){
                b.erase(0,1);
                a.erase(0,1);
                string result = vychitanie(a,b);
                result.insert (result.begin(), minusic);
                cout<<result;
            }
}
if(itc_len(a) < itc_len(b)){
    if(check(a)==false && check(b)==false){
            string result = vychitanie(b,a);
            result.insert (result.begin(), minusic);
                cout<<result;
            }
    else if (check(a) == false && check(b)==true){
                b.erase(0,1);
                string result = summa(a,b);
                cout<<result;
            }
            else if (check(a) == true && check(b)==false){
                a.erase(0,1);
                string result = summa(a,b);
                result.insert (result.begin(), minusic);
                cout<<result;
            }
            else if (check(a) == true && check(b)==true){
                a.erase(0,1);
                b.erase(0,1);
                string result = vychitanie(b,a);
                cout<<result;
            }
}
}
return 0;
}
