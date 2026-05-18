#include <iostream>
#include <string>
using namespace std;

class Hero {                                            
    protected:
        string HeroName, HeroType;
        int HealthP, ExpPts;
        double PwrLvl;

    public:
    Hero(string n, string t, int hp, double pl, int ep) {
        HeroName = n;
        HeroType = t;
        HealthP = hp;
        PwrLvl = pl;
        ExpPts = ep;
    }

    virtual double Attack() = 0; //virtual attack function to be overridden by child classes
    virtual double Defend() = 0; //virtual defend function to be overridden by child classes

    void WelcomeMessage() {
        cout<<"\n----- Welcome to Assassin's Creed Classes! ----- \n";
    }

    void DisplayInfo() {
        cout<<"\nHero Name: "<<HeroName<<endl;
        cout<<"Hero Type: "<<HeroType<<endl;
        cout<<"Health Points: "<<HealthP<<endl;
        cout<<"Power Level: "<<PwrLvl<<endl;
        cout<<"Experience Points: "<<ExpPts<<endl;
    }

    string GetHeroName() {
        return HeroName;
    }

};

class Warrior: public Hero {                                      
    private:
        string WeaponName;
        int ArmorStrength;
        double RageLevel;

    public:
      Warrior(string n, int hp, double pl, int ep, string w, int a, double r): Hero (n, "Warrior", hp, pl, ep) {
        WeaponName = w;
        ArmorStrength = a;
        RageLevel = r;
    
    }

    double Attack() {
       return PwrLvl + RageLevel + ExpPts;
    }
    double Defend() {
       return ArmorStrength + (HealthP / 10.0);
    }

    void DisplayProfile() {
      DisplayInfo();
        cout<<"Weapon Name: "<<WeaponName<<endl;
        cout<<"Armor Strength: "<<ArmorStrength<<endl;
       cout<<"Rage Level: "<<RageLevel<<endl;
    }
};

class Mage: public Hero {                                         
    private:
        string SpellName;
        int ManaPoints;
        double MagicMultiplier;
    
    public:
        Mage(string n, int hp, double pl, int ep, string s, int m, double mm): Hero (n, "Mage", hp, pl, ep) {
            SpellName = s;
            ManaPoints = m;
            MagicMultiplier = mm;
        }

        double Attack() {
            return (PwrLvl * MagicMultiplier) + ManaPoints;
        }
        double Defend() {
            return (ManaPoints / 5.0) + HealthP;
        }

    void DisplayProfile() {
        DisplayInfo();
        cout<<"Spell Name: "<<SpellName<<endl;
        cout<<"Mana Points: "<<ManaPoints<<endl;
        cout<<"Magic Multiplier: "<<MagicMultiplier<<endl;
    }
};

class Archer: public Hero {                                         
    private:
        string BowType;
        int ArrowCount;
        double AccuracyR;
    
    public:
      Archer(string n, int hp, double pl, int ep, string b, int ac, double ar): Hero (n, "Archer", hp, pl, ep) {
        BowType = b;
        ArrowCount = ac;
        AccuracyR = ar;
    }

    double Attack () {
        return PwrLvl + (AccuracyR * ArrowCount);
    }
    double Defend() {
        return (AccuracyR * 10.0) + (HealthP / 5.0);
    }

    void DisplayProfile() {
        DisplayInfo();
        cout<<"Bow Type: "<<BowType<<endl;
        cout<<"Number of Arrows: "<<ArrowCount<<endl;
        cout<<"Accuracy Rate: "<<AccuracyR<<endl;
    }
};

int main () {                                                   
    Warrior w("Eivor", 150, 75.5, 200, "Axe", 50, 18.5);
    Mage m("Evie Frye", 100, 60.0, 150, "Shadow Strike", 80, 2.5);
    Archer a("Kassandra", 120, 70.0, 180, "Hunter Bow", 30, 0.9);

    w.WelcomeMessage();
    cout<<endl;

    cout<<"Warrior Profile:"<<endl;
    w.DisplayProfile();
    double wA = w.Attack();
    double wD = w.Defend();
    cout<<"\nWarrior Attack Power: "<<wA<<endl;
    cout<<"Warrior Defense Power: "<<wD<<endl;
    cout<<"----------------------------\n";

    cout<<"\nMage Profile:"<<endl;
    m.DisplayProfile();
    double mA = m.Attack();
    double mD = m.Defend();
    cout<<"\nMage Attack Power: "<<mA<<endl;
    cout<<"Mage Defense Power: "<<mD<<endl;
    cout<<"----------------------------\n";

    cout<<"\nArcher Profile:"<<endl;
    a.DisplayProfile();
    double aA = a.Attack();
    double aD = a.Defend();
    cout<<"\nArcher Attack Power: "<<aA<<endl;
    cout<<"Archer Defense Power: "<<aD<<endl;
    cout<<"----------------------------\n";

    cout<<"\nBattle Summary: \n\n";
    cout<<w.GetHeroName()<<" has an attack power of "<<wA<<" and a defense power of "<<wD<<"."<<endl;
    cout<<m.GetHeroName()<<" has an attack power of "<<mA<<" and a defense power of "<<mD<<"."<<endl;
    cout<<a.GetHeroName()<<" has an attack power of "<<aA<<" and a defense power of "<<aD<<"."<<endl;
    cout<<endl;

    string bestHero;
    double highestAttack;
    if (wA > mA && wA > aA) {
        bestHero = w.GetHeroName();
        highestAttack = wA;
    } else if (mA > wA && mA > aA) {
        bestHero = m.GetHeroName();
        highestAttack = mA;
    } else {
        bestHero = a.GetHeroName();
        highestAttack = aA;
    }

    cout<<"The hero with the highest attack power is "<<bestHero<<" with an attack power of "<<highestAttack<<"."<<endl;
    cout<<"\nThank you for playing Assassin's Creed Classes!\n\n";
    cout<<"---------------------------------------------\n\n";

    return 0;
}

// Muhammad Saaim - BCS A
