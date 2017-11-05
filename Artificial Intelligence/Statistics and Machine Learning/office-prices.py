from sklearn import linear_model
from sklearn.preprocessing import PolynomialFeatures
import numpy as np

def poly_regression():
    poly = PolynomialFeatures(degree = 4)
    reg = linear_model.LinearRegression()
    F, N = map(int,raw_input().split())
    features = []
    y = []

    for i in range (0, N):
        row = map(float, raw_input().split())
        y.append(row[F])
        features.append(row[0:F])

    f_ = poly.fit_transform(features)
    reg.fit(f_, y)

    T = input()
    for i in range(0, T):
        predict = []
        predict.append(map(float, raw_input().split()))
        p_ = poly.fit_transform(predict)
        ans = reg.predict(p_)
        print(round(ans, 2))

if __name__ == '__main__':
    poly_regression()
