def main():
    a, b = input().split()

    if int(a) < int(b):
        print(a * int(b))
    else:
        print(b * int(a))


if __name__ == "__main__":
    main()
