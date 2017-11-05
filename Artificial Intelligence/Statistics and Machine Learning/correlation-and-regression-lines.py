from scipy import stats
import numpy as np
import math

def regression():
    strx = "15  12  8   8   7   7   7   6   5   3"
    stry = "10  25  17  11  13  17  20  13  9   15"
    physics = map(int, strx.split("  "))
    history = map(int, stry.split("  "))
    slope, intercept, r_value, p_value, std_err = stats.linregress(physics, history)
    # quick recap 1: Karl Pearson's coefficient of correlation
    print(p_value)
    # quick recap 2: slope
    print(slope)

    # quick recap 3: predicted value of history when physics = 10
    hist_predicted = 10 * slope + intercept
    print(hist_predicted)

    # quick recap 4: predicted value of x when y = 7 for 20x - 9y -107 = 0 (line of x on y)
    y = 7.0
    regression_y = ((107.0 + 9.0 * y) / 20.0)
    print(regression_y)

    # quick recap 5: variance of y when stdd_x = 3 for 4x - 5y + 33 = 0 (line of y on x)
    stdd_x = 3
    b_yx = 4.0/5.0 # slope of y on x
    b_xy = 9.0/20.0
    r = math.sqrt(b_yx * b_xy)
    stdd_y = (b_yx / r) * stdd_x
    variance = stdd_y**2
    print(variance)


if __name__ == '__main__':
    regression()
