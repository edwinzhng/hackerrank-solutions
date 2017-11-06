def next_move(posr, posc, dimh, dimw, board):
    dr = 0
    dc = 0
    min_dist = 100000
    for i in range(0, dimw):
        for j in range(0, dimh):
            if board[i][j] == 'd':
                dist = abs(posr - i) + abs(posc - j)
                if(dist < min_dist):
                    dr = i
                    dc = j
                    min_dist = dist
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
    dim = [int(i) for i in raw_input().strip().split()]
    board = [[j for j in raw_input().strip()] for i in range(dim[0])]
    next_move(pos[0], pos[1], dim[0], dim[1], board)
