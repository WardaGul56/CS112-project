#include <iostream>
#include <iomanip>
using namespace std;

bool MG1(){
    string b1 = "Banana", m1= "Moneky", r1 = "Rabbit", c1= "Carrot", p1= "Pony", a1="Apple";
    cout<<endl;

    cout<< p1 << "   --------------- " << c1 <<endl;
    cout<< r1 << " --------------- " << b1 <<endl;
    cout<< m1 << " --------------- " << a1 <<endl;
    cout<<endl;

    cout<< "Match the following pairs" <<endl;
    cout<<endl;


    cout<< "Monkey is going to match with??" <<endl;
    cin>>m1;
    cout<<endl;

    cout<< "Pony is going to match with??" <<endl;
    cin>>p1;
    cout<<endl;


    cout<< "Rabbit is going to match with??" <<endl;
    cin>>r1;
    cout<<endl;

    if ((m1== "Banana" || m1 == "banana") && (r1== "Carrot" || r1== "carrot") && (p1== "Apple" || p1== "apple")){
        return true;
    }
    else{
        return false;
    }
}

int main(){

     cout<<endl;
    if (MG1()){
        cout<< "You win." <<endl;
    }
    else{
        cout<< "You lost dumb dumb" <<endl;
    } 
}