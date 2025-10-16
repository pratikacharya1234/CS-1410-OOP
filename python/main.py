import random
number_to_letter = {
    1: 'A', 2: 'B', 3: 'C', 4: 'D', 5: 'E', 6: 'F', 7: 'G', 8: 'H',
    9: 'I', 10: 'J', 11: 'K', 12: 'L', 13: 'M', 14: 'N', 15: 'O', 16: 'P',
    17: 'Q', 18: 'R', 19: 'S', 20: 'T', 21: 'U', 22: 'V', 23: 'W', 24: 'X',
    25: 'Y', 26: 'Z'
}

letter_points = {
    'A': 1, 'B': 3, 'C': 3, 'D': 2, 'E': 1, 'F': 4, 'G': 2, 'H': 4,
    'I': 1, 'J': 8, 'K': 5, 'L': 1, 'M': 3, 'N': 1, 'O': 1, 'P': 3,
    'Q': 10, 'R': 1, 'S': 1, 'T': 1, 'U': 1, 'V': 4, 'W': 4, 'X': 8,
    'Y': 4, 'Z': 10
}

board = []
for row in range(5):
    current_row = []
    for col in range(5):
        random_num = random.randint(1, 26)
        letter = number_to_letter[random_num]
        current_row.append(letter)
    board.append(current_row)

print("Boggle Board")
for row in board:
    print("  ".join(row))

print() 

while True:
    word = input("Enter a word (q to quit): ")
    
    if word.lower() == 'q':
        print("Thanks for playing!")
        break
    
    score = 0
    for letter in word.upper():
        if letter in letter_points:
            score += letter_points[letter]
    
    print(f"Score: {score}")