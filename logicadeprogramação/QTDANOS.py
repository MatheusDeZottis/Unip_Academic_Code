anos = float(input("Insira a quantidade de anos que deseja coverter"))

meses_por_ano = 12
dias_por_ano = 365
horas_por_dia = 24
minutos_por_hora = 60
segundos_por_minuto = 60
# Calcula o total de meses
meses = anos * meses_por_ano
# Calcula o total de dias
dias = anos * dias_por_ano
# Calcula o total de horas
horas = dias * horas_por_dia
# Calcula o total de minutos
minutos = horas * minutos_por_hora
# Calcula o total de segundos
segundos = minutos * segundos_por_minuto

print(f"{anos}anos equivalem a aproximadamente ?")
print(f"{meses} meses")
print(f"{dias} dias")
print(f"{horas} horas")
print(f"{minutos} minutos")
print(f"{segundos} segundos")