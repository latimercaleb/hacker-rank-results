# https://www.hackerrank.com/challenges/python-print/problem
if __name__ == '__main__':
    n = int(input())
    def printAllNumbersUpto(n):
        count = 1
        while count <= n:
            print(count, end= "")
            count += 1
    printAllNumbersUpto(n)
