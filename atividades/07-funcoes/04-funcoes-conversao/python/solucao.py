# Funções de conversão: Celsius→Fahrenheit e segundos→HH:MM:SS.
# Entrada: Celsius, segundos. Saída: conversões formatadas.

def celsius_para_fahrenheit(c):
    """Converte temperatura de Celsius para Fahrenheit."""
    return c * 9.0 / 5.0 + 32.0

def segundos_para_hhmmss(s):
    """Converte total de segundos para string HH:MM:SS."""
    h = s // 3600
    m = (s % 3600) // 60
    sg = s % 60
    return f"{h:02d}:{m:02d}:{sg:02d}"

celsius  = float(input())
segundos = int(input())

f = celsius_para_fahrenheit(celsius)
print(f"{celsius:.1f} C = {f:.1f} F")
print(segundos_para_hhmmss(segundos))
