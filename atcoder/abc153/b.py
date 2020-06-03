def main():
    H, N = map(int, input().split())
    A = list(map(int, input().split()))

    damage = 0

    for i in range(N):
        damage += A[i]
        if damage >= H:
            print("Yes")
            exit(0)

    print("No")


if __name__ == "__main__":
    main()
