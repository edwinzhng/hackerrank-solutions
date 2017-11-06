from scipy import stats
import numpy as np
import math

def main():
    n = int(raw_input())
    data = map(float, raw_input().strip().split(" "))
    mean, median = np.mean(data), np.median(data)
    mode, sigma =  stats.mode(data), np.std(data)
    std_err = sigma / math.sqrt(n)
    confidence_low = mean - (1.96) * std_err
    confidence_high = mean + (1.96) * std_err

    print(round(mean,1))
    print(round(median,1))
    print(float(mode[0]))
    print(round(sigma,1))
    print(str(round(confidence_low, 1)) + " " + str(round(confidence_high, 1)))

if __name__ == '__main__':
    main()
