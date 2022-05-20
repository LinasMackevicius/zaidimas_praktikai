#include <iostream>

// classes to play runescape.
// Player class inherits Levels of skills and ability to train a skill. 
// when calling a function chopTheTree woodcutting skillpoints are increased.  


class SkillPoints
{
    public:
    int woodCutting = 1;
    int fishing = 1;
    int magic = 1;
    int melee = 1;
    int mining = 1;
    int fireMaking = 1;

};

class TrainSkill
{
    public:
    int chopTheTree(int& woodCuttingLevel);
    int fish(int& fishing);
    int attackWithMagic(int& magic);
    int attackWithMelee(int& melee);
    int mineOre (int & mining);
    int makeFire(int & fireMaking);

};


class PlayerAvatar : public SkillPoints, public TrainSkill
{   
    public:
    //atributes

    int stamina = 50;
    int experience=0;
    int level;
    
    std::string location= "Lubridge";
    std::string name;
    bool isMember;
    bool isWearingCape; 

    int summingExperience(int& totalXp);

    //methodsstamina
    void walkingToSelectedPlace();
    void teleport(std::string location);
    int DoQuest(int& xp);
    int sprint(int& stamina);
};


