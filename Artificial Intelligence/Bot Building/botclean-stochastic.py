def nextMove(posr, posc, board):
    dr = 0
    dc = 0
    for i in range(0, 5):
        for j in range(0, 5):
            if board[i][j] == 'd':
                dr = i
                dc = j
                break
    if dr > posr:
        print("DOWN")
    elif dr < posr:
        print("UP")
    elif dc > posc:
        print("RIGHT")
    elif dc < posc:
        print("LEFT")
    else:
        print("CLEAN")


if __name__ == "__main__":
    pos = [int(i) for i in raw_input().strip().split()]
    board = [[j for j in raw_input().strip()] for i in range(5)]
    nextMove(pos[0], pos[1], board)
