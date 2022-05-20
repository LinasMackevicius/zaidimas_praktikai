#include <iostream>
#include<string.h>
#include "zaidimas.h"


void train(PlayerAvatar& character)
{
    std::cout << '\n';
    std::cout << "1 - Chop the tree " << '\n';
    std::cout << "2 - fish " << '\n';
    std::cout << "3 - Magic attack " << '\n';
    std::cout << "4 - melee wepon attack " << '\n';
    std::cout << "5 - mine " << '\n';
    std::cout << "6 - make fire" << '\n';
    std::cout << '\n';

    int option;
    std::cin >> option;
    std::cout << '\n';

    switch (option)
    {
        case 1:
            character.chopTheTree(character.woodCutting);
        break;


        case 2:
            character.fish(character.fishing);      
        break;


        case 3:
            character.attackWithMagic(character.magic);
        break;

        case 4:
            character.attackWithMelee(character.melee);
        break;

        case 5:
            character.mineOre(character.mining);
        break;

        case 6:
            character.makeFire(character.fireMaking);
        break;

    }

}

 void displaySkillPoints(PlayerAvatar& character)
{
    std::cout << '\n';
    std::cout << "Woodcutting xp points: " << character.woodCutting << '\n';
    std::cout << "Fishing xp points: " << character.fishing << '\n';
    std::cout << "Magic ability xp points: " << character.magic << '\n';
    std::cout << "Attack xp points: " << character.melee << '\n';
    std::cout << "Mining xp points: " << character.mining << '\n';
    std::cout << "Fire Making xp points: " << character.fireMaking << '\n';
    std::cout << '\n';

}

void performBasicAction(PlayerAvatar& character)
{
    std::cout << "1 - Walk to a selected place " << '\n';
    std::cout << "2 - teleport " << '\n';
    std::cout << "3 - Enroll in a quest " << '\n';
    std::cout << "4 - sprint " << '\n';
    int option;
    std::cin >> option;
    switch (option)
    {
        case 1:
            character.walkingToSelectedPlace();
        break;

        case 2:
            std::cout << "Write a name of the locstion to where you want to teleport" << '\n';
            getline(std::cin >> std::ws, character.location);
            character.teleport(character.location);
        break;

        case 3:
            character.DoQuest(character.experience);
        break;

        case 4:
            character.sprint(character.stamina);
        break;

    }

}

void printCharacterInfo(PlayerAvatar character)
{
    std::cout << '\n';
    std::cout << "Name: " << character.name << '\n';
    std::cout << "Location: " << character.location << '\n';
    std::cout << "character is member: " << character.isMember << '\n';
    std::cout << "character is wearing a cape: " << character.isWearingCape << '\n';
    std::cout << "Total experience points: " << character.summingExperience(character.experience)<< '\n';
    std::cout << "Stamina: " << character.stamina <<'\n';
    std::cout << '\n';

}

void menu(PlayerAvatar& character)
{
    bool exit = false;
    while (!exit)
    {
    std::cout << '\n';
    std::cout << "1 - train a skill" << '\n';  
    std::cout << "2 - view skillpoints of each skill" << '\n';  
    std::cout << "3 - perform basic character actions" << '\n';
    std::cout << "4 - print character information" << '\n';
    std::cout << "5 - exit menu" << '\n';
    std::cout << '\n';

    std::cout << "choose a number: " << '\n';
    std::cout << '\n';



    int option;
    std::cin >> option;
        switch (option)
        {
            case 1:
                train(character);
            break;

            case 2:
                displaySkillPoints(character);
            break;

            case 3:
                performBasicAction(character);
            break;

            case 4:
                printCharacterInfo(character);
            break;

            case 5:
                exit=true;
            break;


        }
    }     

}


PlayerAvatar createBasicCharacterfeatures(std::string name, bool isWearingCape, bool member, PlayerAvatar& object)
{

    object.name = name;
    object.isMember = member;
    object.isWearingCape=isWearingCape;
    return object;
}



int main()
{
    PlayerAvatar character;
    
       //name
    std::string cName;
    std::cout << "Write the name of your player" <<'\n';
    std::cin >> cName;
    
    //cape
    std::cout << std::boolalpha;
    std::cin >> std::boolalpha;
    bool cape;
    std::cout << "does your player wearing a cape ?(true/false)" <<'\n';
    
    std::cin >> cape;
    
    //member
    bool member;
    std::cout << "is your player a has a member status? (true/false)" <<'\n';
    std::cin >> member;


    createBasicCharacterfeatures(cName, cape, member, character);
    
    menu(character);


    return 0 ;
        
}