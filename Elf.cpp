#include <iostream>
using namespace std;

void waitForEnter()
{
    cout << "\033[1;33m";
    cout << "\n[Press Enter to continue...]\n";
    cout << "\033[0m";

    cin.get();
}

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

class Stats
{
    private:
    int health;
    int damage;

public:
    Stats(int h, int d) {
        health = h;
        damage = d;
    }

    int getHealth() {
        return health;
    }

    int getDamage() {
        return damage;
    }

    void getDamage(int multiplier) {
        damage = damage * multiplier;
    }

    void setHealth(int h) {
        health = h;
    }

    void setDamage(int d) {
        damage = d;
    }
};

class elf : public Human, public Stats
{

public:
    elf(int h, int d, string n) : Human(n), Stats(h, d)
    {
    }

    void identity() override
    {
        cout << "I am an Elf!" << endl;
    }

    int tripple_arrows()
    {
        getDamage(3);
        return getDamage();
    }
    const int total_health = getHealth();
};
class Enemy
{
public:
    virtual void display() = 0;
};

class Goblin : public Stats, public Enemy
{
public:
    Goblin(int h, int d) : Stats(h, d)
    {
    }

    void display() override
    {
        cout << " \"We Are Goblins!\" " << endl;
    }
};
class Boss : public Stats, public Enemy
{
public:
    Boss(int h, int d) : Stats(h, d)
    {
    }
    void display() override
    {
        cout << "I am the boss." << endl;
    }

    int criticalDamage = 25;
};

