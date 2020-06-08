def main():
    N = int(input())
    num_mal = []

    for i in range(9):
        for j in range(9):
            num_mal.append((i + 1) * (j + 1))

    if N in num_mal:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
