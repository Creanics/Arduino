# PinsManager

PinsManager est une librairie Arduino légère permettant de centraliser la déclaration et l’initialisation des pins, même dans des projets répartis sur plusieurs fichiers.

Elle évite de multiplier les appels à `pinMode()` et permet une initialisation propre et unique.

---

## ✨ Fonctionnalités

- Déclaration centralisée des pins
- Séparation claire entre logique et configuration matérielle
- Utilisable dans plusieurs fichiers (`.ino`, `.h`, `.cpp`)
- API simple et minimale
- Aucune allocation dynamique

---

## 📦 Installation

1. Copier le dossier `PinsManager` dans le dossier `libraries` d’Arduino
2. Redémarrer l’IDE Arduino
3. Inclure la librairie :

```cpp
#include <PinsManager.h>
```

---

## 🚀 Principe de fonctionnement

1. Déclarer les pins d’entrée et de sortie où nécessaire
2. Appeler une seule fois pins.init() dans le setup()
3. Toutes les pins sont initialisées automatiquement

---

## 🧪 Exemples 

- Utilisation Simple (un seul fichier)
- Projet multi-fichiers (Bouton + LED)
- Modules indépendants (Capteur + Relais)

---

## ⚠️ Remarques

- Nombre maximum d’entrées par défaut : **20**
- Nombre maximum de sorties par défaut : **20**
- Le nombre maximum de pins peut être personnalisé à la compilation via un `#define`
- Pour modifier la valeur par défaut, définir `MAX_PINS` **avant** d’inclure `PinsManager.h`
  - Exemple
    ```cpp
    #define MAX_PINS 10
    #include <PinsManager.h>
    ```
- Les pins sont configurées uniquement lors de l’appel à pins.init()
- Tous les addInput() et addOutput() doivent être appelés avant init()
- Aucun contrôle de dépassement n’est effectué lors de l’accès aux pins par index