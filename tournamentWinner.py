def tournamentWinner(competitions, results):
    currentBestTeam = ""
    scores = {currentBestTeam: 0}

    for idx, competition in enumerate(competitions):
        if results[idx] == 0:
            winner = competition[1]
        else:
            winner = competition[0]
        updateScores(scores, winner, 3)

        if scores[winner] > scores[currentBestTeam]:
            currentBestTeam = winner
    return currentBestTeam    

def updateScores(scores, team, point):
    if team not in scores:
        scores[team] = 0
    scores[team] += 3




if __name__ == "__main__":
    competitions = [["Ghana", "Nigeria"], ["Nigeria", "Zimbabwe"], ["Ghana", "Zimbabwe"]]
    results = [1, 0, 1]
    print(tournamentWinner(competitions, results))