#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public :
    int jersey_no;
    string country;
};
int main(){
    Cricketer* dhoni = new Cricketer;
    (*dhoni).jersey_no = 33;
    dhoni->country = "India";

    Cricketer* kohli = new Cricketer;
    kohli = dhoni;
    cout<<dhoni->jersey_no << " "<< dhoni->country<<endl;
    cout<<kohli->jersey_no << " " << kohli->country <<endl;

}