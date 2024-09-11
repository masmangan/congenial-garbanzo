#include "Team.h"
#include <iostream>

// Bonus 2

int main() {
    // Creating developers
    SoftwareDeveloper erichGamma("Erich Gamma", 10, 6, 4);
    SoftwareDeveloper kentBeck("Kent Beck", 7, 8, 10);
    SoftwareDeveloper eliyahuGoldrat("Eliyahu Goldrat", 2, 10, 1);

    // Store developers in an array
    SoftwareDeveloper developers[] = {erichGamma, kentBeck, eliyahuGoldrat};

    // Variable to store the best performance and its corresponding team
    int bestPerformance = 0;
    Team bestTeam;  // Uses the default constructor

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

                // Keep track of the best performing team
                if (performance > bestPerformance) {
                    bestPerformance = performance;
                    bestTeam = Team(developers[i], developers[j], developers[k]);
                }
            }
        }
    }

    // Display the best team
    std::cout << "Best Team Configuration: " << std::endl;
    bestTeam.displayTeam();
    std::cout << "Best Performance Index: " << bestPerformance << std::endl;

    return 0;
}