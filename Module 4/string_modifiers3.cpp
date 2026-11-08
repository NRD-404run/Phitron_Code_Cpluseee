#include<bits/stdc++.h>
using namespace std;
int main(){
      string s = "Durjoy";
      string s2 = "Hello";
      //s = s2; //assign value 
      //s.assign(s2); //use func()
      s.assign("gello");
      cout << s <<endl;

      string s3 = "Durjoy Boss";
      s3.erase(6);//erase er moddhe index no dite hobe
                  //pore jei index no. dibo oita theke delete hobe

      cout << s3 << endl;

      string s4 = "Naimur King";
      s4.erase(4, 2); //index no first pore koita ch delete 
                      //korte chai oitar number
      cout << s4 << endl;

      string s5 = "Lion King";
      s5.replace(5,2,"Africa"); //replace means delte kore onno ch add hobe
                               //5 no. index er theke 2 ta por por ch delete 
                               //oi jaiga africa bosbe then last er baki ch print
      cout << s5 << endl;

      string s6 = "Hello dada";
      s6.replace(6,0,"bhai"); // delete na kore just replace
                              //6 no. index e bhai print pore dada baki tuku
      cout << s6 << endl;

      string s7 = "Lionel Messi";
      s7.insert(12," King");
      cout << s7 << endl;


}