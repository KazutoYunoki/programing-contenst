def main():
    N = int(input())
    S = input()
    result = ""
    for i in S:
        ch = ord(i)
        if ch + N > 90:
            result += chr(ch - 90 + N + 64)
        else:
            result += chr(ch + N)

    print(result)


if __name__ == "__main__":
    main()
