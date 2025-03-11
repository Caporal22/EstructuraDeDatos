import sys
import matplotlib.pyplot as plt

# Función para medir el tamaño de una estructura de datos con n elementos
def medir_tamano(n):
    lista = list(range(n))
    diccionario = {i: i for i in range(n)}
    conjunto = set(range(n))

    return sys.getsizeof(lista), sys.getsizeof(diccionario), sys.getsizeof(conjunto)

# Rango de tamaños a probar
rangos = [10, 100, 1000, 10000, 100000, 1000000]
tam_listas = []
tam_dicts = []
tam_sets = []

# Medir tamaños para cada cantidad de elementos
for n in rangos:
    tam_lista, tam_dict, tam_set = medir_tamano(n)
    tam_listas.append(tam_lista)
    tam_dicts.append(tam_dict)
    tam_sets.append(tam_set)

# 📊 Graficar los resultados
plt.figure(figsize=(10, 6))
plt.plot(rangos, tam_listas, marker='o', label="Lista (list)")
plt.plot(rangos, tam_dicts, marker='s', label="Diccionario (dict)")
plt.plot(rangos, tam_sets, marker='^', label="Conjunto (set)")

plt.xlabel("Número de elementos")
plt.ylabel("Tamaño en bytes")
plt.title("Crecimiento del tamaño en memoria según la estructura de datos")
plt.xscale("log")  # Escala logarítmica para mejor visualización
plt.yscale("log")
plt.legend()
plt.grid(True)
plt.show()
