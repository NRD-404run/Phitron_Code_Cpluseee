#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public : 
    string country;
    int jersey_no;
    Cricketer(string country, int jersey_no){
      this->country = country;
      this->jersey_no = jersey_no;
    }
};
int main(){
        Cricketer* dhoni = new Cricketer("India",110);
        Cricketer* kohli = new Cricketer("India",11);
        kohli->country = dhoni->country;
        kohli->jersey_no = dhoni->jersey_no;
        delete dhoni;
        //cout << dhoni->country<< " " << dhoni->jersey_no << endl;
        cout << kohli->country << " " << kohli->jersey_no << endl;
}