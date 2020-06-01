def main():

    MAX = 1e18

    n = int(input())
    A = list(map(int, input().split()))

    if 0 in A:
        print(0)
        exit(0)

    prod = 1
    for a in A:
        prod *= a
        if prod > MAX:
            print(-1)
            exit(0)

    print(prod)


if __name__ == "__main__":
    main()
