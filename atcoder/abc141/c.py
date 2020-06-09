def main():
    N, K, Q = map(int, input().split())
    A = list(int(input()) for _ in range(Q))

    people = [K - Q] * N

    for ans in A:
        people[ans - 1] += 1

    for i in people:
        if i > 0:
            print("Yes")
        else:
            print("No")


if __name__ == "__main__":
    main()
