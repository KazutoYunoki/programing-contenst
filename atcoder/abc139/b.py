def main():
    a, b = map(int, input().split())
    outlet = 1
    ans = 0
    while outlet < b:
        outlet += a - 1
        ans += 1

    print(ans)
    
        


if __name__ == "__main__":
    main()
