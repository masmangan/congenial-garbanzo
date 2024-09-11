#include "Team.h"

int main() {
    // Criando os desenvolvedores
    SoftwareDeveloper erichGamma("Erich Gamma", 10, 6, 4);
    SoftwareDeveloper kentBeck("Kent Beck", 7, 8, 10);
    SoftwareDeveloper eliyahuGoldrat("Eliyahu Goldrat", 2, 10, 1);

    // Criando uma equipe com papéis específicos
    //Team team1(erichGamma, kentBeck, eliyahuGoldrat);
    Team team1; // BONUS 1
    // Exibir a equipe e seu índice de desempenho
    team1.displayTeam();

    return 0;
}