sum = 0     # Inicia uma variavel "sum" com valor 0
for i in range(10):     # Repete 10 vezes
    n = float(input("Digite o numero: "))       # Pede um número ao user
    sum += n        # Adiciona n à variavel "sum"

media = sum/10      # Realiza a média
print(f'A média é: {media}')        # Imprime a média