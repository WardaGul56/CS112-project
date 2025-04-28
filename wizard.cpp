#include<iostream>
using namespace std;

void waitForEnter()
{
    cout <<"\033[1;36m"<< "\n[Press Enter to continue...]\n"<< "\033[0m";
     cin.ignore(); // waits for user to press Enter
  cin.get();
}
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

bool MG3()
{
    string s4, s5, s6, s7;
    string s1 = "mporgnimrag"; // programming
    string s2 = "mage";        // game
    string s3 = "gocnid";      // coding
    string s8 = "abl";         // lab

    cout << "Unscramble this word: " << s1 << endl
         << endl;
    cin >> s4;

    if (s4 == "programming")
    {

        cout << "Unscramble this word: " << s2 << endl
             << endl;
        cin >> s5;
        if (s5 == "game")
        {
            cout << "Unscramble this word: " << s3 << endl
                 << endl;
            cin >> s6;
            if (s6 == "coding")
            {
                cout << "Unscramble this word: " << s8 << endl
                     << endl;
                cin >> s7;
                if (s7 == "lab")
                {
                    cout << "You are CORRECT!!!" << endl
                         << endl;
                    return true;
                }
                else
                {
                    cout << "You are wrong, please try again." << endl
                         << endl;
                    return false;
                }
            }
            else
            {
                cout << "You are wrong, please try again." << endl
                     << endl;
                return false;
            }
        }
        else
        {
            cout << "You are wrong, please try again." << endl
                 << endl;
            return false;
        }
    }
    else
    {
        cout << "You are wrong, please try again." << endl
             << endl;
        return false;
    }
    return true;
}

class Boss{
  private:
  int e_hp;
  int e_damage;
  public:
  Boss(int a,int b) : e_hp(a) , e_damage(b)  {}

  void set_Bhp( int a)  { e_hp = a;}
  void set_Bdamage( int a)  { e_hp = a;}

  int get_bhp() { return e_hp ; }
  int get_bdamage() { return e_damage; }

  void i_Bhp (int a) { e_hp += a; }
  void d_Bhp (int a) { e_hp -= a; }
  void i_Bd (int a) { e_damage += a; }
  void d_Bd (int a) { e_damage -= a; }
};

class Human
{
private:
    string name;

public:
    Human(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    virtual void identity()
    {
        cout << "I am a human" << endl;
    }
};


class stats
{
    private:
      int current_hp;
      int damage;
      int mana;

    public:
      stats ( int chp , int d)
      {
        current_hp = chp;
        damage = d;
      }
      void set_hp ( int chp)
      {
         if (chp <= 0) { cout << "You are out of hp loserr!!"; }
         else  { current_hp = chp; }
      }
     
      int get_chp() { return current_hp; }
      
      void increase_hp (int i_hp)
      {
        current_hp = current_hp + i_hp;
      }

      void decrease_hp (int d_hp )
      {
        current_hp = current_hp - d_hp;
        if(current_hp == 5)
        {
          cout<<"Your hp is running out(very close to zero)";
        }
        else if(current_hp == 0)
        {
          cout<<"You have run out of HP....You died\n Better luck next time";
        }
      }


      void set_damage ( int d ) { damage = d; }
      int get_damage ()  {return damage ; }

      void increase_damage (int inc_d)  { damage = damage + inc_d; }
      void decrease_damage (int dec_d)  { damage = damage - dec_d; }

     void set_Mana(int mana)  {this->mana=mana;}

    int get_mana() { return mana;}

    void increase_mana (int m) {mana = mana + m ;}
    void decrease_mana (int m) {
      mana = mana - m ;
    if(mana==0)
  {
      cout<<"You have run out of mana\n Can't cast magic";
      
  }
  else if(mana == 4)
  {
    cout<<"Your mana is very close to zero";
  }
}
};

class Wizard : public Human,public stats
{
    private:
       int blackhole;
      
    public:
    Wizard(string n, int h, int d) : Human(n), stats(h, d)
    {
    	set_Mana(5);
    }
 
    string get_name() { return getName(); }
    
