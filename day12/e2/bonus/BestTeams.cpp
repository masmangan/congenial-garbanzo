#include "Team.h"
#include <iostream>

// Maximum number of possible best teams (in this case 6 permutations)
const int MAX_TEAMS = 6;

int main() {
    // Creating developers
    SoftwareDeveloper erichGamma("Erich Gamma", 10, 6, 4);
    SoftwareDeveloper kentBeck("Kent Beck", 7, 8, 10);
    SoftwareDeveloper eliyahuGoldrat("Eliyahu Goldrat", 2, 10, 1);

    // Store developers in an array
    SoftwareDeveloper developers[] = {erichGamma, kentBeck, eliyahuGoldrat};

    // Array to store the best teams (up to 6)
    Team bestTeams[MAX_TEAMS];
    int bestPerformance = 0;
    int numBestTeams = 0;  // To track how many teams match the best performance

    // Manually generate all 6 permutations
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j == i) continue;  // Skip if it's the same developer
            for (int k = 0; k < 3; ++k) {
                if (k == i || k == j) continue;  // Skip if it's the same developer

                // Create a new team with the current combination of developers
                Team team(developers[i], developers[j], developers[k]);

                // Calculate and display the performance index of the current team
                int performance = team.calculatePerformanceIndex();
                team.displayTeam();
                std::cout << "Performance Index: " << performance << "\n" << std::endl;

                // If this performance is better, reset the array and update the best performance
                if (performance > bestPerformance) {
                    bestPerformance = performance;
                    bestTeams[0] = team;  // Store this as the new best team
                    numBestTeams = 1;     // Reset the count to 1
                }
                // If this performance ties with the best performance, add it to the array
                else if (performance == bestPerformance) {
                    bestTeams[numBestTeams] = team;
                    numBestTeams++;
                }
            }
        }
    }

    // Display all best teams
    std::cout << "Best Team Configurations: " << std::endl;
    for (int i = 0; i < numBestTeams; ++i) {
        bestTeams[i].displayTeam();
        std::cout << "Best Performance Index: " << bestPerformance << std::endl;
    }

    return 0;
}