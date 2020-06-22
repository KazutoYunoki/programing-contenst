def main():

    x = list(map(int, input().split()))
    for i, e in enumerate(x):
        if e == 0:
            print(i + 1)


if __name__ == "__main__":
    main()
