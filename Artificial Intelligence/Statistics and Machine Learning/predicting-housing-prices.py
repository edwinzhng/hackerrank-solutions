from sklearn import linear_model
import numpy as np

def regression():
    reg = linear_model.LinearRegression()
    F, N = map(int,raw_input().split())
    features = []
    y = []
    for i in range (0, N):
        row = map(float, raw_input().split())
        y.append(row[F])
        features.append(row[0:F])
    reg.fit(features, y)

    T = input()
    for i in range(0, T):
        ans = 0
        row = []
        row.append(map(float, raw_input().split()))
        # dot product (matrix multiplication)
        ans = reg.predict(row)
        print(round(ans, 2))

if __name__ == '__main__':
    regression()