bool MG1()
{
    string b1 = "Banana", m1 = "Moneky", r1 = "Rabbit", c1 = "Carrot", p1 = "Pony", a1 = "Apple";
    cout << endl;

    cout << p1 << "   --------------- " << c1 << endl;
    cout << r1 << " --------------- " << b1 << endl;
    cout << m1 << " --------------- " << a1 << endl;
    cout << endl;

    cout << "Match the following pairs" << endl;
    cout << endl;

    cout << "Monkey is going to match with??" << endl;
    cin >> m1;
    cout << endl;

    cout << "Rabbit is going to match with??" << endl;
    cin >> r1;
    cout << endl;

    cout << "Pony is going to match with??" << endl;
    cin >> p1;
    cout << endl;

    if ((m1 == "Banana" || m1 == "banana") && (r1 == "Carrot" || r1 == "carrot") && (p1 == "Apple" || p1 == "apple"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool MG2()
{
    int x, y, z, i1, i2, i3;
    x = 87;
    y = 52;
    z = 102;
    cout << endl;

    cout << "Please find the sum of " << x << " and " << y << endl;
    cin >> i1;
    cout << endl;

    cout << "Please find the sum of " << z << " and " << y << endl;
    cin >> i2;
    cout << endl;

    cout << "Please find the difference of " << z << " and " << x << endl;
    cin >> i3;
    cout << endl;

    if ((i1 == 139) && (i2 == 154) && (i3 == 15))
    {
        cout << "You pass the test!" << endl
             << "You know your maths!" << endl;
        return true;
    }
    else
    {
        cout << "Should have paid attention in the first grade!" << endl;
    }
    return false;
}

void Stage2(int choice, elf &e1) // Stage 2 In Function
{

    cout << "\033[1;32m";
    cout << "STAGE 2" << endl;
    cout << "\033[0m";
    waitForEnter();

    cout << "You move deeper into the forest, feeling stronger than ever." << endl;
    waitForEnter();

    cout << "But suddenly... the ground shakes violently!" << endl;
    waitForEnter();

    cout << "\033[1;31m";
    cout << "The GOBLIN KING appears with his army!" << endl;
    cout << "\033[0m";
    waitForEnter();

    Boss goblinKing(80, 15);

    cout << "\"WHO DARES TO KILL MY GOBLINS?!\"" << endl;
    waitForEnter();

    cout << "Uh oh... It was...uh... not me?" << endl;
    waitForEnter();

    cout << "Press 1 to ATTACK the Goblin King!" << endl;
    cout << "Press 2 to TRY to talk your way out." << endl;
    cin >> choice;
    cin.ignore();

    if (choice == 1)
    {
        cout << "You shoot a barrage of arrows!" << endl;
        waitForEnter();

        goblinKing.setHealth(goblinKing.getHealth() - e1.tripple_arrows());
        cout << "Goblin King's Health: " << goblinKing.getHealth() << endl;
        waitForEnter();

        if (goblinKing.getHealth() <= 0)
        {
            cout << "\033[1;32m";
            cout << "GOBLIN KING DEFEATED!" << endl;
            cout << "\033[0m";
        }
        else
        {
            cout << "Goblin King: \"YOU'LL PAY FOR THAT!\"" << endl;
            waitForEnter();

            e1.setHealth(e1.getHealth() - goblinKing.getDamage());
            cout << "\033[1;31m";
            cout << "Your Health Now: " << e1.getHealth() << endl;
            cout << "\033[0m";

            if (e1.getHealth() <= 0)
            {
                cout << "\nYou died fighting bravely. Play again!" << endl;
                return;
            }
            else
            {
                cout << "You managed to dodge and land a critical blow!" << endl;
                cout << "\033[1;32m";
                cout << "GOBLIN KING DEFEATED!" << endl;
                cout << "\033[0m";
            }
        }
    }
    else if (choice == 2)
    {
        cout << "You try to reason..." << endl;
        waitForEnter();
        cout << "\"Maybe we can be friends?\"" << endl;
        waitForEnter();

        cout << "Goblin King laughs and... SLAPS you with his sword!" << endl;
        e1.setHealth(e1.getHealth() - 20);
        cout << "\033[1;31m";
        cout << "Your Health Now: " << e1.getHealth() << endl;
        cout << "\033[0m";

        if (e1.getHealth() <= 0)
        {
            cout << "\nYou died from Goblin King's slap. Ouch." << endl;
            return;
        }
        else
        {
            cout << "You have no choice but to FIGHT!" << endl;
            waitForEnter();

            cout << "Press 1 To Shoot Your Arrows!" << endl;
            cin >> choice;

            if (choice == 1)
            {
                cout << "You shoot a barrage of arrows!" << endl;
                waitForEnter();

                goblinKing.setHealth(goblinKing.getHealth() - e1.tripple_arrows());
                cout << "Goblin King's Health: " << goblinKing.getHealth() << endl;
                waitForEnter();

                if (goblinKing.getHealth() <= 0)
                {
                    cout << "\033[1;32m";
                    cout << "GOBLIN KING DEFEATED!" << endl;
                    cout << "\033[0m";
                }

                else
                {
                    cout << "Goblin King Is still standing! Weak, but standing" << endl;
                    waitForEnter();

                    cout << "Goblin King Is still standing! Weak, but standing" << endl;
                    waitForEnter();

                    cout << "FINISH HIM" << endl;
                    waitForEnter();

                    cout << "Press 1 To Bring Peace To You Life" << endl;
                    waitForEnter();

                    cin >> choice;

                    if (choice == 1)
                    {

                        cout << "AND HERE COMES THE FINAL SHOT!" << endl;
                        waitForEnter();

                        goblinKing.setHealth(goblinKing.getHealth() - e1.tripple_arrows());
                        cout << "Goblin King's Health: " << goblinKing.getHealth() << endl;
                        waitForEnter();

                        cout << "\033[1;32m";
                        cout << "GOBLIN KING DEFEATED!" << endl;
                        cout << "\033[0m";
                    }
                }
            }
        }
    }
    else
    {
        cout << "Confused, you trip over your own foot and lose health!" << endl;
        e1.setHealth(e1.getHealth() - 15);
        cout << "\033[1;31m";
        cout << "Your Health Now: " << e1.getHealth() << endl;
        cout << "\033[0m";
        if (e1.getHealth() <= 0)
        {
            cout << "\nYou died clumsily. Play again!" << endl;
            return;
        }
    }

    waitForEnter();

    cout << "\nA Locked Door Stands Before You!" << endl;
    waitForEnter();

    cout << "You must complete the MINIGAME!" << endl;
    waitForEnter();

    bool minigameResult = MG2();

    if (minigameResult)
    {
        cout << "\033[1;32m";
        cout << "\nCORRECT! The door opens!" << endl;
        cout << "\033[0m";
    }
    else
    {
        cout << "\033[1;31m";
        cout << "\nWRONG! A trap hits you!" << endl;
        cout << "\033[0m";

        e1.setHealth(e1.getHealth() - 10);
        cout << "Your Health Now: " << e1.getHealth() << endl;

        if (e1.getHealth() <= 0)
        {
            cout << "\nYou died from the trap!" << endl;
            return;
        }
    }
    waitForEnter();

    cout << "\nYou step into the final chamber..." << endl;
    waitForEnter();

    cout << "A GIANT ORC charges at you with a ROAR!" << endl;
    waitForEnter();

    Boss orcBoss(90, 20);

    cout << "Press 1 to Attack, Press 2 to Hide and Ambush" << endl;
    cin >> choice;
    cin.ignore();

    if (choice == 1)
    {
        cout << "You fire your tripple arrows directly at him!" << endl;
        orcBoss.setHealth(orcBoss.getHealth() - e1.tripple_arrows());
        waitForEnter();

        cout << "Orc Boss's Health: " << orcBoss.getHealth() << endl;
        waitForEnter();

        if (orcBoss.getHealth() <= 0)
        {
            cout << "\033[1;32m";
            cout << "\nORC BOSS DEFEATED!" << endl;
            cout << "\033[0m";
            waitForEnter();
        }
        else
        {
            cout << "\nYou hurt him but he's still fighting! Fight smart!" << endl;
            waitForEnter();

            cout << "The Orc Boss swings his mighty axe at you!" << endl;
            e1.setHealth(e1.getHealth() - orcBoss.getDamage());
            cout << "\033[1;31m";
            cout << "Your Health Now: " << e1.getHealth() << endl;
            cout << "\033[0m";

            if (e1.getHealth() <= 0)
            {
                cout << "\nThe Orc Boss has defeated you!" << endl;
                return;
            }
        }
    }
    else if (choice == 2)
    {
        cout << "You hide behind a rock and wait..." << endl;
        waitForEnter();

        cout << "The orc runs past you blindly!" << endl;
        waitForEnter();

        cout << "You attack him from behind!" << endl;
        orcBoss.setHealth(0);
        cout << "\033[1;32m";
        cout << "\nORC BOSS DEFEATED!" << endl;
        cout << "\033[0m";
        waitForEnter();
    }
    else
    {
        cout << "You froze like a statue!" << endl;
        waitForEnter();
        cout << "The orc smashes you!" << endl;
        e1.setHealth(0);
        cout << "\033[1;31m";
        cout << "\nYOU DIED!" << endl;
        cout << "\033[0m";
        return;
    }

    cout << "\n\033[1;32m";
    cout << "-- STAGE 2 CLEARED! --" << endl;
    cout << "\033[0m";
    waitForEnter();

    cout << "\n\033[1;35m";
    cout << "-- CONGRATULATIONS! YOU HAVE COMPLETED THE GAME! --" << endl;
    cout << "\033[0m";
    waitForEnter();
}

int main()
{
    int choice;

    cout << endl;
    cout << "--In The Magical Forest Of Mirkwood--" << endl;
    waitForEnter();

    cout << "You Gained Consciousness As An ELF!" << endl;
    waitForEnter();

    cout << "OH NO! You Are Stuck Under A Tree Branch" << endl;
    waitForEnter();

    cout << "\nPress 1 and Enter to Try and Get Out of The Situation" << endl;
    cout << "Press 2 and Enter to Call For Help" << endl;
    cout << "Press 3 and Enter to Give Up on Your Life (Dumbest Choice)" << endl;

    cin >> choice;

    // Flush remaining newline from input buffer
    cin.ignore();

    if (choice == 1)
    { // CONTINUE HERE

        cout << "\nYou Aren't a TINY ELF, You Picked Up The Branch. YOU ARE SAFE " << endl;
        waitForEnter();

        cout << "Look OUT!" << endl;
        waitForEnter();

        cout << "Goblins Are Headed Our WAY!" << endl;
        waitForEnter();

        int goblinsRemaining = 5;

        cout << "They Even Have Daggers(A knife like weapon)!" << endl;
        waitForEnter();

        Goblin g1(14, 2), g2(14, 2), g3(14, 2), g4(14, 2), g5(14, 2);

        g1.display();

        waitForEnter();

        cout << "You Have Arrows! Try To Kill Them" << endl;
        waitForEnter();

        elf e1(35, 15, "Elf");

        cout << "Your Health Is 35. Each Arrow With a Damage of 15" << endl;
        waitForEnter();

        cout << "Press 1 To Shoot And Kill A Goblin" << endl;
        cout << "Press 2 To Do Nothing (Scared Of Goblins? Really?)" << endl;
        cin >> choice;

        // 5 GOBLINS REMAIN
        if (choice == 1 && e1.getHealth() > 0)
        {                                                  // If pressed 1 and elf's health is greater than 0
            g1.setHealth(g1.getHealth() - e1.getDamage()); // Goblin's health minus elf's damage

            if (g1.getHealth() <= 0)
            {                       // If goblin's health is less than or equal to 0, it means goblin is killed
                goblinsRemaining--; // reduce goblin count
                cout << "\nGood Job! One Goblin killed, " << goblinsRemaining << " Remain." << endl;
                waitForEnter();

                // 4 GOBLINS REMAIN
                cout << "Press 1 To Shoot And Kill A Goblin" << endl;
                cin >> choice;

                if (choice == 1 && e1.getHealth() > 0)
                {
                    g1.setHealth(g1.getHealth() - e1.getDamage());

                    if (g1.getHealth() <= 0)
                    {
                        goblinsRemaining--; // reduce goblin count
                        cout << "\nGREAT JOB! Another one Goblin killed, " << goblinsRemaining << " Remain." << endl;
                    }
                }
                // 3 GOBLINS REMAIN
                else
                {
                    cout << "You Pressed The Wrong Button, Restart The game and Correct Your Mistakes" << endl;
                }

                waitForEnter();

                cout << "Press 1 To Shoot And Kill A Goblin" << endl;
                cin >> choice;

                if (choice == 1 && e1.getHealth() > 0)
                {
                    g1.setHealth(g1.getHealth() - e1.getDamage());

                    if (g1.getHealth() <= 0)
                    {
                        goblinsRemaining--; // reduce goblin count
                        cout << "\nGREAT JOB! Another one Goblin killed, " << goblinsRemaining << " Remain." << endl;
                    }
                }
                // 2 GOBLINS REMAIN
                else
                {
                    cout << "You Pressed The Wrong Button, Restart The game and Correct Your Mistakes" << endl;
                }

                waitForEnter();

                cout << "Press 1 To Shoot And Kill A Goblin" << endl;
                cin >> choice;

                if (choice == 1 && e1.getHealth() > 0)
                {
                    g1.setHealth(g1.getHealth() - e1.getDamage());

                    if (g1.getHealth() <= 0)
                    {
                        goblinsRemaining--; // reduce goblin count
                        cout << "\nGREAT JOB! Another one Goblin killed, " << goblinsRemaining << " Remain." << endl;
                    }
                }
                // 1 GOBLIN REMAIN
                else
                {
                    cout << "You Pressed The Wrong Button, Restart The game and Correct Your Mistakes" << endl;
                }

                waitForEnter();

                cout << "Press 1 To Shoot And Kill A Goblin" << endl;
                cin >> choice;

                if (choice == 1 && e1.getHealth() > 0)
                {
                    g1.setHealth(g1.getHealth() - e1.getDamage());

                    if (g1.getHealth() <= 0)
                    {
                        goblinsRemaining--; // reduce goblin count
                        cout << "\nGREAT JOB! Another one Goblin killed, " << goblinsRemaining << " Remain." << endl;
                    }
                }
                // 0 GOBLINS REMAIN
                else
                {
                    cout << "You Pressed The Wrong Button, Restart The game and Correct Your Mistakes" << endl;
                }
                waitForEnter();

                cout << "YAY! GOBLINS DEFEATED!" << endl;
                waitForEnter();

                cout << "The Volcano Caused A TREMBLE QUAKE!" << endl;
                waitForEnter();

                cout << "Let's Head that way" << endl;
                waitForEnter();

                cout << "After Walking for an hour... You reach a cave" << endl;
                waitForEnter();

                cout << "No other way around, you have to cross the cave" << endl;
                waitForEnter();

                cout << "TO CROSS THE CAVE, YOU HAVE TO PLAY A MINIGAME!" << endl;
                waitForEnter();

                cout << endl;
                if (MG1())
                {
                    cout << "You win." << endl;
                }
                else
                {
                    cout << "YOU LOST THE EASIEST MINIGAME!!!!" << endl;
                    waitForEnter();

                    cout << "The Cave Is Still Gonna Open... But you will have to PAY" << endl;
                    waitForEnter();

                    cout << "\033[1;31m";
                    cout << "Minus 2 Health!" << endl;
                    cout << "\033[0m";

                    waitForEnter();

                    e1.setHealth(e1.getHealth() - 2);
                    cout << "\033[1;31m";
                    cout << "Your Health Now is " << e1.getHealth() << endl;
                    cout << "\033[0m";
                }

                waitForEnter();

                cout << "The Cave's Door Magically Opened" << endl;
                waitForEnter();

                cout << "You Follow A Light" << endl;
                waitForEnter();

                cout << "You Encounter A Strange Object Floating Above Illuminating Light" << endl;
                waitForEnter();

                cout << "Attracted To It's Beauty, You Grab It " << endl;
                waitForEnter();

                cout << "\033[1;32m"; // Set color to bright green
                cout << "YOU HAVE UNLOCKED TRIPPLE ARROWS!" << endl;
                cout << "\033[0m"; // Reset color back to default

                waitForEnter();

                cout << "The Tripple Arrow's Damage is 45" << endl;
                waitForEnter();

                cout << "The Cave Is Shaking!!!" << endl;
                waitForEnter();

                cout << "Run For Your Life!" << endl;
                waitForEnter();

                cout << "Sho! That Was Close" << endl;
                waitForEnter();

                cout << "You Managed To Escape The Collapsing Cave!" << endl;
                waitForEnter();

                cout << "Finally A Sigh Of Piece and Quiet" << endl;
                waitForEnter();

                cout << "Just As Pease Begins To Settle..." << endl;
                waitForEnter();

                cout << "A Faint, Rumble Echoes From The East..." << endl;
                waitForEnter();

                cout << "Not Thunder, But Footsteps. Heavy. Clumsy. Slow." << endl;
                waitForEnter();

                cout << "\"WHO ARE YOU?!\"" << endl;
                waitForEnter();

                cout << "\"AND WHAT ARE YOU DOING HERE?\"" << endl;
                waitForEnter();

                cout << "You Heart Skips A Beat, As You Turn Around, A Troll Is Standing" << endl;
                waitForEnter();

                cout << "He Hits You With His Hammer!" << endl;
                waitForEnter();

                Boss t1(60, 10);
                e1.setHealth(e1.getHealth() - t1.getDamage());

                cout << "\033[1;31m";
                cout << "Your Health Now is " << e1.getHealth() << endl;
                cout << "\033[0m";
                waitForEnter();

                cout << "Press 1 To Revive Health By Drinking Leaf Juice!" << endl;
                cout << "Press 2(Or Any Other Key) If You Think You Can Fight With This Health" << endl;
                cin >> choice;

                if (choice == 1)
                {
                    e1.setHealth(e1.total_health);
                    cout << "\033[1;32m";
                    cout << "Your Health Now is " << e1.getHealth() << endl;
                    cout << "\033[0m";

                    cout << "\033[1;32m";
                    cout << "HEALTH RESTORED!" << endl;
                    cout << "\033[0m";
                    waitForEnter();
                }
                else
                {
                    cout << "Try Not Dying" << endl;
                }

                cout << "Let's Teach This Dumb Troll A Valuable Lesson!" << endl;
                waitForEnter();

                while (true)
                {
                    cout << "Press 1 To Attack" << endl;
                    cin >> choice;

                    if (choice == 1)
                    {

                        cout << "Press 1 To Shoot Arrows On His Chest" << endl;
                        cout << "Press 2 To Shoot Arrows On His Legs" << endl;
                        cout << "Press 3 To Shoot Arrows On His Arm" << endl;
                        cout << "Press 4 To Shoot Arrows On His Head" << endl;
                        cin >> choice;

                        if (choice == 1)
                        {
                            cout << "The Troll Shoved The Arrows With His Hammer" << endl;
                            waitForEnter();

                            cout << "He Threw The Hammer On Your Head! Chopping It Of" << endl;
                            waitForEnter();

                            e1.setHealth(e1.getHealth() - 35);
                            if (e1.getHealth() <= 0)
                            {
                                cout << "\033[1;31m";
                                cout << "YOU DIED! Health: " << e1.getHealth() << endl;
                                cout << "\033[0m";
                            }
                        }

                        else if (choice == 2)
                        {
                            cout << "The Troll Kicked Back The Arrows!" << endl;
                            waitForEnter();

                            cout << "And He Squeezed You Under His Feet!" << endl;
                            waitForEnter();

                            e1.setHealth(e1.getHealth() - 35);
                            if (e1.getHealth() <= 0)
                            {
                                cout << "\033[1;31m";
                                cout << "YOU DIED! Health: " << e1.getHealth() << endl;
                                cout << "\033[0m";
                            }
                        }

                        else if (choice == 3)
                        {
                            cout << "The Troll Has Really Big Biceps, Nothing Will Happen To Them" << endl;
                            waitForEnter();

                            cout << "He Grabbed You And Squeezed You Between His Arm " << endl;
                            waitForEnter();

                            e1.setHealth(e1.getHealth() - 35);
                            if (e1.getHealth() <= 0)
                            {
                                cout << "\033[1;31m";
                                cout << "YOU DIED! Health: " << e1.getHealth() << endl;
                                cout << "\033[0m";
                            }
                        }

                        else if (choice == 4)
                        {
                            cout << "The Arrows Went Straight Into His Eyes And Nose!" << endl;

                            t1.setHealth(t1.getHealth() - e1.tripple_arrows());
                            cout << "Troll's Health: " << t1.getHealth() << endl;
                            waitForEnter();

                            cout << "The Troll Is Jumping In PAIN!" << endl;
                            waitForEnter();

                            cout << "The Troll Is Blind For A Couple Of Minutes..." << endl;
                            waitForEnter();

                            cout << "Press 1 To Blow A Final Move Of Arrows!" << endl;
                            cout << "Press 2 To Wait For The Troll To Recover" << endl;
                            cin >> choice;

                            if (choice == 1)
                            {
                                t1.setHealth(t1.getHealth() - e1.tripple_arrows());

                                if (t1.getHealth() <= 0)
                                {

                                    cout << "\033[1;32m";
                                    cout << "TROLL DEFEATED!" << endl;
                                    cout << "\033[0m";
                                    waitForEnter();

                                    cout << "\033[1;32m";
                                    cout << "STAGE 1 CLEARED" << endl;
                                    cout << "\033[0m";
                                    waitForEnter();

                                    // STAGE 2
                                    Stage2(choice, e1);
                                }
                            }
                            else if (choice == 2)
                            {
                                cout << "THE TROLL IS REALLY ANGRY!" << endl;
                                waitForEnter();

                                cout << "HE PLUCKED OUT THE ARROWS FROM HIS EYES!" << endl;
                                waitForEnter();

                                cout << "HURRY DO SOMETHING! BEFORE HE ENDS YOU!" << endl;
                                waitForEnter();

                                cout << "Press 1 To Throw A Stone At Him" << endl;
                                cout << "Press 2 To Run For Your Life" << endl;
                                cout << "Press 3 To Use Tripple Arrows!" << endl;
                                cin >> choice;

                                if (choice == 1)
                                {
                                    cout << "Umm Really?" << endl;
                                    waitForEnter();

                                    cout << "You Made Him Even More Angry" << endl;
                                    waitForEnter();

                                    cout << "Enjoy Being His Medium Well Steak" << endl;
                                    waitForEnter();

                                    cout << "\033[1;31m";
                                    cout << "YOU DIED... PLAY AGAIN" << endl;
                                    cout << "\033[0m";
                                    waitForEnter();
                                }

                                if (choice == 2)
                                {
                                    cout << "You Managed To Escape The Troll..." << endl;
                                    waitForEnter();

                                    cout << "However, Now You Are Being Called A COWARD!" << endl;
                                    waitForEnter();

                                    cout << "\033[1;31m";
                                    cout << "STAGE 1 CLEARED COWARD!" << endl;
                                    cout << "\033[0m";
                                    waitForEnter();

                                    // STAGE 2
                                    Stage2(choice, e1);
                                }

                                else if (choice == 3)
                                {
                                    t1.setHealth(t1.getHealth() - e1.tripple_arrows());

                                    if (t1.getHealth() <= 0)
                                    {

                                        cout << "\033[1;32m";
                                        cout << "TROLL DEFEATED!" << endl;
                                        cout << "\033[0m";
                                        waitForEnter();

                                        cout << "\033[1;32m";
                                        cout << "STAGE 1 CLEARED" << endl;
                                        cout << "\033[0m";
                                        waitForEnter();

                                        // STAGE 2
                                        Stage2(choice, e1);
                                    }
                                }
                            }
                        }

                        break;
                    }
                    else
                    {
                        cout << "YOU HAVE TO PRESS 1!" << endl;
                    }
                }
            }
            else
            {
                cout << "\nBad AIM! The goblin is still alive." << endl;
            }
        }

        else if (choice == 2)
        { // If 2 is selected then....
            while (choice == 2 && e1.getHealth() > 0)
            { // Loop that will run everytime 2 is selected, and elf's health is > 0
                cout << "\nA Goblin Attacked You!" << endl;
                waitForEnter();

                e1.setHealth(e1.getHealth() - g1.getDamage());

                cout << "Your Health Now is " << e1.getHealth() << endl;
                waitForEnter();

                if (e1.getHealth() <= 0)
                {
                    cout << "\nYOU DIED! The Goblins danced around your body." << endl;
                    waitForEnter();
                    break;
                }

                cout << "\nStill don't want to fight?" << endl;
                waitForEnter();

                // Ask again
                cout << "\nPress 1 To Shoot And Kill A Goblin" << endl;
                cout << "Press 2 To Do Nothing (Scared Of Goblins? Really?)" << endl;
                cin >> choice;
                cin.ignore(); // To prevent enter issues
            }

            if (choice == 1 && e1.getHealth() > 0)
            {
                g1.setHealth(g1.getHealth() - e1.getDamage());

                if (g1.getHealth() <= 0)
                {
                    goblinsRemaining--; // reduce goblin count
                    cout << "\nGREAT JOB! One Goblin killed, " << goblinsRemaining << " Remain." << endl;
                }
                else
                {
                    cout << "\nBad AIM! The goblin is still alive." << endl;
                }
            }
        }
    }
    else if (choice == 2)
    {
        cout << "\nOH GREAT! You alerted the predators. Have Fun Being a Yummy Meal!" << endl;
    }
    else if (choice == 3)
    {
        cout << "\nI am not even talking with you after you selected THIS OPTION!" << endl;
    }
    else
    {
        cout << "\nYou should rethink your life decisions, bruh." << endl;
    }

    return 0;
}
