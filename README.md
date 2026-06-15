# Projet Cafetière - C++

Petit projet C++ orienté objet qui simule une cafetière.

## Structure du projet

```
├── cafetiere.h       # Déclaration de la classe
├── cafetiere.cpp     # Implémentation de la classe
└── main.cpp          # Point d'entrée du programme
```

## La classe `cafetiere`

### Attributs

| Attribut | Type | Description |
|---|---|---|
| `niveaueau` | `float` | Niveau d'eau dans la cafetière |
| `couleur` | `string` | Couleur de la cafetière |

### Méthodes

| Méthode | Description |
|---|---|
| `cafetiere()` | Constructeur — initialise le niveau d'eau |
| `~cafetiere()` | Destructeur |
| `couler()` | Fait couler la cafetière |

## Compilation

Avec g++ :

```bash
g++ main.cpp cafetiere.cpp -o cafetiere
```

## Exécution

```bash
./cafetiere
```

Sortie attendue :
```
Je coule
```