    int play()
    {
        int choice;
        waitForEnter();
        cout<<"\nCONGRATULATIONSSS PLAYER!!!"<<endl<<"For being upgraded to wizard (cool right?)"<<endl<<"Your quest begins here";
        cout<<endl<<"________________________________________________ "<<endl;
        cout<<"Happy about being upgraded you go to the adventurer's guild to testout your new powers "
            <<endl<<"You take on the quest of retreieving a wagon that was attacked and stolen by a goblin........when you arrive at the specified location you are spotted by the goblin who stole the wagon";
            waitForEnter();
            cout<<endl<<"what do you do?" 
            <<endl<<"1 . Kill it ?"
            <<endl<<"2 . Pretend you are dead"
            <<endl<<"3 . Run away"<<endl;
            
        cin>>choice;
        
        switch ( choice )
        {
            case 1:
              {
              cout<<"\nYou have decided to kill the goblin."<<endl;
              cout<<endl<<"__________________________"<<endl<<"\033[1;31m"<<"PLAYER STATS : "<<endl<<"HP = "<<get_chp()<<endl<<"Damage = "<<get_damage()<< "\033[0m";
              cout<<"\n__________________________"<<endl<<"\033[1;31m"<<"GOBLIN STATS"<<endl<<"HP = 15"<<endl<<"Damage = 3"<< "\033[0m"<<endl<<"__________________________";
              cout<<"\nAttack the goblin!!";
              waitForEnter();
              cout <<"__________________________"   <<"\nYou hit the golin with a knife attack"<<endl<<"\033[1;31m"<<"Goblin HP -5"<<endl<<"Remaining goblin HP = 10"<< "\033[0m"
                  <<"\nThe goblin retaliated by stabbing you in the leg with his spear"<<"\033[1;31m"<<"\nPlayer HP -3"<< "\033[0m"<<"\nPlayer is losing blood,player needs to finish the fight quickly";
                  //waitForEnter();
                  cout<<"\nYou see 2 openings"
                  <<"\n1 . Hit the goblin in the chest"
                  <<"\n2 . Aim for his leg\n";
                  int ch;
                  cin>>ch;
                  
                if(ch==1) { 
                  cout<<"__________________________"<<"\nThe goblin has sustained critical injury!!"<<"\033[1;31m"<<"\nGoblin HP -10"<<"\n Remaining goblin HP = 0"<< "\033[0m";
                  cout<<"\nYou Win!!";
                  waitForEnter();
                }
                else if (ch==2)
                {
                  cout<<"__________________________"<<"\nYou hit the goblin in the leg "<<"\033[1;31m"<<"\n Goblin HP -5 \n Remaining goblin HP = 5"<< "\033[0m"<<endl<<"The goblin aimed at your face but ony scratched you"
                      <<"\033[1;31m"<<"\n Player HP -3"<< "\033[0m"<<"\nWhile the goblin is injured you take the chance to attack him in chest"
                      <<"\033[1;31m"<<"\n Goblin HP -5"<< "\033[0m";
                      //waitForEnter();
                      cout<<"\033[1;31m"<<"\n Remaining goblin HP = 0"<< "\033[0m" << endl<<"__________________________\n" <<"Congrats on successfully killing the goblin and retrieving the wagon"
                      <<"\nYou have been rewarded 7 HP!\n";
                      increase_hp(7);
                      waitForEnter();
                }
                else { cout << "Enter a valid choice";}
             cout<<"\nYou are now entering a mini game!Good luckk\n";
             waitForEnter();
             if (MG1()) {
              cout<<"__________________________"<< "\nCongratulation on clearing the Mini game.You clearly do have some common-sense(unexpected!) :)" <<endl;
              cout<<"Your mana has been increase by +5";
              waitForEnter();
             }
             else
             {
              cout<<"\n__________________________"<<"\nYou lack some serious common sense ....concerning"<<"\033[1;31m"<<"\n Player Hp -5 "<< "\033[0m"<<"(for lacking common sense)";
              waitForEnter();
             }
              cout<<"\n__________________________\n"<<"Having lost your way in woods ,you wander and thanks to your bad luck accidently come across a very big and ugly troll\n"
                  <<"What do you do?\n"
                  <<"1 . Run away?\n"
                  <<"2 . Face him?"<<"\n__________________________\n";
              int c2;
              cin>>c2;
              if(c2==1) {
                cout<<"\nYou turn to run away but before you can even take a step back...the troll swings his bat n smashes you with it..."
                    <<"\n_______________\n"<<"\033[1;31m"<<"Player hp = 0\n"<< "\033[0m"<<"You have died due to a cowardly move..."<<"\n_______________\n";
                    set_hp(0);
              }
              else if( c2 == 2 )
              {
                 cout<<"\nYou sure are courageous to have decided to face the troll\n"<<"Now what do you do?\n"
                     <<"1 . Attack him with your dagger?\n"
                     <<"2 . Make use of your magic?(did you forget you are now a wizard)\n";
                     int c3;
                     cin>>c3;
                     //waitForEnter();
                if( c3 == 1)
                {
                  cout<<"\nYou attack the troll with your dagger...but his skin is too tough...you can't seem to pierce it"
                      <<"\nwhile you are surprised he swings the a wooden club in his hand ....hiting you in the head...\n"
                      <<"The impact was too much"<<"\033[1;31m"<<"\nPlayer HP = 0\n"<< "\033[0m"<<"You died.";
                      return 0;
                }    
                else if (c3 == 2)
                {
                	waitForEnter();
                  cout<<"A very wise choice indeed cuz the thick hide of a troll cant be cut with a dagger..\n"
                      <<"You try summoning a fireball it fails.. "<<"\nToo bad beacuse is preparing to attack you..you better hurry up \n";
                      waitForEnter();
                    cout  <<"\nfrightened...you try summoning the fireball again ...it works this time\n"
                      <<"\n_____________________\n"<<"\033[1;31m"<<"Mana consumed -3"<< "\033[0m"<<"\n_____________________\n"
                      <<"The troll dies after being set on fire\n"
                      <<"As a reward your mana stats have been increased by 3 pointss!!\n";
                      increase_mana(4);
                      waitForEnter();
                      //path
                      cout<<"\n_____________________\n"<<"You open your eyes...its very dark in here"<<"\nYou realize you are inside a cave....\n"
                <<"Suddenly you heard a noise...a big viscious roar...\nYou whole body feels a shiver as the hair on the back of your neck rises"
                <<"\nYou instinctively know whoever that growl was of ... you dont wanna face it...you will die ..."<<"\nJust as you are thinking that"
                <<" you hear a second one...much closer than before"<<"\n________________________\n"<<"What do you do?"
                <<"\n1 . Run away?"
                <<"\n2 . Fall asleep?"<<"\n________________________\n";
                int c4;
                cin>>c4;
            if(c4==2)
            { 
              cout<<"You fall asleep...the monster thinks you are dead\nAfter you wake up you find your way out of the cave..you are safe now";
              cout<<"Now its time for a minigame";
              waitForEnter();
              if(MG2())
              {
                
                cout<<"\n________________________\n"<<"Congratulations on clearing the minigame!\nYou have been awarded +5 HP";
                increase_hp(5);}
                else
                {
                  cout<<"you have failed to clear the mini game"<<"\033[1;31m"<<"\nPlayer Hp -5"<< "\033[0m";
                  decrease_hp(5);
                }
                waitForEnter();
                cout<<"\n________________________\n"<<"As you exit the cave you come across 2 demonic dogs"<<"\nThey are blocking your path so you need to kill them"
                <<"\nHow do you kill them?"<<"\nBurn both the dogs?"<<"\nBurn one and run away?\n";
                int c6;
                cin>>c6;
                if(c6==1)
                {
                  cout<<"\n________________________\n"<<"You cast a fireball and kill one demonic dog...Then you cast another fireball and killing  the other one";
                  waitForEnter();
                 cout <<"You wasted too much mana on these two\n________________________\n"<<"\033[1;31m"<< "Mana stats -5"<< "\033[0m"<<"\n________________________\n";
                  decrease_mana(5);
                  waitForEnter();
                }
                if(c6==2)
                {
                  cout<<"\n________________________\n"<<"You cast a fireball and kill one demonic dog"<<"\n________________________\n"<<"\033[1;31m"
                  <<" Mana stats -2\n Enemy Mana = 0"<< "\033[0m"<<"\n________________________\n"<<"While the other is distracted you take this chance to run away";
                  decrease_mana(2);
                  waitForEnter();
                  cout<<"While running away the other demonic dog scratches you abit"<<"\n________________________\n"<<"\033[1;31m"<<" Hp -2"<< "\033[0m"
                  <<"\n________________________\n";
                  decrease_hp(2);
                  
                }
                waitForEnter();
                cout<<"\nYou are very tired do you want to rest now?"
                    <<"\n1 . Rest?"<<"\n2 . Walk?\n";
               int c7;
               cin>>c7;
               if( c7 == 1)
               {
                cout<<"\n________________________\n"<<"After resting for a bit you gained HP\n"<<"\033[1;31m"<<"Player HP +1"<< "\033[0m"<<"\n________________________\n";
                increase_hp(1);
               }
               if(c7==2)
               {
                cout<<"\n________________________\n"<<"You decided to walk despite being tired"<<"\033[1;31m"<<"\nPlayer HP -1"<< "\033[0m"<<"\n________________________\n";
                decrease_hp(1);
               }
               waitForEnter();
               cout<<"\n________________________\n"<<"After spending months training you abilities , you feel like you have become more powerful than before...";
               cout<<"\nOne day you are wandering the woods when you come across a someone....You instantly recognize him \n "
               <<"He's Asmodeus...The demon king's right hand man \n And a ....Necromancer....";
               waitForEnter();
               cout<<"\n________________________\n"<<"You think you are powerfull enough to kill him."
                   <<"\nWhat do you wanna do?"<<"\n1 . Fight him?"<<"\n2 . Injure him then run away?"<<"\n3 . Totally run away cuz you are a scaredy cat.\n";
                   int c8;
                   cin>>c8;
                  cout<<"\n________________________\n";
                   switch(c8)
                   {
                    case 1:
                    {  cout<<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                      waitForEnter();
                      cout<<"The skeletons start tearing you limb from limp..."<<"\033[1;31m"<<"\nPlayer Hp -10"<< "\033[0m" <<"\n What do you do?"
                      <<"\n1 . Cast fire magic?"<<"\n2 . Flood them with water?";
                      int c9;
                      cin>>c9;
                      if(c9==1 ) {
                        cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                        <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... "<<"\nAnother skeleton appears out of nowhere"
                        <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\nPlayer Hp =0"<< "\033[0m" 
                        <<"\nYou have died..........";
                        set_hp(0);
                      }
                      else if(c9==2) {
                          cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                          <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                          <<"\nThe skeletons start tearing you limb by limb\n\n"<<"\033[1;31m"<<"\n Player HP -10"<<"\n Player Hp -5"<< "\033[0m"
                          <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                          set_hp(0);
                      } break;}
                    case 2:
                    { cout<<"\ntsk..tskk..tskkk ....I did not expect that of the great player ..."<<"\nBefore you even have time to cast a spell..."
                      <<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                      waitForEnter();
                      cout<<"The skeletons start tearing you limb from limp..."<<"\033[1;31m"<<"\n Player Hp -10"<< "\033[0m" <<"\n What do you do?"
                      <<"/n1 . Cast fire magic?"<<"\n2 . Flood them with water?";
                      int c19;
                      cin>>c19;
                      if(c19==1 ) {
                        cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\n Player Mana -5"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                        <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... "<<"\nAnother skeleton appears out of nowhere"
                        <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\n Player Hp =0"<< "\033[0m" 
                        <<"You have died..........";
                        set_hp(0);
                      }
                      else if(c19==2) {
                          cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                          <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                          <<"\nThe skeletons start tearing you limb by limb\n\n"<<"\033[1;31m"<<"\nPlayer HP -10"<<"\n\nPlayer Hp -5"<< "\033[0m"
                          <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                          set_hp(0);
                      } break;}
                    case 3:
                    { cout<<"\ntsk..tskk..tskkk ....I did not expect that of the great player ..."<<"\nyou start running...but with just a wave of his hand"
                      <<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                      waitForEnter();
                      cout<<"The skeletons start tearing you limb from limp..."<<"\033[1;31m"<<"\nPlayer Hp -10"<< "\033[0m" <<"\n What do you do?"
                      <<"/n1 . Cast fire magic?"<<"\n2 . Flood them with water?";
                      int c91;
                      cin>>c91;
                      if(c91==1 ) {
                        cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\n Player Mana -5"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                        <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... "<<"\nAnother skeleton appears out of nowhere"
                        <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\n Player Hp =0"<< "\033[0m" 
                        <<"You have died..........";
                        set_hp(0);
                      }
                      else if(c91==2) {
                          cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                          <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                          <<"\nThe skeletons start tearing you limb by limb\n\n"<<"\033[1;31m"<<"\n Player HP -10"<<"\n\n Player Hp -5"<< "\033[0m"
                          <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                          set_hp(0);
                      }
                      else
                      { cout<<"enter only 1 or 2 in this choice"; }
                      } break;
                   }
               
              
                
            }
            else if(c4==1)
            {
              cout<<"\n________________________\n"<<"As you are running away ,you realise the whole cave is a series of labirynth ...you take two rights"
                  <<"and are positive that you are lost.....due to the dark you cant see much and stumble onto the floor because of something";
                  waitForEnter();
                  cout<<"\nIt was a treasure chest that was flipped open and a strange light is comming from it"
                  <<"\nThe light is comming from the bottle with a shimmering golden liquid inside...you know whatever it is, its gonna help you"
                  <<"\nWhat do you do?"
                  <<"\n1 . drink it?"
                  <<"\n2 . Throw it away"<<"\n________________________\n";
                  int c5;
                  cin>>c5;
                  if (c5==1){
                    cout<<"\nYou have unlocked a hidden path!!!";
                cout<<"\n You drink the potion and unlock a new abilityyy!!Mini blackHoleee!!!"<<"\n________________________\n";
                waitForEnter();
               cout<<"You are ready to face the monster now .....just as it appraoches you ....you notice its a chimera...a hybrid between a n owl and a lion"
                   <<"\n You are horrified but pull yourself together before you a goner...";
                   waitForEnter();
                   cout<<"\nYou try your new ability black hole....."
                   <<"\nIt sucks the monster right in ....killing it"<<"\nCONGRATULATIONS on ending the monster!"
                   <<"\n_____________________\nBlack hole consumes too much mana..."<<"\033[1;31m"<<"\n Mana decreased by -3"<< "\033[0m"<<"\n_____________________\n";
                  decrease_mana(3);
                  waitForEnter();
                  cout<<"Now its time for a minigame!";
                  waitForEnter();
                 if(MG2())
                  {
                    cout<<"Congrats on clearing the minigame!"<<"\033[1;31m"<<"\n PLayer mana +2\n Player HP +2"<< "\033[0m";
                  }
                  else
                  {
                    cout<<"\nConsider retaking first grade......"<<"\033[1;31m"<<"\nPlayer HP -1"<< "\033[0m";
                  }
                  waitForEnter();
                  cout<<"\n________________________\n"<<"After spending months training you abilities , you feel like you have become more powerful than before...";
                  cout<<"\nOne da you are wandering the woods when you come across a necromencer....YOu instantly recognize him \n "
                  <<"He's Asmodeus...The demon king's right hand man \n And a ....Necromancer....";
                  waitForEnter();
                  cout<<"\n________________________\n"<<"You think you are powerfull enough to kill him."
                      <<"\nWhat do you wanna do?"<<"\n1 . Fight him?"<<"\n2 . Totally run away cuz you are a scaredy cat.\n";
                      int c10;
                      cin>>c10;
                     cout<<"\n________________________\n";
                      switch(c10)
                      {
                       case 1:
                       {  cout<<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                         waitForEnter();
                         cout<<"The skeletons start tattacking you..bounding you from your limbs..."<<"\033[1;31m"<<"\nPlayer Hp -10"<< "\033[0m" <<"\n What do you do?"
                         <<"\n1 . Cast fire magic?"<<"\n2. Cast black hole and fire magic?"<<"\n3 . Flood them with water?\n";
                         int c11;
                         cin>>c11;
                         if(c11==1 ) {
                           cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\nPlayer Mana -5\n"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                           <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... ";
                           waitForEnter();
                           cout<<"\nAnother skeleton appears out of nowhere"
                           <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\nPlayer Hp =0\n"<< "\033[0m" 
                           <<"You have died..........";
                           set_hp(0);
                         }
                         else if(c11==2)
                         {
                          cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\n Player Mana -2"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                           <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... ";
                           waitForEnter();
                           cout<<"\n You know they will keep comming unless you kill the caster"
                           <<"\nAdvancing towards Asmodeus a skeleton slashes your side "<<"\033[1;31m"<<"\n Player HP -2\n"<< "\033[0m";
                           decrease_mana(2);
                           decrease_hp(2);
                           waitForEnter();
                           cout<<"Asmodeus is finally within the range of black hole... \nYou cast the black hole magic.... "<<"\033[1;31m"<<"\n Player Mana -3\n"<< "\033[0m"
                           <<"Asmodeus gets sucked into the black hole.......the skeletons turning into dust"<<"\nCongrats on killing Asmodues "<<"\033[1;31m"<<"\nPlayer Mana +5\n Player HP +3"<< "\033[0m";
                           increase_mana(3);
                           increase_hp(2);
                           waitForEnter();
                           cout<<"Now its time for a minigame!!";
                           if(MG3())
                           {
                            cout<<"You have been awarded +4 mana and +2 HP"<<"\033[1;31m"<<"\n Player Mana +4\n Player HP +2"<< "\033[0m";
                            increase_mana(4);
                           increase_hp(2);
                           }
                           else
                           {
                            cout<<"You really need to work those brains....couldnt even solve this....concerning"<<"\033[1;31m"<<"\n Player HP -2"<< "\033[0m"<<"(for lacking common sense)";
                             decrease_hp(2);
                           }
                           waitForEnter();
                           Boss b1{12,4};
                           cout<<"To save your kingdom from the Demon king lucifer........you go to his castle.....its eeirly quiet in here..you feel chills running down your spine";
                           cout<<"\nYou make your way into a huge throne room......Lucifer is sitting on the throne\nYou challenge him to a fight....";
waitForEnter();
cout<<"HAHAHHA a puny human like you trying to fight me he says.....you dont stand a chance \nYour kingdom will never be free from my cluthess"
<<"\nAlthough i will be generous to you if you decide to run away now";
cout<<"\nWhat do you do?"<<"\n1 . Fight him?"<<"\n2 . Run away?\n";
int c14;
cin>>c14;
if(c14==2)
{
  cout<<"__________________________________"<<"\n\nYou turn like a scardey cat and run away \nJust when you reach the doors of the throne room"
  <<"\nLucifer's shadows cluth your neck ...strangling you \nHe turns you face towards him n says 'I only said i will let you run away not spare your life'"
  <<"\033[1;31m"<<"\n Player HP -5\n\n Player HP -5\\n PLayer HP =0"<< "\033[0m";
  set_hp(0);
}
if(c14==1)
{
  set_Mana(15);
  set_hp(13);
  cout<<"\n__________________________________"<<"\nPLayer stats : \n"<<"\033[1;31m"<<"\n HP : "<<get_chp()<<"\n Mana : "<<get_mana()<< "\033[0m";
  cout<<"\nLucifer's stats : \n"<<"\033[1;31m"<<" HP : "<<b1.get_bhp()<<"\n Damage : "<<b1.get_bdamage()<<"\033[0m";
  waitForEnter();
 cout<<"\n__________________________________\n"<<"You pull out a dagger from your bag and throw it towards lucifer\n"<<"He draws forth his shadows in swift motion and "
     <<"with master level precision throws the dagger off its trajectory in mid air \nWhile some shadows come rushing towards you"<<"\nWhat do you choose?"
     <<"\n1 . Summon wind magic?"<<"\n2 . Summon fire magic?\n";
   int c15;
   cin>>c15;
   if(c15==1)
   {
    cout<<"\nYou summon a powerfull wind that knocks back lucifer for a but buying you some time";
    cout<<"\033[1;31m"<<"\n Lucifer HP -1\n\n Player mana -2"<<"\033[0m";
    decrease_mana(2);
   }
   else if(c15==2)
   {
    cout<<"\nyou summon a powerful barrel of fire aimed towards lucifer ....\n He summons a wall of shadows that is able to absorb almost all the fire but he is still hit by"
    <<" some of it"<<"\033[1;31m"<<"\n Lucifer HP -1\n\n Player mana -2"<<"\033[0m";
    decrease_mana(2);
   }
  waitForEnter();
  cout<<"\nAngry...Lucifer unleashes a roar that shakes the whole throne room and unleashes a storm of energy";
  cout<<"\nDo you summon blackhole?"<<"\n1 . Yes"<<"\n2 . No\n";
  int c16;
  cin>>c16;
 if(c16==1)
 {
  cout<<"\n\nWith swift motion you summon a blackhole that absorbs the onslaught of energy"<<"\033[1;31m"<<"\n Player mana -4\n"<<"\033[0m";
  decrease_mana(4);
 }
 else if(c16==2)
 {
  cout<<"\n\nYou absorb the blunt of force of the storm that hits you in the chest"<<"\033[1;31m"<<"\n Player HP -4\n"<<"\033[0m";
  decrease_hp(4);
 }
 waitForEnter();
cout<<"\nDrawing upon the last reserves of your mana.....you combine your fire and blackhole magic ....creating a void of searing fire energy and direc it towards lucifer"
<<"\033[1;31m"<<"\n Player mana -7"<<"\033[0m";
cout<<"\nWith a cry , He is defeated and vanishes into the void.....";
waitForEnter();
cout<<"\nThe player was hailed as a hero across all the lands for saving the kingdom from the demon king and his minions and awarded generously";
cout<<"\n\nThereafter, the people of the kingdom of Avalon lived happily ever after.";
}

                         }
                         else if(c11==3) {
                             cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                             <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                             <<"\nThe skeletons start tearing you limb by limb"<<"\033[1;31m"<<"\n Player HP -10"<<"\n Player Hp -5"<< "\033[0m"
                             <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                             set_hp(0);
                         }break; }
                       
                       case 2:
                       { cout<<"\ntsk..tskk..tskkk ....I did not expect that of the great player ..."<<"\nyou start running...but with just a wave of his hand"
                         <<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                         waitForEnter();
                         cout<<"The skeletons start tearing you limb from limp..."<<"\033[1;31m"<<"\nPlayer Hp -10"<< "\033[0m" <<"\n What do you do?"
                         <<"/n1 . Cast fire magic?"<<"\n2 . Flood them with water?";
                         int c13;
                         cin>>c13;
                         if(c13==1 ) {
                           cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\n Player Mana -5"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                           <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... "<<"\nAnother skeleton appears out of nowhere"
                           <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\n Player Hp =0"<< "\033[0m" 
                           <<"You have died..........";
                           set_hp(0);
                         }
                         else if(c13==2) {
                             cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                             <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                             <<"\nThe skeletons start tearing you limb by limb\n\n"<<"\033[1;31m"<<"\n Player HP -10"<<"\n\n Player Hp -5"<< "\033[0m"
                             <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                             set_hp(0);
                         }
                         else
                         { cout<<"enter only 1 or 2 in this choice"; }
                         break;}
                      }
                }
                  
                   else if(c5==2)
                   {
                    cout<<"\nToo bad you lost a good opportunity...its gone now...better luck next time"
                    " The bottle falls from your hand and breaks....No time to think now.....you start running again n after what seems like a long time"
                    <<" find your way out of the cave ....you take a breath of relief ....thinking you are safe now";
                    cout<<"\nThe bottle falls from your hand and breaks...spilling the liquid on the cave's floor...You have no time to waste , you start thinking "
<<" You get up n start running away...\nAfter a series of labriynths you finally find a way out of there...thinking you are finally safe";
waitForEnter();
cout<<"Now its time for a minigame";
              waitForEnter();
              if(MG2())
              {
                
                cout<<"\n________________________\n"<<"Congratulations on clearing the minigame!\nYou have been awarded +5 HP";
                increase_hp(5);}
                else
                {
                  cout<<"you have failed to clear the mini game"<<"\033[1;31m"<<"\nPlayer Hp -5"<< "\033[0m";
                  decrease_hp(5);
                }
                waitForEnter();
                cout<<"\n________________________\n"<<"As you exit the cave you come across 2 demonic dogs"<<"\nThey are blocking your path so you need to kill them"
                <<"\nHow do you kill them?"<<"\nBurn both the dogs?"<<"\nBurn one and run away?\n";
                int c26;
                cin>>c26;
                if(c26==1)
                {
                  cout<<"\n________________________\n"<<"You cast a fireball and kill one demonic dog...Then you cast another fireball and killing  the other one";
                  waitForEnter();
                 cout <<"You wasted too much mana on these two\n________________________\n"<<"\033[1;31m"<< "Mana stats -5"<< "\033[0m"<<"\n________________________\n";
                  decrease_mana(5);
                 // waitForEnter();
                }
                if(c26==2)
                {
                  cout<<"\n________________________\n"<<"You cast a fireball and kill one demonic dog"<<"\n________________________\n"<<"\033[1;31m"
                  <<" Mana stats -2\n Enemy Mana = 0"<< "\033[0m"<<"\n________________________\n"<<"While the other is distracted you take this chance to run away";
                  decrease_mana(2);
                  waitForEnter();
                  cout<<"While running away the other demonic dog scratches you abit"<<"\n________________________\n"<<"\033[1;31m"<<" Hp -2"<< "\033[0m"
                  <<"\n________________________\n";
                  decrease_hp(2);
                  //waitForEnter();
                }
                waitForEnter();
                cout<<"\nYou are very tired do you want to rest now?"
                    <<"\n1 . Rest?"<<"\n2 . Walk?";
               int c27;
               cin>>c27;
               if( c27 == 1)
               {
                cout<<"\n________________________\n"<<"After resting for a bit you gained HP"<<"\033[1;31m"<<"Player HP +1"<< "\033[0m"<<"\n________________________\n";
                increase_hp(1);
               }
               if(c27==2)
               {
                cout<<"\n________________________\n"<<"You decided to walk despite being tired"<<"\033[1;31m"<<"\nPlayer HP -1"<< "\033[0m"<<"\n________________________\n";
                decrease_hp(1);
               }
               waitForEnter();
               cout<<"\n________________________\n"<<"After spending months training you abilities , you feel like you have become more powerful than before...";
               cout<<"\nOne da you are wandering the woods when you come across a necromencer....YOu instantly recognize him \n "
               <<"He's Asmodeus...The demon king's right hand man \n And a ....Necromancer....";
               waitForEnter();
               cout<<"\n________________________\n"<<"You think you are powerfull enough to kill him."
                   <<"\nWhat do you wanna do?"<<"\n1 . Fight him?"<<"\n2 . Injure him then run away?"<<"\n3 . Totally run away cuz you are a scaredy cat.";
                   int c28;
                   cin>>c28;
                  cout<<"\n________________________\n";
                   switch(c28)
                   {
                    case 1:
                    {  cout<<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                      waitForEnter();
                      cout<<"The skeletons start tearing you limb from limp..."<<"\033[1;31m"<<"\nPlayer Hp -10"<< "\033[0m" <<"\n What do you do?"
                      <<"/n1 . Cast fire magic?"<<"\n2 . Flood them with water?";
                      int c29;
                      cin>>c29;
                      if(c29==1 ) {
                        cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                        <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... "<<"\nAnother skeleton appears out of nowhere"
                        <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\nPlayer Hp =0"<< "\033[0m" 
                        <<"You have died..........";
                        set_hp(0);
                      }
                      else if(c29==2) {
                          cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                          <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                          <<"\nThe skeletons start tearing you limb by limb\n\n"<<"\033[1;31m"<<"\n Player HP -10"<<"\n Player Hp -5"<< "\033[0m"
                          <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                          set_hp(0);
                      } break;}
                    case 2:
                    { cout<<"\ntsk..tskk..tskkk ....I did not expect that of the great player ..."<<"\nBefore you even have time to cast a spell..."
                      <<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                      waitForEnter();
                      cout<<"The skeletons start tearing you limb from limp..."<<"\033[1;31m"<<"\n Player Hp -10"<< "\033[0m" <<"\n What do you do?"
                      <<"\n1 . Cast fire magic?"<<"\n2 . Flood them with water?";
                      int c39;
                      cin>>c39;
                      if(c39==1 ) {
                        cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\n Player Mana -5"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                        <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... "<<"\nAnother skeleton appears out of nowhere"
                        <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\n Player Hp =0\n"<< "\033[0m" 
                        <<"You have died..........";
                        set_hp(0);
                      }
                      else if(c39==2) {
                          cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                          <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                          <<"\nThe skeletons start tearing you limb by limb\n\n"<<"\033[1;31m"<<"\nPlayer HP -10"<<"\n\nPlayer Hp -5"<< "\033[0m"
                          <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                          set_hp(0);
                     }  break;}
                    case 3:
                    { cout<<"\ntsk..tskk..tskkk ....I did not expect that of the great player ..."<<"\nyou start running...but with just a wave of his hand"
                      <<" Asmodues summons skeletons from the ground.....\nThe skeletons bound you from your feet pulling you...attacking you";
                      waitForEnter();
                      cout<<"The skeletons start tearing you limb from limp..."<<"\033[1;31m"<<"\nPlayer Hp -10"<< "\033[0m" <<"\n What do you do?"
                      <<"/n1 . Cast fire magic?"<<"\n2 . Flood them with water?";
                      int c49;
                      cin>>c49;
                      if(c49==1 ) {
                        cout<<"\n\nYou cast a fire ball..."<<"\033[1;31m"<<"\n Player Mana -5\n"<< "\033[0m"<<"\nYou burn a skeleton trying to bite of your leg "
                        <<"....Two halfway comming out of the ground die too but theres no end to them they just keep comming... "<<"\nAnother skeleton appears out of nowhere"
                        <<" With an axe n slashes you skull from behind"<<"\n___________________________\n"<<"\033[1;31m"<<"\n Player Hp =0"<< "\033[0m" 
                        <<"You have died..........";
                        set_hp(0);
                      }
                      else if(c49==2) {
                          cout<<"\n\nYou try your luck with a flooding water spell ...you try your best to cast it perfectly... it workss\n\n"<<"\033[1;31m"<<"\nPlayer Mana -5"<< "\033[0m"
                          <<"\n\nA wave of water appears out of nowhere takes a few skeletons with it but the rest??...They just got abit wet... -_-"
                          <<"\nThe skeletons start tearing you limb by limb\n\n"<<"\033[1;31m"<<"\n Player HP -10"<<"\n\n Player Hp -5"<< "\033[0m"
                          <<"\nYou have died.....who does thatt??summoning water to kill skeleton you died because of your dumb brain......";
                          set_hp(0);
                      }
                      else
                      { cout<<"enter only 1 or 2 in this choice"; }
                     break; }
                   }
                   }

                } 

                else { cout<<"Enter  valid choice"; } 
              }
               else if ( c2 == 2 ) 
              {
               cout<<"\nYou start running away ...but due to his size the troll catches up to you in no time....and kills you";
               return 0;
             } 
             else { cout<<"Enter  valid choice"; }  
          }
          else{
              cout<< "You lost dumb dumb" <<endl;
          } 
          
             break;
        }
            case 2:
              cout<<"\nThe goblin did not believe in your act and killed you";
              break;
            case 3:
              cout<<"\nThe goblin caught you and killed you";
              break;
   
        }
    }
};
int main()
{
   

    string name;
    cout<<"Player please enter you name :"<<endl;
    cin>>name;
   Wizard w1(name,16,15);

    cout<<"HELLOOOO "<< w1.get_name() <<"!! The demon king has taken over the kingdom of Avalon .The world has become infested with his minions and demon folk who raom everywhere wreaking havoc and killing everyone."
        <<endl<<"______________________________"
        <<endl<<"You are an ordinary human on a quest to save your kingdom from these evil forces ......good luck on your journey.\n Sayonara "
        <<endl<<"______________________________";
    w1.play();    
}

