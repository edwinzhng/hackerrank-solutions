def nextMove(n,r,c,grid):
    p_row = 0
    p_col = 0
    for i in range(0, n):
        for j in range(0, n):
            if grid[i][j] == 'p':
                p_row = i
                p_col = j
                break;
    if p_row > r:
        return("DOWN")
    elif p_row < r:
        return("UP")
    elif p_col > c:
        return("RIGHT")
    elif p_col < c:
        return("LEFT")
    else:
        return("PRINCESS SAVED")


n = input()
r,c = [int(i) for i in raw_input().strip().split()]
grid = []

for i in xrange(0, n):
    grid.append(raw_input())

print nextMove(n,r,c,grid)
