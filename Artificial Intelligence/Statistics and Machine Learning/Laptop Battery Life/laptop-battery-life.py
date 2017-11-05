from sklearn import linear_model
from sklearn.preprocessing import PolynomialFeatures
import numpy as np

def regression():
    data = open('trainingdata.txt')
    x = []
    y = []

    reg = linear_model.LinearRegression()

    for i in range(0, 100):
        row = map(float, data.readline().strip().split(','))
        if row[1] < 8.00:
            x.append([row[0]])
            y.append([row[1]])

    reg.fit(x, y)

    sample = ([[float(input())]])
    ans = reg.predict(sample)
    print(round(ans, 2))


if __name__ == '__main__':
    regression()
