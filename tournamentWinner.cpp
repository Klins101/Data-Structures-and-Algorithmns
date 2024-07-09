#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void updateScores(map<string, int>& scores, string team, int point) {
    if (scores.find(team) == scores.end()) {
        scores[team] = 0;
    }
    scores[team] += point;
}

string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {
    string currentBestTeam = "";
    map<string, int> scores;
    scores[currentBestTeam] = 0;

    for (int idx = 0; idx < competitions.size(); idx++) {
        string winner = (results[idx] == 0) ? competitions[idx][1] : competitions[idx][0];
        updateScores(scores, winner, 3);

        if (scores[winner] > scores[currentBestTeam]) {
            currentBestTeam = winner;
        }
    }
    return currentBestTeam;
}

int main() {
    // Example usage:
    vector<std::vector<string>> competitions = {{"Ghana", "USA"}, {"UK", "Ghana"}, {"USA", "UK"}};
    vector<int> results = {1, 0, 0};
    cout << tournamentWinner(competitions, results) << endl;
    return 0;
}