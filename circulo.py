class Circulo:
    def __init__(self):
        self.pi = 3.1415
        self.radio = int(input("ingresar el radio del circulo:  "))

    def calcularArea(self):
        area = self.pi * (self.radio**2)
        return f"el area del circulo es: {area}"
    
    def calcularPerimetro(self):
        perimetro = 2 * self.pi * self.radio
        return f"el perimetro del circulo es: {perimetro}"
    
    def cambiarRadio(self):
        resp = input("deseas cambiar el radio del circulo:  ")
        if resp == "si":
            self.radio = int(input("ingresar el nuevo radio:  "))


circulo = Circulo()

print(circulo.calcularArea())
print(circulo.calcularPerimetro())
circulo.cambiarRadio()
print(circulo.calcularArea())
print(circulo.calcularPerimetro())