#include <iostream>
#include <iomanip>
using namespace std;

bool MG2(){
    int x,y,z,i1,i2,i3;
    x= 87;
    y= 52;
    z= 102;
    cout<<endl;

    cout<< "Please find the sum of " <<x <<" and " <<y <<endl;
    cin>> i1;
    cout<<endl;

    cout<< "Please find the sum of " <<z <<" and " <<y <<endl;
    cin>>i2;
    cout<<endl;

    cout<< "Please find the difference of " <<z <<" and " <<x <<endl;
    cin>> i3;
    cout<<endl;

    if ((i1 == 139) && (i2 == 154) && (i3 == 15)){
        cout<< "You pass the test!" <<endl << "You know your maths!" <<endl;
        return true;
    }
    else {
        cout<< "Should have paid attention in the first grade!" <<endl;
    }   return false;
    
}
int main(){

    MG2();
}