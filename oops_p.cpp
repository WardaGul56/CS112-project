#include<iostream>
using namespace std;

class Human
{
public:
	Human()
	{
    int c;
    cout<< "You open your eyes startles by the sound of something squeking....."<< endl 
	    <<"its dark you can't properly distinguish the figure of something small..."<< endl 
		<<"as your eyes ajdust its a small mouse."<< endl 
		<<"You let out a sign of relief but that is short lived as you notice its no ordinary mouse but a demonic one with vicious big claws and red eyes."<< endl 
		<<"You see a stick to your right.Instinctively you know you need to think quickly or you are a goner."
        <<"You need to choose between the two choices : "<< endl 
	    <<"1) kill the mouse with the stick."<< endl 
	    <<"2)Run away."<<endl;
    
    cin>>c;
    switch(c)
    	{
    	 case 1:
		{
		   cout<<"Congratulations you have successfully killed the demonic mouse earning a dagger as reward.";
		   break;
		   	}
		
		case 2:
		{
			cout<<"You have choosen to run away from a mere demonic mouse.You are not fit for the path of a warrior."<<endl;
           
         break;
            }
       default:
       	cout<<"Choose either 1 or 2.";
       	break;
       }  
}
};

int main()
{
	Human h1;
	return 0;
}
