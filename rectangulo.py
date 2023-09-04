class Rectangulo:
    def __init__(self):
        self.longitud = int(input("longitud del rectangulo:  "))
        self.ancho = int(input("ancho del rectangulo:  "))

    def calcularArea(self):
        area = self.longitud * self.ancho
        return f"el area del rectangulo es: {area}"

    def calcularPerimetro(self):
        perimetro = 2 * (self.longitud + self.ancho)
        return f"el perimetro del rectangulo es: {perimetro}"

    def cambiarLonguitud(self):
        resp = input("deseas cambiar la longitud del rectangulo: ")
        if resp == "si":
            self.longitud = int(input("ingresar la nueva longitud del rectangulo:  "))
        
    def cambiarAncho(self):
        resp = input("deseas cambiar el ancho del rectangulo: ")
        if resp == "si":
            self.ancho = int(input("ingresar el nuevo ancho del rectangulo:  "))


rectangulo = Rectangulo()

print(rectangulo.calcularArea())
print(rectangulo.calcularPerimetro())
rectangulo.cambiarAncho()
rectangulo.cambiarLonguitud()
print(rectangulo.calcularArea())
print(rectangulo.calcularPerimetro())