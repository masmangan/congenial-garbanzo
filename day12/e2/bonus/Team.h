#ifndef TEAM_H
#define TEAM_H

#include "SoftwareDeveloper.h"

class Team {
private:
    SoftwareDeveloper manager;
    SoftwareDeveloper coder;
    SoftwareDeveloper tester;

public:
    // Construtor para atribuir papéis na equipe
    Team(); // BONUS
    Team(const SoftwareDeveloper& manager, const SoftwareDeveloper& coder, const SoftwareDeveloper& tester);

    // Método para calcular o índice de desempenho da equipe
    int calculatePerformanceIndex();

    // Método para exibir os membros da equipe e o índice de desempenho
    void displayTeam();
};
#endif // TEAM_H