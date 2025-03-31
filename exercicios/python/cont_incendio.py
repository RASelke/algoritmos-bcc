lista = []
incendios = 0

ano = input("Qual ano deseja analisar: ")
estado = input("Qual estado deseja analisar: ")
estado = ("\"" + estado + "\"")

dir = open("./exercicios/docs/amazon.csv", "r")
if dir:
    for i in dir:
        dados = i.split(",")
        if dados[0] == ano and dados[1] == estado:
            lista.append(i)
            incendios += int(dados[3])

print(f'No ano de {ano} tiveram {incendios} incendios em {estado}')