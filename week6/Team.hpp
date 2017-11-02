/********************************************************************* 
** Author: Zach Colbert
** Date: 1 November 2017
** Description:
*********************************************************************/ 

#include <string>
#include "Player.hpp"

#ifndef TEAM_HPP
#define TEAM_HPP


class Team
{
private:
    // Member variables for each position on the team
    Player pointGuard, shootingGuard, smallForward, powerForward, center;

public:
    // This class doesn't get a default constructor, because there's no "I" in "Team"
    Team::Team(Player point_Guard, Player shooting_Guard, Player small_Forward, Player power_Forward, Player center_In);
    
    // Mutator for pointGuard
    void setPointGuard(Player p);

    // Accessor for pointGuard
    Player getPointGuard();

    // Mutator for shootingGuard
    void setShootingGuard(Player p);

    // Accessor for shootingGuard
    Player getShootingGuard();

    // Mutator for smallForward
    void setSmallForward(Player p);

    // Accessor for smallForward
    Player getSmallForward();

    // Mutator for powerForward
    void setPowerForward(Player p);

    // Accessor for powerForward
    Player getPowerForward();

    // Mutator for center
    void setCenter(Player p);

    // Accessor for center
    Player getCenter();

    // totalPoints gets the points attribute from each of the member variables, and returns the total
    int totalPoints();

};

#endif