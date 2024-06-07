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


x = np.array([8, 9, 12, 15, 18])
y = np.array([18, 21, 26, 27, 24])

print('Dime una hora para predecir la temperatura\nEn este rango:\n')
for i in range(x.size):
    print(f'{x[i]} horas')
    
hora_prediccion = float(input('Hora a predecir: '))

if hora_prediccion < min(x) or hora_prediccion > max(x):
    print('Hora fuera de rango')
    exit()



temperatura_predicha = lagrange_interpolation(x, y, hora_prediccion)
print(f"La temperatura predicha a las {hora_prediccion} horas es: {temperatura_predicha:.2f}°C")


x_nueva = np.linspace(min(x), max(x), 100)
y_nueva = np.array([lagrange_interpolation(x, y, xi) for xi in x_nueva])


plt.figure(figsize=(10, 6))
plt.plot(x, y, 'o', label='Puntos conocidos')
plt.plot(x_nueva, y_nueva, '-', label='Polinomio de Lagrange')

plt.axvline(hora_prediccion, color='r', linestyle='--', label=f'Predicción a las {hora_prediccion}')
plt.axhline(temperatura_predicha, color='g', linestyle='--', label=f'Temperatura predicha: {temperatura_predicha:.2f}°C')

plt.scatter([hora_prediccion], [temperatura_predicha], color='red')

plt.xlabel('Hora del día')
plt.ylabel('Temperatura (°C)')
plt.legend()
plt.title('Interpolación de Lagrange para la Predicción de la Temperatura')
plt.grid(True)
plt.show()
