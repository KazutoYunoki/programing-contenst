def main():
    x, y = map(int, input().split())

    for i in range(x + 1):
        kame = (x - i) * 4
        turu = i * 2

        if (kame + turu) == y:
            print("Yes")
            exit(0)

    print("No")


if __name__ == "__main__":
    main()
