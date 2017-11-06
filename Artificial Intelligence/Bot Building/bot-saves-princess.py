def displayPathtoPrincess(n,grid):
    b_row = 0
    b_col = 0
    p_row = 0
    p_col = 0
    for i in range(0, n):
        for j in range(0, n):
            if grid[i][j] == 'p':
                p_row = i
                p_col = j
            if grid[i][j] == 'm':
                b_row = i
                b_col = j
    for i in range(0, abs(p_row - b_row)):
        if p_row > b_row:
            print("DOWN")
        else:
            print("UP")
    for i in range(0, abs(p_col - b_col)):
        if p_col > b_col:
            print("RIGHT")
        else:
            print("LEFT")

n = input()

grid = []
for i in xrange(0, n):
    grid.append(raw_input().strip())

displayPathtoPrincess(n,grid)
