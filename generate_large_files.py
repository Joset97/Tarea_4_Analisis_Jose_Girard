import random

def generate_numbers_file(filename, count):
    """
    Genera un archivo de texto con números aleatorios separados por comas.

    :param filename: Nombre del archivo.
    :param count: Cantidad de números a generar.
    """
    numbers = [str(random.randint(1, 10)) for _ in range(count)]
    with open(filename, 'w') as file:
        file.write(','.join(numbers))
    print(f"Archivo '{filename}' generado con {count} números.")

# Generar los archivos
generate_numbers_file("10_numbers.txt", 10)

