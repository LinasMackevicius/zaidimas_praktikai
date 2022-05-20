#include "zaidimas.h"

// Skill functions

int TrainSkill::chopTheTree(int& woodCuttingXp){
    std::cout << "****" << '\n';
    std::cout << "Chop, Chop, Chop, Chop ..." << '\n';
    std::cout << "****" << '\n';
    woodCuttingXp += 1;
    return woodCuttingXp;
    }
    
    
    int TrainSkill::fish(int& fishing)
    {
        std::cout << "****" << '\n';
        std::cout << "I cought a fish !!.  swordfish maybe ..." << "\n";
        std::cout << "****" << '\n';
        fishing += 1 ;
        return fishing;
    }

    int TrainSkill::attackWithMagic(int& magic)
    {
        std::cout << "****" << '\n';
        std::cout << "foof, an earh spell" << '\n';
        std::cout << "****" << '\n';
        magic += 1;
        return magic;
    }

    int TrainSkill::attackWithMelee(int& melee)
    {
        std::cout << "****" << '\n';
        std::cout << "Take my rune long sword you monster !" << '\n';
        std::cout << "****" << '\n';
        melee += 1;
        return melee;
    }

      int TrainSkill::mineOre (int & mining)
    {
        std::cout << "****" << '\n';
        std::cout << "swing cling, I am getting some iron ores boys !" << '\n';
        std::cout << "****" << '\n';
        mining += 1;
        return mining;
    }
    int TrainSkill::makeFire(int & fireMaking)
    {
        std::cout << "****" << '\n';
        std::cout << "It is getting cold out here, better go light up some bonefires and pick sume ashes" << '\n';
        std::cout << "****" << '\n';
        fireMaking += 1;
        return fireMaking;    
    }

//cal functions

int PlayerAvatar::summingExperience(int& totalXp)
{
    totalXp=SkillPoints::fireMaking + SkillPoints::fishing + SkillPoints::magic + 
    SkillPoints::melee + SkillPoints::mining + SkillPoints::woodCutting + PlayerAvatar::experience;
    return totalXp;
}

//characer basic functions

void PlayerAvatar::walkingToSelectedPlace()
{
    std::cout << "****" << '\n';
    std::cout << "walking step step tep pap tep pap ..." <<'\n';
    std::cout << "****" << '\n';

}

void PlayerAvatar::teleport(std::string location)
{
    std::cout << "****" << '\n';
    std::cout << "teleporting to the " << location << "\n";
    std::cout << "****" << '\n';
}

int PlayerAvatar::DoQuest(int& xp)
{
    std::cout << "****" << '\n';
    std::cout << "Starting the quest of Dragon slayer " << '\n';
    std::cout << "****" << '\n';
    
    xp = xp + 10;
    return xp;
}


int PlayerAvatar::sprint(int& stamina)
{
    std::cout << "****" << '\n';
    std::cout << "sprinting step step tep pap tep pap ..." <<'\n';
    std::cout << "****" << '\n';

    stamina= stamina - 2;
    return stamina;
} 


