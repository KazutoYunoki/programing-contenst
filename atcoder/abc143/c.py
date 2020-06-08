def main():
    N = int(input())
    S = list(input())

    merge = []
    sura = S[0]

    merge.append(sura)

    for i in S:
        if i != merge[-1]:
            merge.append(i)

    print(len(merge))


if __name__ == "__main__":
    main()
