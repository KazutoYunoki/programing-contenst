def main():

    A, B, K = map(int, input().split())

    if A > K:
        A -= K
    else:

        K -= A
        A = 0
        B -= K
        if B <= 0:
            print("0 0")
            exit(0)

    print(str(A) + " " + str(B))


if __name__ == "__main__":
    main()
