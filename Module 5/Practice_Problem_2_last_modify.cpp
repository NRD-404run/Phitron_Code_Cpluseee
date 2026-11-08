#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    string country;
    int jersey_no;
    Cricketer(string country, int jersey_no){
        this->country = country;
        this->jersey_no = jersey_no;
    }
};
int main(){
    Cricketer* tamim = new Cricketer("Bangladesh",28);
    Cricketer* shakib = new Cricketer("Bangladesh",75);
    *shakib = *tamim;
    delete tamim;
    cout << shakib->country << " " << shakib->jersey_no << endl;
}