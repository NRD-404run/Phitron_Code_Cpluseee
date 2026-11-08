#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public : 
    int jersey_no;
    string country;
    Cricketer(string country, int jersey_no){
        this->country = country;
        this->jersey_no = jersey_no;
    }

};
int main(){
    Cricketer* dhoni = new Cricketer("India",100);
    Cricketer* kohli = new Cricketer("India",10);
    kohli = dhoni;
    delete dhoni;
    cout << dhoni->country << dhoni->jersey_no << endl;
    cout << kohli->country << kohli->jersey_no << endl;

}