#include "Team.h"
#include <iostream>

// Constructor to assign roles in the team
Team::Team(const SoftwareDeveloper& manager, const SoftwareDeveloper& coder, const SoftwareDeveloper& tester)
    : manager(manager), coder(coder), tester(tester) {}

// Method to calculate the team's performance index
int Team::calculatePerformanceIndex() {
    int performance = 0;

    // The manager's managing skill contributes the most to the team's performance
    performance += manager.managing * 3;

    // The coder's coding skill contributes the most
    performance += coder.coding * 3;

    // The tester's testing skill contributes the most
    performance += tester.testing * 3;

    return performance;
}

// Method to display the team members and performance index
void Team::displayTeam() {
    std::cout << "Project Manager: " << manager.name << std::endl;
    std::cout << "Coder: " << coder.name << std::endl;
    std::cout << "Tester: " << tester.name << std::endl;
    std::cout << "Team Performance Index: " << calculatePerformanceIndex() << std::endl;
}