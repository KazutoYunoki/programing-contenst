def main():
    S = input()
    for num, i in enumerate(S, 1):
        if num % 2 == 0:
            if i != "L" and i != "U" and i != "D":
                print("No")
                exit(0)

        else:
            if i != "R" and i != "U" and i != "D":
                print("No")
                exit(0)

    print("Yes")


if __name__ == "__main__":
    main()
