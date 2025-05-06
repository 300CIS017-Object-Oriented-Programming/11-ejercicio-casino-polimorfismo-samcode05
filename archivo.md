# PREGUNTAS TEÓRICAS

## 1. ¿Qué indica que `Juego` es una clase abstracta?
- La presencia de métodos puros virtuales:
  ```cpp
  virtual float jugar(float gonzosApostar) = 0;
  virtual float calcularResultado(float gonzosApostar) = 0;
