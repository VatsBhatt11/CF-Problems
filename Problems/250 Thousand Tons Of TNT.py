import math

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        v = list(map(int, input().split()))
        
        if n == 1:
            print(0)
        else:
            prefix = [0]
            for num in v:
                prefix.append(num + prefix[-1])
            
            ans = 0
            for k in range(1, n + 1):
                if n % k == 0:
                    mini = float('inf')
                    maxi = -1
                    for i in range(0, n + 1, k):
                        j = i + k
                        if j <= n:
                            x = prefix[j] - prefix[i]
                            mini = min(mini, x)
                            maxi = max(maxi, x)
                            ans = max(ans, maxi - mini)
            print(ans)

if __name__ == "__main__":
    main()
