def main():
    x, n = map(int, input().split())
    p = list(map(int, input().split()))

    min = 1000

    for i in range(-50, 150):

        if i in p:
            continue

        elif min > abs(x - i):
            result = i
            min = abs(x - i)

    print(result)


if __name__ == "__main__":
    main()
