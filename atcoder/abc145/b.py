def main():
    N = int(input())
    S = input()
    if N % 2 != 0:
        print("No")
        exit(0)

    half = int(N / 2)
    for i in range(half):
        if S[i] != S[half + i]:
            print("No")
            exit(0)

    print("Yes")


if __name__ == "__main__":
    main()
