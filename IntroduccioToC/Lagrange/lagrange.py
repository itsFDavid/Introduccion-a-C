import numpy as np
import matplotlib.pyplot as plt

def lagrange_interpolation(x, y, xi):
    """
    Interpolación de Lagrange
    :param x: puntos x conocidos
    :param y: puntos y conocidos
    :param xi: punto en el que se quiere evaluar el polinomio
    :return: valor interpolado
    """
    n = len(x)
    yi = 0
    for i in range(n):
        L = 1
        for j in range(n):
            if i != j:
                L *= (xi - x[j]) / (x[i] - x[j])
        yi += L * y[i]
    return yi

# Entrada de datos conocida (puntos x e y)
num_puntos = int(input("Ingrese el número de puntos conocidos: "))

x = []
y = []

print("Ingrese los puntos conocidos:")
for i in range(num_puntos):
    xi = float(input(f"Ingrese x[{i}]: "))
    yi = float(input(f"Ingrese y[{i}]: "))
    x.append(xi)
    y.append(yi)

x = np.array(x)
y = np.array(y)

# Puntos para evaluar el polinomio
x_nueva = np.linspace(min(x), max(x), 50)
y_nueva = np.array([lagrange_interpolation(x, y, xi) for xi in x_nueva])
for i in range(x_nueva.size):
    print(f'x[{i}] = {x_nueva[i]} \t y[{i}] = {y_nueva[i]}')

# Visualización de los resultados
plt.figure(figsize=(10, 6))
plt.plot(x, y, '-', label='Puntos conocidos')
plt.plot(x_nueva, y_nueva, '-', label='Polinomio de Lagrange')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.title('Interpolación de Lagrange')
plt.grid(True)



plt.show()

# Calcular el porcentaje de acierto
y_interpolada = np.array([lagrange_interpolation(x, y, xi) for xi in x])
error = np.abs(y - y_interpolada)
print(f'Error en la interpolación: {error}')
precision = 100 - (np.mean(error / y) * 100)

print(f'Porcentaje de acierto: {precision:.2f}%')
