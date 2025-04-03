#include<iostream>
using namespace std;

class Human
{
 private:
	string name;	
 public:
 
 	Human (string n) : name(n) { }
 	
 	void set_name (string n) { name=n; }
 	string get_name () { return name; }
	void play()
	{
    int c;
    cout<< "You open your eyes startled by the sound of something squeaking....."<< endl 
	    <<"its dark you can't properly distinguish the figure of something small..."<< endl 
		<<"as your eyes adjust you realize its a small mouse."<< endl 
		<<"You let out a sign of relief but that is short lived as you notice its no ordinary mouse but a demonic one with vicious big claws and red eyes."<< endl 
		<<"You see a stick to your right.Instinctively you know you need to think quickly or you are a goner."
        <<"You need to choose between the two choices : "<< endl 
	    <<"1) Kill the mouse with the stick."<< endl 
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
    string name;
    cout<<"Player please enter you name :"<<endl;
    getline(cin,name);
    Human h1(name);

    cout<<"HELLOOOO "<< h1.get_name() <<"!! The demon king has taken over the kingdom of Avalon .The world has become infested with his minions and demon folk who raom everywhere wreaking havoc and killing everyone."
        <<endl<<"______________________________"
        <<endl<<"You are an ordinary human on a quest to save your kingdom from these evil forces ......good luck on your journey. Sayonara "
        <<endl<<"______________________________";
	return 0;
}
