from sklearn import linear_model
from sklearn.preprocessing import PolynomialFeatures
import numpy as np

def regression():
    data = open('trainingdata.txt')
    laptop = []
    tv = []

    poly = PolynomialFeatures(degree = 4)
    reg = linear_model.LinearRegression()

    for i in range(0, 100):
        row = map(float, data.readline().strip().split(','))
        x = []
        y = []
        x.append(row[0])
        y.append(row[1])
        laptop.append(x)
        tv.append(y)

    f_ = poly.fit_transform(laptop)
    reg.fit(f_, tv)

    s = []
    sample = []
    s.append(float(input()))
    sample.append(s)
    p_ = poly.fit_transform(sample)
    ans = reg.predict(p_)
    print(round(ans, 2))


if __name__ == '__main__':
    regression()
