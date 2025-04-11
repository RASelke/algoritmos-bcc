def fatorial(n):
    if n == 0:
        return 1
    else:
        return n*fatorial(n-1)

resp = int(input('Digite um valor: '))
print(f'{resp}! = {fatorial(resp)}')