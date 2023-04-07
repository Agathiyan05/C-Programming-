#include<stdio.h>

// Defining structure for player
struct Player {
    char name[50];
    int runsScored;
};

int main() {
    int numPlayers, totalRuns = 0;
    
    // Accepting number of players in the team
    printf("Enter number of players: ");
    scanf("%d", &numPlayers);
    
    // Creating an array of Player structures
    struct Player players[numPlayers];
    
    // Accepting player details and runs scored from user
    for(int i=0; i<numPlayers; i++) {
        printf("Enter name of player %d: ", i+1);
        scanf("%s", players[i].name);
        
        printf("Enter runs scored by %s: ", players[i].name);
        scanf("%d", &players[i].runsScored);
        
        // Adding runs scored by this player to total runs
        totalRuns += players[i].runsScored;
    }
    
    // Displaying total runs scored by the team
    printf("\nTotal runs scored by the team: %d\n", totalRuns);
    
    return 0;
}
