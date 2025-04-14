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
      
      int increase_hp (int i_hp)
      {
        current_hp = current_hp + i_hp;
      }

      int decrease_hp (int d_hp )
      {
        current_hp = current_hp - d_hp;
      }


      void set_damage ( int d ) { damage = d; }
      int get_damage ()  {return damage ; }

      int increase_damage (int inc_d)  { damage = damage + inc_d; }
      int decrease_damage (int dec_d)  { damage = damage - dec_d; }

     void set_Mana(int mana)  {this->mana=mana;}

    int get_mana() { return mana;}

    int increase_mana (int m) {mana = mana + m ;}
    int decrease_mana (int m) {mana = mana - m ;}
};
