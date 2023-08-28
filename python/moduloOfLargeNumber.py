from timing import timing

@timing
def calculateModulo(digits, freq, N):
    rem = 0
    for d, f in zip(digits, freq):
        n = int(str(rem) + (str(d) * f))
        rem = n % 11
    return rem

@timing
def calculateModuloV2(digits, freq, N):
    num = ''
    for d, f in zip(digits, freq):
        num += (str(d) * f)
    
    chunks = [num[i:i+2] for i in range(0, len(num), 2)]

    rem = 0
    for c in chunks:
        n = int(str(rem) + c)
        rem = n % 11

    return rem

def main():
    N = int(input())
    digits, freq = [], []
    for _ in range(N):
        digits.append(int(input()))
    for _ in range(N):
        freq.append(int(input()))
    mod = calculateModulo(digits, freq, N)
    print(mod)

if __name__ == "__main__":
    main()

# This is significantly slower
@timing
def calculateModuloDirect(digits, freq, N):
    num = ''
    for d, f in zip(digits, freq):
        num += (str(d) * f)
    print(num)
    return int(num) % 11
