from typing import List


def find_each_round_winner(team1: List[int], team2: List[int]):
    winner_list: List[str] = []

    for p1, p2 in zip(team1, team2):
        if p1 > p2: winner_list.append("Team1")
        elif p1 < p2: winner_list.append("Team2")
        else: winner_list.append("Equal")
    
    return winner_list

def count_winners(winner_list: List[str]):
    winner_count = {
        "Team1": 0,
        "Team2": 0,
        "Equal": 0,
    }

    for winner in winner_list:
        winner_count[winner] += 1
    
    return winner_count

def main():
    no_of_rounds = int(input("Enter the no of rounds:\n"))

    if no_of_rounds <= 0:
        print("Invalid rounds")
        return
    
    team1, team2 = [], []

    print("Enter the team1 points:")
    for _ in range(no_of_rounds):
        team1.append(int(input()))

    print("Enter the team2 points:")
    for _ in range(no_of_rounds):
        team2.append(int(input()))
    
    winner_list = find_each_round_winner(team1, team2)
    winner_count = count_winners(winner_list)

    print(f"Team1: {winner_count['Team1']}")
    print(f"Team2: {winner_count['Team2']}")
    print(f"Equal: {winner_count['Equal']}")

if __name__ == "__main__":
    main()
