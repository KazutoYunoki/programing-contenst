def main():
    N = int(input())
    A = list(map(int, input().split()))

    for e in A:
        if e % 2 == 0 and e % 3 != 0 and e % 5 != 0:
            print("DENIED")
            exit(0)

    print("APPROVED")


if __name__ == "__main__":
    main()
