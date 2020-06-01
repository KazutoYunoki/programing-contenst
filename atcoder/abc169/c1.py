import decimal


def main():
    A, B = map(decimal.Decimal, input().split())
    print(int(A * B))


if __name__ == "__main__":
    main()
