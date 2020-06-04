def main():
    N = int(input())
    S, T = input().split()

    moji = []
    for i in range(N):
        moji.append(S[i])
        moji.append(T[i])

    print("".join(moji))


if __name__ == "__main__":
    main()
